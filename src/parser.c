#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  sym_source_file = 29,
  sym__declaration = 30,
  sym__top_level_form = 31,
  sym_number = 32,
  sym_float = 33,
  sym_integer = 34,
  sym_unary_postfix = 35,
  sym_unary_op = 36,
  sym_char = 37,
  sym_unicode = 38,
  sym_unicode_name = 39,
  sym_quote = 40,
  sym_array = 41,
  sym_byte_array = 42,
  sym_complex = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_quote_repeat1 = 45,
  aux_sym_byte_array_repeat1 = 46,
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
  [sym_array] = "array",
  [sym_byte_array] = "byte_array",
  [sym_complex] = "complex",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quote_repeat1] = "quote_repeat1",
  [aux_sym_byte_array_repeat1] = "byte_array_repeat1",
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
  [sym_array] = sym_array,
  [sym_byte_array] = sym_byte_array,
  [sym_complex] = sym_complex,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_quote_repeat1] = aux_sym_quote_repeat1,
  [aux_sym_byte_array_repeat1] = aux_sym_byte_array_repeat1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      ADVANCE_MAP(
        'C', 108,
        'P', 109,
        '[', 123,
        '\\', 103,
        ']', 124,
        'd', 110,
        '{', 125,
        '}', 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'H') ADVANCE(6);
      if (lookahead == '{') ADVANCE(127);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'M') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == '\\') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(126);
      END_STATE();
    case 43:
      if (lookahead == '{') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(100);
      END_STATE();
    case 46:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(97);
      END_STATE();
    case 47:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(47);
      END_STATE();
    case 49:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(119);
      END_STATE();
    case 50:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      ADVANCE_MAP(
        '"', 1,
        '0', 81,
        'B', 42,
        'C', 12,
        'P', 20,
        '[', 123,
        '\\', 103,
        ']', 124,
        'd', 33,
        '{', 125,
        '}', 117,
        '+', 3,
        '-', 3,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_definition);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ratio);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 79,
        '/', 55,
        '+', 56,
        '-', 56,
        ',', 60,
        '_', 60,
        'B', 45,
        'b', 45,
        'E', 44,
        'e', 44,
        'O', 51,
        'o', 51,
        'X', 61,
        'x', 61,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 79,
        '/', 55,
        '+', 56,
        '-', 56,
        ',', 60,
        '_', 60,
        'E', 44,
        'e', 44,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 79,
        '/', 55,
        '+', 56,
        '-', 56,
        ',', 60,
        '_', 60,
        'E', 44,
        'e', 44,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 79,
        '/', 55,
        '+', 56,
        '-', 56,
        ',', 60,
        '_', 60,
        'E', 44,
        'e', 44,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_base16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_base08);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_CHAR_COLON);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_POSTPONE_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(122);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 'v')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'H') ADVANCE(6);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_unicode_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_unicode_token2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_unicode_token3);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_unicode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_octcode);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 72},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 72},
  [35] = {.lex_state = 72},
  [36] = {.lex_state = 72},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_definition] = ACTIONS(1),
    [anon_sym_CHAR_COLON] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POSTPONE_COLON] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(31),
    [sym_quote] = STATE(3),
    [sym_array] = STATE(3),
    [sym_byte_array] = STATE(3),
    [sym_complex] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
  },
  [2] = {
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(31),
    [sym_quote] = STATE(2),
    [sym_array] = STATE(2),
    [sym_byte_array] = STATE(2),
    [sym_complex] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_definition] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [aux_sym_float_token1] = ACTIONS(34),
    [aux_sym_float_token2] = ACTIONS(34),
    [aux_sym_float_token3] = ACTIONS(37),
    [sym_ratio] = ACTIONS(40),
    [sym_base10] = ACTIONS(43),
    [sym_base16] = ACTIONS(46),
    [sym_base08] = ACTIONS(46),
    [sym_base02] = ACTIONS(46),
    [anon_sym_CHAR_COLON] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(52),
    [anon_sym_POSTPONE_COLON] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_B_LBRACE] = ACTIONS(61),
    [anon_sym_C_LBRACE] = ACTIONS(64),
  },
  [3] = {
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(31),
    [sym_quote] = STATE(2),
    [sym_array] = STATE(2),
    [sym_byte_array] = STATE(2),
    [sym_complex] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_definition] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
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
  },
  [4] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(31),
    [sym_quote] = STATE(4),
    [sym_array] = STATE(4),
    [sym_byte_array] = STATE(4),
    [sym_complex] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(71),
    [aux_sym_float_token1] = ACTIONS(74),
    [aux_sym_float_token2] = ACTIONS(74),
    [aux_sym_float_token3] = ACTIONS(77),
    [sym_ratio] = ACTIONS(80),
    [sym_base10] = ACTIONS(83),
    [sym_base16] = ACTIONS(86),
    [sym_base08] = ACTIONS(86),
    [sym_base02] = ACTIONS(86),
    [anon_sym_CHAR_COLON] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(92),
    [anon_sym_POSTPONE_COLON] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_B_LBRACE] = ACTIONS(103),
    [anon_sym_C_LBRACE] = ACTIONS(106),
  },
  [5] = {
    [sym__top_level_form] = STATE(6),
    [sym_number] = STATE(6),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(6),
    [sym_unary_op] = STATE(31),
    [sym_quote] = STATE(6),
    [sym_array] = STATE(6),
    [sym_byte_array] = STATE(6),
    [sym_complex] = STATE(6),
    [aux_sym_quote_repeat1] = STATE(6),
    [sym_string] = ACTIONS(109),
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
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
  },
  [6] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(31),
    [sym_quote] = STATE(4),
    [sym_array] = STATE(4),
    [sym_byte_array] = STATE(4),
    [sym_complex] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(113),
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
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
  },
  [7] = {
    [sym__top_level_form] = STATE(8),
    [sym_number] = STATE(8),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(8),
    [sym_unary_op] = STATE(31),
    [sym_quote] = STATE(8),
    [sym_array] = STATE(8),
    [sym_byte_array] = STATE(8),
    [sym_complex] = STATE(8),
    [aux_sym_quote_repeat1] = STATE(8),
    [sym_string] = ACTIONS(117),
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
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
  },
  [8] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(31),
    [sym_quote] = STATE(4),
    [sym_array] = STATE(4),
    [sym_byte_array] = STATE(4),
    [sym_complex] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(113),
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
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(125), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(123), 17,
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
  [25] = 2,
    ACTIONS(129), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(127), 17,
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
  [50] = 2,
    ACTIONS(133), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(131), 17,
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
  [75] = 2,
    ACTIONS(137), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(135), 17,
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
  [100] = 2,
    ACTIONS(141), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(139), 17,
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
  [125] = 2,
    ACTIONS(145), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(143), 17,
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
  [150] = 2,
    ACTIONS(149), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(147), 17,
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
  [175] = 2,
    ACTIONS(153), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(151), 17,
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
  [200] = 2,
    ACTIONS(157), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(155), 17,
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
  [225] = 2,
    ACTIONS(161), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(159), 17,
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
  [250] = 2,
    ACTIONS(165), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(163), 17,
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
  [275] = 2,
    ACTIONS(169), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(167), 17,
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
  [300] = 2,
    ACTIONS(173), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(171), 17,
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
  [325] = 2,
    ACTIONS(177), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(175), 17,
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
  [350] = 2,
    ACTIONS(181), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(179), 17,
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
  [375] = 8,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(22), 2,
      sym_float,
      sym_integer,
    STATE(25), 2,
      sym_number,
      aux_sym_byte_array_repeat1,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [405] = 8,
    ACTIONS(188), 1,
      aux_sym_float_token3,
    ACTIONS(191), 1,
      sym_ratio,
    ACTIONS(194), 1,
      sym_base10,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(22), 2,
      sym_float,
      sym_integer,
    STATE(25), 2,
      sym_number,
      aux_sym_byte_array_repeat1,
    ACTIONS(197), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [435] = 8,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(22), 2,
      sym_float,
      sym_integer,
    STATE(24), 2,
      sym_number,
      aux_sym_byte_array_repeat1,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [465] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(28), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(22), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [491] = 7,
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
    STATE(22), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [517] = 5,
    ACTIONS(208), 1,
      aux_sym_unicode_token3,
    STATE(16), 1,
      sym_char,
    ACTIONS(206), 2,
      aux_sym_unicode_token1,
      aux_sym_unicode_token2,
    STATE(14), 2,
      sym_unicode,
      sym_unicode_name,
    ACTIONS(204), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      sym_octcode,
  [537] = 2,
    ACTIONS(210), 1,
      aux_sym_unicode_token4,
    ACTIONS(212), 1,
      aux_sym_unicode_name_token1,
  [544] = 1,
    ACTIONS(214), 1,
      sym_word,
  [548] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [552] = 1,
    ACTIONS(218), 1,
      sym_word,
  [556] = 1,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
  [560] = 1,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
  [564] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 25,
  [SMALL_STATE(11)] = 50,
  [SMALL_STATE(12)] = 75,
  [SMALL_STATE(13)] = 100,
  [SMALL_STATE(14)] = 125,
  [SMALL_STATE(15)] = 150,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 200,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 250,
  [SMALL_STATE(20)] = 275,
  [SMALL_STATE(21)] = 300,
  [SMALL_STATE(22)] = 325,
  [SMALL_STATE(23)] = 350,
  [SMALL_STATE(24)] = 375,
  [SMALL_STATE(25)] = 405,
  [SMALL_STATE(26)] = 435,
  [SMALL_STATE(27)] = 465,
  [SMALL_STATE(28)] = 491,
  [SMALL_STATE(29)] = 517,
  [SMALL_STATE(30)] = 537,
  [SMALL_STATE(31)] = 544,
  [SMALL_STATE(32)] = 548,
  [SMALL_STATE(33)] = 552,
  [SMALL_STATE(34)] = 556,
  [SMALL_STATE(35)] = 560,
  [SMALL_STATE(36)] = 564,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
