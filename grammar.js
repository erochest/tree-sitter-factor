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
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
