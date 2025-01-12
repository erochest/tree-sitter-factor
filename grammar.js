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
const FRY_QUOTE_START = "'["
const QUOTE_END = "]"

const ARRAY_START = "{"
const FRY_ARRAY_START = "'{"
const BYTE_ARRAY_START = "B{"
const COMPLEX_START = "C{"
const HASHSET_START = "HS{"
const FRY_HASHSET_START = "'HS{"
const HASHTABLE_START = "H{"
const FRY_HASHTABLE_START = "'H{"
const ID_HASHTABLE_START = "IH{"
const VECTOR_START = "V{"
const ARRAY_END = "}"

const EFFECT_START = "("
const EFFECT_SPLIT = "--"
const EFFECT_END = ")"

const FRY_QUOTE_SPLICE = "@"

const PATHNAME_START = "P\""
const STRING_BUFFER_START = "SBUF\""

const COLON = ":"
const COLON_COLON = "::"
const DEFINITION_END = ";"
const VAR_BINDING = ":>"

const PRIVATE_START = "<PRIVATE"
const PRIVATE_END = "PRIVATE>"

const ALIAS = "ALIAS:"

const SYNTAX = [
  "f",
  "t",
]
// const KERNEL = []

module.exports = grammar({
  name: "factor",

  rules: {
    source_file: $ => repeat($._declaration),

   _declaration: $ => choice(
      $.definition,
      $._top_level_form,
    ),

    definition: $ => seq(
      $._definition_prefix,
      $.symbol,
      $.effect,
      repeat($._in_definition_form),
      DEFINITION_END,
    ),

    _definition_prefix: $ => choice(
      $.colon,
      $.colon_colon,
    ),

    colon: $ => COLON,
    colon_colon: $ => COLON_COLON,

    _word_form: $ => choice(
      $.syntax,
      $.string,
      $.number,
      $.unary_postfix,
      $.quote,
      $.fry_quote,
      $.collection,
      $.tuple,
      $.effect,
      $.parse_time,
      $.symbol,
    ),

    _in_definition_form: $ => choice(
      $.var_binding,
      $._word_form,
    ),

    var_binding: $ => seq(
      VAR_BINDING,
      choice(
        $.symbol,
        seq(EFFECT_START, repeat1($.symbol), EFFECT_END),
      ),
    ),

    _top_level_form: $ => choice(
      $.private_block,
      $.alias,
      $._word_form,
    ),

    syntax: $ => choice(...SYNTAX),

    private_block: $ => seq(
      PRIVATE_START,
      repeat($._declaration),
      PRIVATE_END,
    ),

    alias: $ => seq(ALIAS, $.symbol, $.symbol),

    string: $ => /"(\\\"|[^"])*"/,

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

    quote: $ => seq(QUOTE_START, repeat($._quote_body_form), QUOTE_END),
    _quote_body_form: $ => choice(
      $._word_form,
    ),

    fry_quote: $ => seq(FRY_QUOTE_START, repeat($._fry_form), QUOTE_END),
    _fry_form: $ => choice(
      $._word_form,
      $._fry,
    ),
    _fry: $ => choice($.quote_splice),
    quote_splice: $ => FRY_QUOTE_SPLICE,

    collection: $ => choice(
      $.array,
      $.fry_array,
      $.byte_array,
      $.complex,
      $.hashset,
      $.fry_hashset,
      $.hashtable,
      $.fry_hashtable,
      $.id_hashtable,
      $.pathname,
      $.string_buffer,
      $.vector,
    ),

    array: $ => seq(ARRAY_START, repeat($._top_level_form), ARRAY_END),
    fry_array: $ => seq(FRY_ARRAY_START, repeat($._fry_form), ARRAY_END),
    byte_array: $ => seq(BYTE_ARRAY_START, repeat($.integer), ARRAY_END),
    complex: $ => seq(COMPLEX_START, $.number, $.number, ARRAY_END),
    hashset: $ => seq(HASHSET_START, repeat($._top_level_form), ARRAY_END),
    fry_hashset: $ => seq(FRY_HASHSET_START, repeat($._fry_form), ARRAY_END),
    hashtable: $ => seq(HASHTABLE_START, repeat($.array), ARRAY_END),
    fry_hashtable: $ => seq(
      FRY_HASHTABLE_START,
      repeat(choice($._fry, $.array)),
      ARRAY_END,
    ),
    id_hashtable: $ => seq(ID_HASHTABLE_START, repeat($.array), ARRAY_END),
    pathname: $ => seq(PATHNAME_START, /(\\\"|[^"])*"/),
    string_buffer: $ => seq(STRING_BUFFER_START, /(\\\"|[^"])*"/),
    vector: $ => seq(VECTOR_START, repeat($._top_level_form), ARRAY_END),

    tuple: $ => seq(
      "T{",
      $.symbol,
      optional(
        choice(
          seq($.f, repeat($._top_level_form)),
          repeat($.property_pair),
        ),
      ),
      "}",
    ),

    symbol: $ => /[^"\s]\S*/,
    f: $ => "f",
    property_pair: $ => seq(
      ARRAY_START,
      $.symbol,
      $._top_level_form,
      ARRAY_END,
    ),

    effect: $ => seq(
      EFFECT_START,
      field("input", optional($.inputs)),
      EFFECT_SPLIT,
      field("output", optional($.outputs)),
      EFFECT_END,
    ),
    inputs: $ => repeat1($._effect_item),
    outputs: $ => repeat1($._effect_item),
    _effect_item: $ => choice(
      $.symbol,
      $.effect,
    ),

    parse_time: $ => seq("<<", repeat($._declaration), ">>"),
  },
});
