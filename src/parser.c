#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_definition = 1,
  sym_string = 2,
  aux_sym_float_token1 = 3,
  aux_sym_float_token2 = 4,
  aux_sym_float_token3 = 5,
  sym_ratio = 6,
  sym_base10 = 7,
  sym_base16 = 8,
  sym_base08 = 9,
  sym_base02 = 10,
  anon_sym_CHAR_COLON = 11,
  anon_sym_BSLASH = 12,
  anon_sym_POSTPONE_COLON = 13,
  sym_word = 14,
  aux_sym_char_token1 = 15,
  aux_sym_char_token2 = 16,
  aux_sym_unicode_token1 = 17,
  aux_sym_unicode_token2 = 18,
  aux_sym_unicode_token3 = 19,
  aux_sym_unicode_token4 = 20,
  anon_sym_RBRACE = 21,
  aux_sym_unicode_name_token1 = 22,
  sym_octcode = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LBRACE = 26,
  anon_sym_B_LBRACE = 27,
  anon_sym_C_LBRACE = 28,
  anon_sym_H_LBRACE = 29,
  anon_sym_IH_LBRACE = 30,
  anon_sym_SBUF_DQUOTE = 31,
  aux_sym_string_buffer_token1 = 32,
  anon_sym_V_LBRACE = 33,
  sym_source_file = 34,
  sym__declaration = 35,
  sym__top_level_form = 36,
  sym_number = 37,
  sym_float = 38,
  sym_integer = 39,
  sym_unary_postfix = 40,
  sym_unary_op = 41,
  sym_char = 42,
  sym_unicode = 43,
  sym_unicode_name = 44,
  sym_quote = 45,
  sym_collection = 46,
  sym_array = 47,
  sym_byte_array = 48,
  sym_complex = 49,
  sym_hashtable = 50,
  sym_id_hashtable = 51,
  sym_string_buffer = 52,
  sym_vector = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_quote_repeat1 = 55,
  aux_sym_byte_array_repeat1 = 56,
  aux_sym_hashtable_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_definition] = "definition",
  [sym_string] = "string",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [sym_ratio] = "ratio",
  [sym_base10] = "base10",
  [sym_base16] = "base16",
  [sym_base08] = "base08",
  [sym_base02] = "base02",
  [anon_sym_CHAR_COLON] = "CHAR:",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POSTPONE_COLON] = "POSTPONE:",
  [sym_word] = "word",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [aux_sym_unicode_token1] = "unicode_token1",
  [aux_sym_unicode_token2] = "unicode_token2",
  [aux_sym_unicode_token3] = "unicode_token3",
  [aux_sym_unicode_token4] = "unicode_token4",
  [anon_sym_RBRACE] = "}",
  [aux_sym_unicode_name_token1] = "unicode_name_token1",
  [sym_octcode] = "octcode",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_B_LBRACE] = "B{",
  [anon_sym_C_LBRACE] = "C{",
  [anon_sym_H_LBRACE] = "H{",
  [anon_sym_IH_LBRACE] = "IH{",
  [anon_sym_SBUF_DQUOTE] = "SBUF\"",
  [aux_sym_string_buffer_token1] = "string_buffer_token1",
  [anon_sym_V_LBRACE] = "V{",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym__top_level_form] = "_top_level_form",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_unary_postfix] = "unary_postfix",
  [sym_unary_op] = "unary_op",
  [sym_char] = "char",
  [sym_unicode] = "unicode",
  [sym_unicode_name] = "unicode_name",
  [sym_quote] = "quote",
  [sym_collection] = "collection",
  [sym_array] = "array",
  [sym_byte_array] = "byte_array",
  [sym_complex] = "complex",
  [sym_hashtable] = "hashtable",
  [sym_id_hashtable] = "id_hashtable",
  [sym_string_buffer] = "string_buffer",
  [sym_vector] = "vector",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quote_repeat1] = "quote_repeat1",
  [aux_sym_byte_array_repeat1] = "byte_array_repeat1",
  [aux_sym_hashtable_repeat1] = "hashtable_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_definition] = sym_definition,
  [sym_string] = sym_string,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [sym_ratio] = sym_ratio,
  [sym_base10] = sym_base10,
  [sym_base16] = sym_base16,
  [sym_base08] = sym_base08,
  [sym_base02] = sym_base02,
  [anon_sym_CHAR_COLON] = anon_sym_CHAR_COLON,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_POSTPONE_COLON] = anon_sym_POSTPONE_COLON,
  [sym_word] = sym_word,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [aux_sym_unicode_token1] = aux_sym_unicode_token1,
  [aux_sym_unicode_token2] = aux_sym_unicode_token2,
  [aux_sym_unicode_token3] = aux_sym_unicode_token3,
  [aux_sym_unicode_token4] = aux_sym_unicode_token4,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_unicode_name_token1] = aux_sym_unicode_name_token1,
  [sym_octcode] = sym_octcode,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_B_LBRACE] = anon_sym_B_LBRACE,
  [anon_sym_C_LBRACE] = anon_sym_C_LBRACE,
  [anon_sym_H_LBRACE] = anon_sym_H_LBRACE,
  [anon_sym_IH_LBRACE] = anon_sym_IH_LBRACE,
  [anon_sym_SBUF_DQUOTE] = anon_sym_SBUF_DQUOTE,
  [aux_sym_string_buffer_token1] = aux_sym_string_buffer_token1,
  [anon_sym_V_LBRACE] = anon_sym_V_LBRACE,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym__top_level_form] = sym__top_level_form,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_unary_postfix] = sym_unary_postfix,
  [sym_unary_op] = sym_unary_op,
  [sym_char] = sym_char,
  [sym_unicode] = sym_unicode,
  [sym_unicode_name] = sym_unicode_name,
  [sym_quote] = sym_quote,
  [sym_collection] = sym_collection,
  [sym_array] = sym_array,
  [sym_byte_array] = sym_byte_array,
  [sym_complex] = sym_complex,
  [sym_hashtable] = sym_hashtable,
  [sym_id_hashtable] = sym_id_hashtable,
  [sym_string_buffer] = sym_string_buffer,
  [sym_vector] = sym_vector,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_quote_repeat1] = aux_sym_quote_repeat1,
  [aux_sym_byte_array_repeat1] = aux_sym_byte_array_repeat1,
  [aux_sym_hashtable_repeat1] = aux_sym_hashtable_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_ratio] = {
    .visible = true,
    .named = true,
  },
  [sym_base10] = {
    .visible = true,
    .named = true,
  },
  [sym_base16] = {
    .visible = true,
    .named = true,
  },
  [sym_base08] = {
    .visible = true,
    .named = true,
  },
  [sym_base02] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CHAR_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POSTPONE_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unicode_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_octcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IH_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SBUF_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_buffer_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_V_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__top_level_form] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_postfix] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_name] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_collection] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_array] = {
    .visible = true,
    .named = true,
  },
  [sym_complex] = {
    .visible = true,
    .named = true,
  },
  [sym_hashtable] = {
    .visible = true,
    .named = true,
  },
  [sym_id_hashtable] = {
    .visible = true,
    .named = true,
  },
  [sym_string_buffer] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_byte_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hashtable_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 24,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(87);
      if (lookahead == 'P') ADVANCE(128);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(149);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(122);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'F') ADVANCE(3);
      END_STATE();
    case 21:
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == '{') ADVANCE(146);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == '\\') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == '{') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == '{') ADVANCE(147);
      END_STATE();
    case 55:
      if (lookahead == '{') ADVANCE(152);
      END_STATE();
    case 56:
      if (lookahead == '{') ADVANCE(148);
      END_STATE();
    case 57:
      if (lookahead == '{') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 59:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      END_STATE();
    case 60:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(117);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(61);
      END_STATE();
    case 63:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 64:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(115);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      ADVANCE_MAP(
        '"', 1,
        '0', 96,
        'B', 53,
        'C', 21,
        'H', 54,
        'I', 22,
        'P', 30,
        'S', 14,
        'V', 55,
        '[', 142,
        '\\', 123,
        ']', 143,
        'd', 44,
        '{', 144,
        '}', 136,
        '+', 8,
        '-', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_definition);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ratio);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 94,
        '/', 69,
        '+', 70,
        '-', 70,
        ',', 74,
        '_', 74,
        'B', 59,
        'b', 59,
        'E', 58,
        'e', 58,
        'O', 65,
        'o', 65,
        'X', 75,
        'x', 75,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 94,
        '/', 69,
        '+', 70,
        '-', 70,
        ',', 74,
        '_', 74,
        'E', 58,
        'e', 58,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 94,
        '/', 69,
        '+', 70,
        '-', 70,
        ',', 74,
        '_', 74,
        'E', 58,
        'e', 58,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 94,
        '/', 69,
        '+', 70,
        '-', 70,
        ',', 74,
        '_', 74,
        'E', 58,
        'e', 58,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        ',', 74,
        '_', 74,
        'B', 59,
        'b', 59,
        'O', 65,
        'o', 65,
        'X', 75,
        'x', 75,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_base10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_base16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_base08);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_CHAR_COLON);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_POSTPONE_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(141);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 'v')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_unicode_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_unicode_token2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_unicode_token3);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_unicode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_octcode);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_H_LBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_IH_LBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SBUF_DQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_string_buffer_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_buffer_token1);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_V_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 86},
  [2] = {.lex_state = 86},
  [3] = {.lex_state = 86},
  [4] = {.lex_state = 86},
  [5] = {.lex_state = 86},
  [6] = {.lex_state = 86},
  [7] = {.lex_state = 86},
  [8] = {.lex_state = 86},
  [9] = {.lex_state = 86},
  [10] = {.lex_state = 86},
  [11] = {.lex_state = 86},
  [12] = {.lex_state = 86},
  [13] = {.lex_state = 86},
  [14] = {.lex_state = 86},
  [15] = {.lex_state = 86},
  [16] = {.lex_state = 86},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 86},
  [19] = {.lex_state = 86},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 86},
  [22] = {.lex_state = 86},
  [23] = {.lex_state = 86},
  [24] = {.lex_state = 86},
  [25] = {.lex_state = 86},
  [26] = {.lex_state = 86},
  [27] = {.lex_state = 86},
  [28] = {.lex_state = 86},
  [29] = {.lex_state = 86},
  [30] = {.lex_state = 86},
  [31] = {.lex_state = 86},
  [32] = {.lex_state = 86},
  [33] = {.lex_state = 86},
  [34] = {.lex_state = 86},
  [35] = {.lex_state = 86},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 86},
  [42] = {.lex_state = 86},
  [43] = {.lex_state = 86},
  [44] = {.lex_state = 86},
  [45] = {.lex_state = 86},
  [46] = {.lex_state = 63},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 86},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 64},
  [51] = {.lex_state = 64},
  [52] = {.lex_state = 86},
  [53] = {.lex_state = 86},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_definition] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POSTPONE_COLON] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(50),
    [sym_quote] = STATE(2),
    [sym_collection] = STATE(2),
    [sym_array] = STATE(14),
    [sym_byte_array] = STATE(14),
    [sym_complex] = STATE(14),
    [sym_hashtable] = STATE(14),
    [sym_id_hashtable] = STATE(14),
    [sym_string_buffer] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_definition] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_H_LBRACE] = ACTIONS(29),
    [anon_sym_IH_LBRACE] = ACTIONS(31),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(33),
    [anon_sym_V_LBRACE] = ACTIONS(35),
  },
  [2] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(50),
    [sym_quote] = STATE(3),
    [sym_collection] = STATE(3),
    [sym_array] = STATE(14),
    [sym_byte_array] = STATE(14),
    [sym_complex] = STATE(14),
    [sym_hashtable] = STATE(14),
    [sym_id_hashtable] = STATE(14),
    [sym_string_buffer] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_definition] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_H_LBRACE] = ACTIONS(29),
    [anon_sym_IH_LBRACE] = ACTIONS(31),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(33),
    [anon_sym_V_LBRACE] = ACTIONS(35),
  },
  [3] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(50),
    [sym_quote] = STATE(3),
    [sym_collection] = STATE(3),
    [sym_array] = STATE(14),
    [sym_byte_array] = STATE(14),
    [sym_complex] = STATE(14),
    [sym_hashtable] = STATE(14),
    [sym_id_hashtable] = STATE(14),
    [sym_string_buffer] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_definition] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [aux_sym_float_token1] = ACTIONS(46),
    [aux_sym_float_token2] = ACTIONS(46),
    [aux_sym_float_token3] = ACTIONS(49),
    [sym_ratio] = ACTIONS(52),
    [sym_base10] = ACTIONS(55),
    [sym_base16] = ACTIONS(58),
    [sym_base08] = ACTIONS(58),
    [sym_base02] = ACTIONS(58),
    [anon_sym_CHAR_COLON] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(64),
    [anon_sym_POSTPONE_COLON] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_B_LBRACE] = ACTIONS(73),
    [anon_sym_C_LBRACE] = ACTIONS(76),
    [anon_sym_H_LBRACE] = ACTIONS(79),
    [anon_sym_IH_LBRACE] = ACTIONS(82),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(85),
    [anon_sym_V_LBRACE] = ACTIONS(88),
  },
  [4] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(50),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(14),
    [sym_byte_array] = STATE(14),
    [sym_complex] = STATE(14),
    [sym_hashtable] = STATE(14),
    [sym_id_hashtable] = STATE(14),
    [sym_string_buffer] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(91),
    [aux_sym_float_token1] = ACTIONS(94),
    [aux_sym_float_token2] = ACTIONS(94),
    [aux_sym_float_token3] = ACTIONS(97),
    [sym_ratio] = ACTIONS(100),
    [sym_base10] = ACTIONS(103),
    [sym_base16] = ACTIONS(106),
    [sym_base08] = ACTIONS(106),
    [sym_base02] = ACTIONS(106),
    [anon_sym_CHAR_COLON] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(112),
    [anon_sym_POSTPONE_COLON] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_B_LBRACE] = ACTIONS(123),
    [anon_sym_C_LBRACE] = ACTIONS(126),
    [anon_sym_H_LBRACE] = ACTIONS(129),
    [anon_sym_IH_LBRACE] = ACTIONS(132),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(135),
    [anon_sym_V_LBRACE] = ACTIONS(138),
  },
  [5] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(50),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(14),
    [sym_byte_array] = STATE(14),
    [sym_complex] = STATE(14),
    [sym_hashtable] = STATE(14),
    [sym_id_hashtable] = STATE(14),
    [sym_string_buffer] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(141),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_H_LBRACE] = ACTIONS(29),
    [anon_sym_IH_LBRACE] = ACTIONS(31),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(33),
    [anon_sym_V_LBRACE] = ACTIONS(35),
  },
  [6] = {
    [sym__top_level_form] = STATE(5),
    [sym_number] = STATE(5),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_unary_postfix] = STATE(5),
    [sym_unary_op] = STATE(50),
    [sym_quote] = STATE(5),
    [sym_collection] = STATE(5),
    [sym_array] = STATE(14),
    [sym_byte_array] = STATE(14),
    [sym_complex] = STATE(14),
    [sym_hashtable] = STATE(14),
    [sym_id_hashtable] = STATE(14),
    [sym_string_buffer] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_quote_repeat1] = STATE(5),
    [sym_string] = ACTIONS(145),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_H_LBRACE] = ACTIONS(29),
    [anon_sym_IH_LBRACE] = ACTIONS(31),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(33),
    [anon_sym_V_LBRACE] = ACTIONS(35),
  },
  [7] = {
    [sym__top_level_form] = STATE(9),
    [sym_number] = STATE(9),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_unary_postfix] = STATE(9),
    [sym_unary_op] = STATE(50),
    [sym_quote] = STATE(9),
    [sym_collection] = STATE(9),
    [sym_array] = STATE(14),
    [sym_byte_array] = STATE(14),
    [sym_complex] = STATE(14),
    [sym_hashtable] = STATE(14),
    [sym_id_hashtable] = STATE(14),
    [sym_string_buffer] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_quote_repeat1] = STATE(9),
    [sym_string] = ACTIONS(149),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_H_LBRACE] = ACTIONS(29),
    [anon_sym_IH_LBRACE] = ACTIONS(31),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(33),
    [anon_sym_V_LBRACE] = ACTIONS(35),
  },
  [8] = {
    [sym__top_level_form] = STATE(10),
    [sym_number] = STATE(10),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_unary_postfix] = STATE(10),
    [sym_unary_op] = STATE(50),
    [sym_quote] = STATE(10),
    [sym_collection] = STATE(10),
    [sym_array] = STATE(14),
    [sym_byte_array] = STATE(14),
    [sym_complex] = STATE(14),
    [sym_hashtable] = STATE(14),
    [sym_id_hashtable] = STATE(14),
    [sym_string_buffer] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_quote_repeat1] = STATE(10),
    [sym_string] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_H_LBRACE] = ACTIONS(29),
    [anon_sym_IH_LBRACE] = ACTIONS(31),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(33),
    [anon_sym_V_LBRACE] = ACTIONS(35),
  },
  [9] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(50),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(14),
    [sym_byte_array] = STATE(14),
    [sym_complex] = STATE(14),
    [sym_hashtable] = STATE(14),
    [sym_id_hashtable] = STATE(14),
    [sym_string_buffer] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(141),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_H_LBRACE] = ACTIONS(29),
    [anon_sym_IH_LBRACE] = ACTIONS(31),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(33),
    [anon_sym_V_LBRACE] = ACTIONS(35),
  },
  [10] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(50),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(14),
    [sym_byte_array] = STATE(14),
    [sym_complex] = STATE(14),
    [sym_hashtable] = STATE(14),
    [sym_id_hashtable] = STATE(14),
    [sym_string_buffer] = STATE(14),
    [sym_vector] = STATE(14),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(141),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_H_LBRACE] = ACTIONS(29),
    [anon_sym_IH_LBRACE] = ACTIONS(31),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(33),
    [anon_sym_V_LBRACE] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(163), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(161), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [29] = 2,
    ACTIONS(167), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(165), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [58] = 2,
    ACTIONS(171), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(169), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [87] = 2,
    ACTIONS(175), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(173), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [116] = 2,
    ACTIONS(179), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(177), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [145] = 2,
    ACTIONS(183), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(181), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [174] = 2,
    ACTIONS(187), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(185), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [203] = 2,
    ACTIONS(191), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(189), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [232] = 2,
    ACTIONS(195), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(193), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [261] = 2,
    ACTIONS(199), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(197), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [290] = 2,
    ACTIONS(203), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(201), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [319] = 2,
    ACTIONS(207), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(205), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [348] = 2,
    ACTIONS(211), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(209), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [377] = 2,
    ACTIONS(215), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(213), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [406] = 2,
    ACTIONS(219), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(217), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [435] = 2,
    ACTIONS(223), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(221), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [464] = 2,
    ACTIONS(227), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(225), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [493] = 2,
    ACTIONS(231), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(229), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [522] = 2,
    ACTIONS(235), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(233), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [551] = 2,
    ACTIONS(239), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(237), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [580] = 2,
    ACTIONS(243), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(241), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [609] = 2,
    ACTIONS(247), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(245), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [638] = 2,
    ACTIONS(251), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(249), 21,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [667] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(35), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(19), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [693] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(48), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(19), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [719] = 5,
    ACTIONS(257), 1,
      aux_sym_unicode_token3,
    STATE(13), 1,
      sym_char,
    ACTIONS(255), 2,
      aux_sym_unicode_token1,
      aux_sym_unicode_token2,
    STATE(12), 2,
      sym_unicode,
      sym_unicode_name,
    ACTIONS(253), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      sym_octcode,
  [739] = 4,
    ACTIONS(259), 1,
      sym_base10,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(261), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [755] = 4,
    ACTIONS(259), 1,
      sym_base10,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(261), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [771] = 4,
    ACTIONS(267), 1,
      sym_base10,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(270), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [787] = 2,
    ACTIONS(215), 1,
      sym_base10,
    ACTIONS(213), 4,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_RBRACE,
  [797] = 3,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(41), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [808] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(45), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [819] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [830] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [841] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [852] = 2,
    ACTIONS(288), 1,
      aux_sym_unicode_token4,
    ACTIONS(290), 1,
      aux_sym_unicode_name_token1,
  [859] = 1,
    ACTIONS(292), 1,
      aux_sym_string_buffer_token1,
  [863] = 1,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
  [867] = 1,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
  [871] = 1,
    ACTIONS(298), 1,
      sym_word,
  [875] = 1,
    ACTIONS(300), 1,
      sym_word,
  [879] = 1,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
  [883] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 29,
  [SMALL_STATE(13)] = 58,
  [SMALL_STATE(14)] = 87,
  [SMALL_STATE(15)] = 116,
  [SMALL_STATE(16)] = 145,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 261,
  [SMALL_STATE(21)] = 290,
  [SMALL_STATE(22)] = 319,
  [SMALL_STATE(23)] = 348,
  [SMALL_STATE(24)] = 377,
  [SMALL_STATE(25)] = 406,
  [SMALL_STATE(26)] = 435,
  [SMALL_STATE(27)] = 464,
  [SMALL_STATE(28)] = 493,
  [SMALL_STATE(29)] = 522,
  [SMALL_STATE(30)] = 551,
  [SMALL_STATE(31)] = 580,
  [SMALL_STATE(32)] = 609,
  [SMALL_STATE(33)] = 638,
  [SMALL_STATE(34)] = 667,
  [SMALL_STATE(35)] = 693,
  [SMALL_STATE(36)] = 719,
  [SMALL_STATE(37)] = 739,
  [SMALL_STATE(38)] = 755,
  [SMALL_STATE(39)] = 771,
  [SMALL_STATE(40)] = 787,
  [SMALL_STATE(41)] = 797,
  [SMALL_STATE(42)] = 808,
  [SMALL_STATE(43)] = 819,
  [SMALL_STATE(44)] = 830,
  [SMALL_STATE(45)] = 841,
  [SMALL_STATE(46)] = 852,
  [SMALL_STATE(47)] = 859,
  [SMALL_STATE(48)] = 863,
  [SMALL_STATE(49)] = 867,
  [SMALL_STATE(50)] = 871,
  [SMALL_STATE(51)] = 875,
  [SMALL_STATE(52)] = 879,
  [SMALL_STATE(53)] = 883,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtable, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtable, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_hashtable, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_hashtable, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_buffer, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_buffer, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_hashtable, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_hashtable, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtable, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtable, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hashtable_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hashtable_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_factor(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
