/**
 * @file A tree-sitter grammar for the Factor (https://factorcode.org/) programming language.
 * @author Eric Rochester <erochest@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const UNARY_POSTFIX = [
  "\\",
  "POSTPONE:",
]
const CHAR_PREFIX = "CHAR:"
const QUOTE_START = "["
const QUOTE_END = "]"

const ARRAY_START = "{"
const BYTE_ARRAY_START = "B{"
const COMPLEX_START = "C{"
const ARRAY_END = "}"

module.exports = grammar({
  name: "factor",

  rules: {
    source_file: $ => repeat($._declaration),

   _declaration: $ => choice(
      $.definition,
      $._top_level_form,
    ),

    definition: $ => "definition_NOT_IMPLEMENTED",

    _top_level_form: $ => choice(
      $.string,
      $.number,
      $.unary_postfix,
      $.quote,
      $.collection,
    ),

    string: $ => /"[^"]*"/,

    number: $ => choice(
      $.float,
      $.ratio,
      $.integer,
    ),

    float: $ => choice(
      /[-+]?(\d+[-+])?\d+\/\d+\./,
      /[-+]?\d+(\.\d+)?[eE][-+]?\d+/,
      /[-+]?\d+\.\d*/,
    ),

    _exp: $ => seq(/[eE]/, optional($._sign), $._b10),

    ratio: $ =>  /[-+]?(\d+[-+])?\d+\/\d+/,

    integer: $ => choice(
      $.base10,
      $.base16,
      $.base08,
      $.base02,
    ),
    
    _sign: $ => choice("+", "-"),
    base10: $ => /[-+]?(\d+|\d{1,3}([,_]\d{3})+)/,
    _b10: $ => /(\d+|\d{1,3}([,_]\d{3})+)/,
    base16: $ => /[-+]?0[xX]([\da-fA-F]+|[\da-fA-F]{1,3}([,_][\da-fA-F]{3})+)/,
    base08: $ => /[-+]?0[oO]([0-7]+|[0-7]{1,3}([,_][0-7]{3})+)/,
    base02: $ => /[-+]?0[bB]([01]+|[01]{1,3}([,_][01]{3})+)/,

    unary_postfix: $ => choice(
      seq($.unary_op, $.word),
      seq(CHAR_PREFIX, $.char),
    ),
    unary_op: $ => choice(...UNARY_POSTFIX),

    word: $ => /\S+/,
    char: $ => choice(
      /\S/,
      /\\[\\stnrbvf0e"]/,
      $.unicode,
      $.unicode_name,
      $.octcode,
    ),
    unicode: $ => choice(
      /\\[xX][\da-fA-F]{2}/,
      /\\[uU][\da-fA-F]{6}/,
      seq(/\\[uU]\{/, /[\da-fA-F]+/, "}"),
    ),
    unicode_name: $ => seq(/\\[uU]\{/, /[^}]+/, "}"),
    octcode: $ => /\\[0-7]{1,3}/,

    quote: $ => seq(QUOTE_START, repeat($._top_level_form), QUOTE_END),

    collection: $ => choice(
      $.array,
      $.byte_array,
      $.complex,
    ),

    array: $ => seq(ARRAY_START, repeat($._top_level_form), ARRAY_END),
    byte_array: $ => seq(BYTE_ARRAY_START, repeat($.integer), ARRAY_END),
    complex: $ => seq(COMPLEX_START, $.number, $.number, ARRAY_END),
  }
});
