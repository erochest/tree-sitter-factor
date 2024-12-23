/**
 * @file A tree-sitter grammar for the Factor (https://factorcode.org/) programming language.
 * @author Eric Rochester <erochest@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

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
      $.string
    ),

    string: $ => /"[^"]*"/,
  }
});
