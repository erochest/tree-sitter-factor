#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_V_LBRACE = 29,
  anon_sym_SBUF_DQUOTE = 30,
  aux_sym_string_buffer_token1 = 31,
  sym_source_file = 32,
  sym__declaration = 33,
  sym__top_level_form = 34,
  sym_number = 35,
  sym_float = 36,
  sym_integer = 37,
  sym_unary_postfix = 38,
  sym_unary_op = 39,
  sym_char = 40,
  sym_unicode = 41,
  sym_unicode_name = 42,
  sym_quote = 43,
  sym_collection = 44,
  sym_array = 45,
  sym_byte_array = 46,
  sym_complex = 47,
  sym_vector = 48,
  sym_string_buffer = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_quote_repeat1 = 51,
  aux_sym_byte_array_repeat1 = 52,
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
  [anon_sym_V_LBRACE] = "V{",
  [anon_sym_SBUF_DQUOTE] = "SBUF\"",
  [aux_sym_string_buffer_token1] = "string_buffer_token1",
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
  [sym_vector] = "vector",
  [sym_string_buffer] = "string_buffer",
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
  [anon_sym_V_LBRACE] = anon_sym_V_LBRACE,
  [anon_sym_SBUF_DQUOTE] = anon_sym_SBUF_DQUOTE,
  [aux_sym_string_buffer_token1] = aux_sym_string_buffer_token1,
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
  [sym_vector] = sym_vector,
  [sym_string_buffer] = sym_string_buffer,
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
  [anon_sym_V_LBRACE] = {
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
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_string_buffer] = {
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
  [36] = 23,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(82);
      ADVANCE_MAP(
        'C', 122,
        'P', 123,
        '[', 137,
        '\\', 117,
        ']', 138,
        'd', 124,
        '{', 139,
        '}', 131,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(143);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(118);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(2);
      END_STATE();
    case 19:
      if (lookahead == 'H') ADVANCE(11);
      if (lookahead == '{') ADVANCE(141);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == '\\') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == '{') ADVANCE(140);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(142);
      END_STATE();
    case 52:
      if (lookahead == '{') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(114);
      END_STATE();
    case 55:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      END_STATE();
    case 56:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(56);
      END_STATE();
    case 58:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    case 59:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(109);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(106);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      ADVANCE_MAP(
        '"', 1,
        '0', 90,
        'B', 50,
        'C', 19,
        'P', 27,
        'S', 12,
        'V', 51,
        '[', 137,
        '\\', 117,
        ']', 138,
        'd', 41,
        '{', 139,
        '}', 131,
        '+', 6,
        '-', 6,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_definition);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ratio);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 88,
        '/', 64,
        '+', 65,
        '-', 65,
        ',', 69,
        '_', 69,
        'B', 54,
        'b', 54,
        'E', 53,
        'e', 53,
        'O', 60,
        'o', 60,
        'X', 70,
        'x', 70,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 88,
        '/', 64,
        '+', 65,
        '-', 65,
        ',', 69,
        '_', 69,
        'E', 53,
        'e', 53,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 88,
        '/', 64,
        '+', 65,
        '-', 65,
        ',', 69,
        '_', 69,
        'E', 53,
        'e', 53,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 88,
        '/', 64,
        '+', 65,
        '-', 65,
        ',', 69,
        '_', 69,
        'E', 53,
        'e', 53,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        ',', 69,
        '_', 69,
        'B', 54,
        'b', 54,
        'O', 60,
        'o', 60,
        'X', 70,
        'x', 70,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_base10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_base16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_base08);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_CHAR_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_POSTPONE_COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(126);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(52);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(136);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 'v')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'H') ADVANCE(11);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_unicode_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_unicode_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_unicode_token3);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_unicode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_octcode);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_V_LBRACE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SBUF_DQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_buffer_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 81},
  [2] = {.lex_state = 81},
  [3] = {.lex_state = 81},
  [4] = {.lex_state = 81},
  [5] = {.lex_state = 81},
  [6] = {.lex_state = 81},
  [7] = {.lex_state = 81},
  [8] = {.lex_state = 81},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 81},
  [11] = {.lex_state = 81},
  [12] = {.lex_state = 81},
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 81},
  [15] = {.lex_state = 81},
  [16] = {.lex_state = 81},
  [17] = {.lex_state = 81},
  [18] = {.lex_state = 81},
  [19] = {.lex_state = 81},
  [20] = {.lex_state = 81},
  [21] = {.lex_state = 81},
  [22] = {.lex_state = 81},
  [23] = {.lex_state = 81},
  [24] = {.lex_state = 81},
  [25] = {.lex_state = 81},
  [26] = {.lex_state = 81},
  [27] = {.lex_state = 81},
  [28] = {.lex_state = 81},
  [29] = {.lex_state = 81},
  [30] = {.lex_state = 81},
  [31] = {.lex_state = 81},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 58},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 59},
  [40] = {.lex_state = 81},
  [41] = {.lex_state = 81},
  [42] = {.lex_state = 81},
  [43] = {.lex_state = 59},
  [44] = {.lex_state = 3},
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
    [sym_source_file] = STATE(38),
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(39),
    [sym_quote] = STATE(2),
    [sym_collection] = STATE(2),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_string_buffer] = STATE(13),
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
    [anon_sym_V_LBRACE] = ACTIONS(29),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(31),
  },
  [2] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(39),
    [sym_quote] = STATE(3),
    [sym_collection] = STATE(3),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_string_buffer] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_definition] = ACTIONS(35),
    [sym_string] = ACTIONS(35),
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
    [anon_sym_V_LBRACE] = ACTIONS(29),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(31),
  },
  [3] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(39),
    [sym_quote] = STATE(3),
    [sym_collection] = STATE(3),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_string_buffer] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_definition] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [aux_sym_float_token1] = ACTIONS(42),
    [aux_sym_float_token2] = ACTIONS(42),
    [aux_sym_float_token3] = ACTIONS(45),
    [sym_ratio] = ACTIONS(48),
    [sym_base10] = ACTIONS(51),
    [sym_base16] = ACTIONS(54),
    [sym_base08] = ACTIONS(54),
    [sym_base02] = ACTIONS(54),
    [anon_sym_CHAR_COLON] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(60),
    [anon_sym_POSTPONE_COLON] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_B_LBRACE] = ACTIONS(69),
    [anon_sym_C_LBRACE] = ACTIONS(72),
    [anon_sym_V_LBRACE] = ACTIONS(75),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(78),
  },
  [4] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(39),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_string_buffer] = STATE(13),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(81),
    [aux_sym_float_token1] = ACTIONS(84),
    [aux_sym_float_token2] = ACTIONS(84),
    [aux_sym_float_token3] = ACTIONS(87),
    [sym_ratio] = ACTIONS(90),
    [sym_base10] = ACTIONS(93),
    [sym_base16] = ACTIONS(96),
    [sym_base08] = ACTIONS(96),
    [sym_base02] = ACTIONS(96),
    [anon_sym_CHAR_COLON] = ACTIONS(99),
    [anon_sym_BSLASH] = ACTIONS(102),
    [anon_sym_POSTPONE_COLON] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_B_LBRACE] = ACTIONS(113),
    [anon_sym_C_LBRACE] = ACTIONS(116),
    [anon_sym_V_LBRACE] = ACTIONS(119),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(122),
  },
  [5] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(39),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_string_buffer] = STATE(13),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_V_LBRACE] = ACTIONS(29),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(31),
  },
  [6] = {
    [sym__top_level_form] = STATE(9),
    [sym_number] = STATE(9),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_unary_postfix] = STATE(9),
    [sym_unary_op] = STATE(39),
    [sym_quote] = STATE(9),
    [sym_collection] = STATE(9),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_string_buffer] = STATE(13),
    [aux_sym_quote_repeat1] = STATE(9),
    [sym_string] = ACTIONS(129),
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
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_V_LBRACE] = ACTIONS(29),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(31),
  },
  [7] = {
    [sym__top_level_form] = STATE(10),
    [sym_number] = STATE(10),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_unary_postfix] = STATE(10),
    [sym_unary_op] = STATE(39),
    [sym_quote] = STATE(10),
    [sym_collection] = STATE(10),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_string_buffer] = STATE(13),
    [aux_sym_quote_repeat1] = STATE(10),
    [sym_string] = ACTIONS(133),
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
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_V_LBRACE] = ACTIONS(29),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(31),
  },
  [8] = {
    [sym__top_level_form] = STATE(5),
    [sym_number] = STATE(5),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_unary_postfix] = STATE(5),
    [sym_unary_op] = STATE(39),
    [sym_quote] = STATE(5),
    [sym_collection] = STATE(5),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_string_buffer] = STATE(13),
    [aux_sym_quote_repeat1] = STATE(5),
    [sym_string] = ACTIONS(137),
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
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_V_LBRACE] = ACTIONS(29),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(31),
  },
  [9] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(39),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_string_buffer] = STATE(13),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(125),
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
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_V_LBRACE] = ACTIONS(29),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(31),
  },
  [10] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(39),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(13),
    [sym_byte_array] = STATE(13),
    [sym_complex] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_string_buffer] = STATE(13),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(125),
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
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_V_LBRACE] = ACTIONS(29),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(147), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(145), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [27] = 2,
    ACTIONS(151), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(149), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [54] = 2,
    ACTIONS(155), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(153), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [81] = 2,
    ACTIONS(159), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(157), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [108] = 2,
    ACTIONS(163), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(161), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [135] = 2,
    ACTIONS(167), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(165), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [162] = 2,
    ACTIONS(171), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(169), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [189] = 2,
    ACTIONS(175), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(173), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [216] = 2,
    ACTIONS(179), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(177), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [243] = 2,
    ACTIONS(183), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(181), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [270] = 2,
    ACTIONS(187), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(185), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [297] = 2,
    ACTIONS(191), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(189), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [324] = 2,
    ACTIONS(195), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(193), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [351] = 2,
    ACTIONS(199), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(197), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [378] = 2,
    ACTIONS(203), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(201), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [405] = 2,
    ACTIONS(207), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(205), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [432] = 2,
    ACTIONS(211), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(209), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [459] = 2,
    ACTIONS(215), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(213), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [486] = 2,
    ACTIONS(219), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(217), 19,
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
      anon_sym_V_LBRACE,
      anon_sym_SBUF_DQUOTE,
  [513] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(31), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(21), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [539] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(42), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(21), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [565] = 5,
    ACTIONS(225), 1,
      aux_sym_unicode_token3,
    STATE(17), 1,
      sym_char,
    ACTIONS(223), 2,
      aux_sym_unicode_token1,
      aux_sym_unicode_token2,
    STATE(15), 2,
      sym_unicode,
      sym_unicode_name,
    ACTIONS(221), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      sym_octcode,
  [585] = 4,
    ACTIONS(227), 1,
      sym_base10,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(229), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [601] = 4,
    ACTIONS(227), 1,
      sym_base10,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(229), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [617] = 4,
    ACTIONS(235), 1,
      sym_base10,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(238), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [633] = 2,
    ACTIONS(195), 1,
      sym_base10,
    ACTIONS(193), 4,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_RBRACE,
  [643] = 2,
    ACTIONS(243), 1,
      aux_sym_unicode_token4,
    ACTIONS(245), 1,
      aux_sym_unicode_name_token1,
  [650] = 1,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
  [654] = 1,
    ACTIONS(249), 1,
      sym_word,
  [658] = 1,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
  [662] = 1,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
  [666] = 1,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
  [670] = 1,
    ACTIONS(257), 1,
      sym_word,
  [674] = 1,
    ACTIONS(259), 1,
      aux_sym_string_buffer_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 27,
  [SMALL_STATE(13)] = 54,
  [SMALL_STATE(14)] = 81,
  [SMALL_STATE(15)] = 108,
  [SMALL_STATE(16)] = 135,
  [SMALL_STATE(17)] = 162,
  [SMALL_STATE(18)] = 189,
  [SMALL_STATE(19)] = 216,
  [SMALL_STATE(20)] = 243,
  [SMALL_STATE(21)] = 270,
  [SMALL_STATE(22)] = 297,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 378,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 432,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 486,
  [SMALL_STATE(30)] = 513,
  [SMALL_STATE(31)] = 539,
  [SMALL_STATE(32)] = 565,
  [SMALL_STATE(33)] = 585,
  [SMALL_STATE(34)] = 601,
  [SMALL_STATE(35)] = 617,
  [SMALL_STATE(36)] = 633,
  [SMALL_STATE(37)] = 643,
  [SMALL_STATE(38)] = 650,
  [SMALL_STATE(39)] = 654,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 662,
  [SMALL_STATE(42)] = 666,
  [SMALL_STATE(43)] = 670,
  [SMALL_STATE(44)] = 674,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_buffer, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_buffer, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [247] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
