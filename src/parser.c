#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 48
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
  sym_collection = 41,
  sym_array = 42,
  sym_byte_array = 43,
  sym_complex = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_quote_repeat1 = 46,
  aux_sym_byte_array_repeat1 = 47,
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
  [sym_collection] = "collection",
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
  [sym_collection] = sym_collection,
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
  [31] = 14,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      ADVANCE_MAP(
        'C', 115,
        'P', 116,
        '[', 130,
        '\\', 110,
        ']', 131,
        'd', 117,
        '{', 132,
        '}', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == '}') ADVANCE(124);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(89);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(111);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'H') ADVANCE(8);
      if (lookahead == '{') ADVANCE(134);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == '\\') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == '{') ADVANCE(133);
      END_STATE();
    case 45:
      if (lookahead == '{') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(107);
      END_STATE();
    case 48:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(104);
      END_STATE();
    case 49:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 51:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 52:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(102);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      ADVANCE_MAP(
        '"', 1,
        '0', 83,
        'B', 44,
        'C', 14,
        'P', 22,
        '[', 130,
        '\\', 110,
        ']', 131,
        'd', 35,
        '{', 132,
        '}', 124,
        '+', 3,
        '-', 3,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_definition);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_ratio);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 81,
        '/', 57,
        '+', 58,
        '-', 58,
        ',', 62,
        '_', 62,
        'B', 47,
        'b', 47,
        'E', 46,
        'e', 46,
        'O', 53,
        'o', 53,
        'X', 63,
        'x', 63,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 81,
        '/', 57,
        '+', 58,
        '-', 58,
        ',', 62,
        '_', 62,
        'E', 46,
        'e', 46,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 81,
        '/', 57,
        '+', 58,
        '-', 58,
        ',', 62,
        '_', 62,
        'E', 46,
        'e', 46,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 81,
        '/', 57,
        '+', 58,
        '-', 58,
        ',', 62,
        '_', 62,
        'E', 46,
        'e', 46,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        ',', 62,
        '_', 62,
        'B', 47,
        'b', 47,
        'O', 53,
        'o', 53,
        'X', 63,
        'x', 63,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_base10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_base16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_base08);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(50);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(50);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(50);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_CHAR_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_POSTPONE_COLON);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(119);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(45);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(68);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(129);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 'v')) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'H') ADVANCE(8);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_unicode_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_unicode_token2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_unicode_token3);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_unicode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_octcode);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 74},
  [4] = {.lex_state = 74},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 74},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 74},
  [14] = {.lex_state = 74},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 74},
  [17] = {.lex_state = 74},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 74},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 74},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 74},
  [25] = {.lex_state = 74},
  [26] = {.lex_state = 74},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 51},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 74},
  [38] = {.lex_state = 74},
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
    [sym_source_file] = STATE(34),
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(33),
    [sym_quote] = STATE(3),
    [sym_collection] = STATE(3),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
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
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(33),
    [sym_quote] = STATE(2),
    [sym_collection] = STATE(2),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
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
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(33),
    [sym_quote] = STATE(2),
    [sym_collection] = STATE(2),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
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
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(33),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
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
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_unary_postfix] = STATE(6),
    [sym_unary_op] = STATE(33),
    [sym_quote] = STATE(6),
    [sym_collection] = STATE(6),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
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
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(33),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
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
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(33),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
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
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
  },
  [8] = {
    [sym__top_level_form] = STATE(7),
    [sym_number] = STATE(7),
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_unary_postfix] = STATE(7),
    [sym_unary_op] = STATE(33),
    [sym_quote] = STATE(7),
    [sym_collection] = STATE(7),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [aux_sym_quote_repeat1] = STATE(7),
    [sym_string] = ACTIONS(119),
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
  [375] = 2,
    ACTIONS(185), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(183), 17,
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
  [400] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(26), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(20), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [426] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(37), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(20), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [452] = 5,
    ACTIONS(191), 1,
      aux_sym_unicode_token3,
    STATE(11), 1,
      sym_char,
    ACTIONS(189), 2,
      aux_sym_unicode_token1,
      aux_sym_unicode_token2,
    STATE(15), 2,
      sym_unicode,
      sym_unicode_name,
    ACTIONS(187), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      sym_octcode,
  [472] = 4,
    ACTIONS(193), 1,
      sym_base10,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(196), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [488] = 4,
    ACTIONS(201), 1,
      sym_base10,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(30), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(203), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [504] = 4,
    ACTIONS(201), 1,
      sym_base10,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(203), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [520] = 2,
    ACTIONS(145), 1,
      sym_base10,
    ACTIONS(143), 4,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_RBRACE,
  [530] = 2,
    ACTIONS(209), 1,
      aux_sym_unicode_token4,
    ACTIONS(211), 1,
      aux_sym_unicode_name_token1,
  [537] = 1,
    ACTIONS(213), 1,
      sym_word,
  [541] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [545] = 1,
    ACTIONS(217), 1,
      sym_word,
  [549] = 1,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
  [553] = 1,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
  [557] = 1,
    ACTIONS(223), 1,
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
  [SMALL_STATE(25)] = 400,
  [SMALL_STATE(26)] = 426,
  [SMALL_STATE(27)] = 452,
  [SMALL_STATE(28)] = 472,
  [SMALL_STATE(29)] = 488,
  [SMALL_STATE(30)] = 504,
  [SMALL_STATE(31)] = 520,
  [SMALL_STATE(32)] = 530,
  [SMALL_STATE(33)] = 537,
  [SMALL_STATE(34)] = 541,
  [SMALL_STATE(35)] = 545,
  [SMALL_STATE(36)] = 549,
  [SMALL_STATE(37)] = 553,
  [SMALL_STATE(38)] = 557,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
