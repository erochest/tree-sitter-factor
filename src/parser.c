#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
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
  anon_sym_HS_LBRACE = 29,
  anon_sym_H_LBRACE = 30,
  anon_sym_IH_LBRACE = 31,
  anon_sym_SBUF_DQUOTE = 32,
  aux_sym_string_buffer_token1 = 33,
  anon_sym_V_LBRACE = 34,
  sym_source_file = 35,
  sym__declaration = 36,
  sym__top_level_form = 37,
  sym_number = 38,
  sym_float = 39,
  sym_integer = 40,
  sym_unary_postfix = 41,
  sym_unary_op = 42,
  sym_char = 43,
  sym_unicode = 44,
  sym_unicode_name = 45,
  sym_quote = 46,
  sym_collection = 47,
  sym_array = 48,
  sym_byte_array = 49,
  sym_complex = 50,
  sym_hashset = 51,
  sym_hashtable = 52,
  sym_id_hashtable = 53,
  sym_string_buffer = 54,
  sym_vector = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_quote_repeat1 = 57,
  aux_sym_byte_array_repeat1 = 58,
  aux_sym_hashtable_repeat1 = 59,
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
  [anon_sym_HS_LBRACE] = "HS{",
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
  [sym_hashset] = "hashset",
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
  [anon_sym_HS_LBRACE] = anon_sym_HS_LBRACE,
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
  [sym_hashset] = sym_hashset,
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
  [anon_sym_HS_LBRACE] = {
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
  [sym_hashset] = {
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 29,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      if (lookahead == 'P') ADVANCE(129);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '}') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(151);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(97);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == '}') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(125);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(123);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(89);
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
      if (lookahead == '{') ADVANCE(147);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(57);
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
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(39);
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
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == '{') ADVANCE(149);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == '\\') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == '{') ADVANCE(146);
      END_STATE();
    case 55:
      if (lookahead == '{') ADVANCE(154);
      END_STATE();
    case 56:
      if (lookahead == '{') ADVANCE(148);
      END_STATE();
    case 57:
      if (lookahead == '{') ADVANCE(150);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 59:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(118);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 64:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 65:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      ADVANCE_MAP(
        '"', 1,
        '0', 97,
        'B', 54,
        'C', 21,
        'H', 37,
        'I', 22,
        'P', 30,
        'S', 14,
        'V', 55,
        '[', 143,
        '\\', 124,
        ']', 144,
        'd', 45,
        '{', 145,
        '}', 137,
        '+', 8,
        '-', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_definition);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ratio);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 95,
        '/', 70,
        '+', 71,
        '-', 71,
        ',', 75,
        '_', 75,
        'B', 60,
        'b', 60,
        'E', 59,
        'e', 59,
        'O', 66,
        'o', 66,
        'X', 76,
        'x', 76,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 95,
        '/', 70,
        '+', 71,
        '-', 71,
        ',', 75,
        '_', 75,
        'E', 59,
        'e', 59,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 95,
        '/', 70,
        '+', 71,
        '-', 71,
        ',', 75,
        '_', 75,
        'E', 59,
        'e', 59,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 95,
        '/', 70,
        '+', 71,
        '-', 71,
        ',', 75,
        '_', 75,
        'E', 59,
        'e', 59,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(75);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        ',', 75,
        '_', 75,
        'B', 60,
        'b', 60,
        'O', 66,
        'o', 66,
        'X', 76,
        'x', 76,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_base10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_base16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_base08);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_CHAR_COLON);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_POSTPONE_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(142);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 'v')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_unicode_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_unicode_token2);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_unicode_token3);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_unicode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_octcode);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_HS_LBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_H_LBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_IH_LBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SBUF_DQUOTE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_string_buffer_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_string_buffer_token1);
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_V_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 87},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 87},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 87},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 87},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 87},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 87},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 87},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 87},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 87},
  [39] = {.lex_state = 87},
  [40] = {.lex_state = 42},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 87},
  [47] = {.lex_state = 87},
  [48] = {.lex_state = 87},
  [49] = {.lex_state = 87},
  [50] = {.lex_state = 64},
  [51] = {.lex_state = 65},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 87},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 87},
  [57] = {.lex_state = 87},
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
    [sym_source_file] = STATE(53),
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(2),
    [sym_collection] = STATE(2),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
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
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(35),
    [anon_sym_V_LBRACE] = ACTIONS(37),
  },
  [2] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(3),
    [sym_collection] = STATE(3),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_definition] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
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
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(35),
    [anon_sym_V_LBRACE] = ACTIONS(37),
  },
  [3] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(3),
    [sym_collection] = STATE(3),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_definition] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [aux_sym_float_token1] = ACTIONS(48),
    [aux_sym_float_token2] = ACTIONS(48),
    [aux_sym_float_token3] = ACTIONS(51),
    [sym_ratio] = ACTIONS(54),
    [sym_base10] = ACTIONS(57),
    [sym_base16] = ACTIONS(60),
    [sym_base08] = ACTIONS(60),
    [sym_base02] = ACTIONS(60),
    [anon_sym_CHAR_COLON] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(66),
    [anon_sym_POSTPONE_COLON] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_B_LBRACE] = ACTIONS(75),
    [anon_sym_C_LBRACE] = ACTIONS(78),
    [anon_sym_HS_LBRACE] = ACTIONS(81),
    [anon_sym_H_LBRACE] = ACTIONS(84),
    [anon_sym_IH_LBRACE] = ACTIONS(87),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(90),
    [anon_sym_V_LBRACE] = ACTIONS(93),
  },
  [4] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(96),
    [aux_sym_float_token1] = ACTIONS(99),
    [aux_sym_float_token2] = ACTIONS(99),
    [aux_sym_float_token3] = ACTIONS(102),
    [sym_ratio] = ACTIONS(105),
    [sym_base10] = ACTIONS(108),
    [sym_base16] = ACTIONS(111),
    [sym_base08] = ACTIONS(111),
    [sym_base02] = ACTIONS(111),
    [anon_sym_CHAR_COLON] = ACTIONS(114),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_POSTPONE_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_B_LBRACE] = ACTIONS(128),
    [anon_sym_C_LBRACE] = ACTIONS(131),
    [anon_sym_HS_LBRACE] = ACTIONS(134),
    [anon_sym_H_LBRACE] = ACTIONS(137),
    [anon_sym_IH_LBRACE] = ACTIONS(140),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(143),
    [anon_sym_V_LBRACE] = ACTIONS(146),
  },
  [5] = {
    [sym__top_level_form] = STATE(7),
    [sym_number] = STATE(7),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(7),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(7),
    [sym_collection] = STATE(7),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_quote_repeat1] = STATE(7),
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
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(35),
    [anon_sym_V_LBRACE] = ACTIONS(37),
  },
  [6] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_quote_repeat1] = STATE(4),
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
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(35),
    [anon_sym_V_LBRACE] = ACTIONS(37),
  },
  [7] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_quote_repeat1] = STATE(4),
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
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(35),
    [anon_sym_V_LBRACE] = ACTIONS(37),
  },
  [8] = {
    [sym__top_level_form] = STATE(11),
    [sym_number] = STATE(11),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(11),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(11),
    [sym_collection] = STATE(11),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_quote_repeat1] = STATE(11),
    [sym_string] = ACTIONS(159),
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
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(35),
    [anon_sym_V_LBRACE] = ACTIONS(37),
  },
  [9] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_quote_repeat1] = STATE(4),
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
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(35),
    [anon_sym_V_LBRACE] = ACTIONS(37),
  },
  [10] = {
    [sym__top_level_form] = STATE(6),
    [sym_number] = STATE(6),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(6),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(6),
    [sym_collection] = STATE(6),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_quote_repeat1] = STATE(6),
    [sym_string] = ACTIONS(165),
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
    [anon_sym_RBRACK] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(35),
    [anon_sym_V_LBRACE] = ACTIONS(37),
  },
  [11] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_quote_repeat1] = STATE(4),
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
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(35),
    [anon_sym_V_LBRACE] = ACTIONS(37),
  },
  [12] = {
    [sym__top_level_form] = STATE(9),
    [sym_number] = STATE(9),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_unary_postfix] = STATE(9),
    [sym_unary_op] = STATE(51),
    [sym_quote] = STATE(9),
    [sym_collection] = STATE(9),
    [sym_array] = STATE(15),
    [sym_byte_array] = STATE(15),
    [sym_complex] = STATE(15),
    [sym_hashset] = STATE(15),
    [sym_hashtable] = STATE(15),
    [sym_id_hashtable] = STATE(15),
    [sym_string_buffer] = STATE(15),
    [sym_vector] = STATE(15),
    [aux_sym_quote_repeat1] = STATE(9),
    [sym_string] = ACTIONS(171),
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
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(35),
    [anon_sym_V_LBRACE] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(177), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(175), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [30] = 2,
    ACTIONS(181), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(179), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [60] = 2,
    ACTIONS(185), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(183), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [90] = 2,
    ACTIONS(189), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(187), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [120] = 2,
    ACTIONS(193), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(191), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [150] = 2,
    ACTIONS(197), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(195), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [180] = 2,
    ACTIONS(201), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(199), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [210] = 2,
    ACTIONS(205), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(203), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [240] = 2,
    ACTIONS(209), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(207), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [270] = 2,
    ACTIONS(213), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(211), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [300] = 2,
    ACTIONS(217), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(215), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [330] = 2,
    ACTIONS(221), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(219), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [360] = 2,
    ACTIONS(225), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(223), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [390] = 2,
    ACTIONS(229), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(227), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [420] = 2,
    ACTIONS(233), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(231), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [450] = 2,
    ACTIONS(237), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(235), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [480] = 2,
    ACTIONS(241), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(239), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [510] = 2,
    ACTIONS(245), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(243), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [540] = 2,
    ACTIONS(249), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(247), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [570] = 2,
    ACTIONS(253), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(251), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [600] = 2,
    ACTIONS(257), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(255), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [630] = 2,
    ACTIONS(261), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(259), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [660] = 2,
    ACTIONS(265), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(263), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [690] = 2,
    ACTIONS(269), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(267), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [720] = 2,
    ACTIONS(273), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(271), 22,
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
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
  [750] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(54), 1,
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
  [776] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(38), 1,
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
  [802] = 5,
    ACTIONS(279), 1,
      aux_sym_unicode_token3,
    STATE(18), 1,
      sym_char,
    ACTIONS(277), 2,
      aux_sym_unicode_token1,
      aux_sym_unicode_token2,
    STATE(16), 2,
      sym_unicode,
      sym_unicode_name,
    ACTIONS(275), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      sym_octcode,
  [822] = 4,
    ACTIONS(281), 1,
      sym_base10,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(283), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [838] = 4,
    ACTIONS(281), 1,
      sym_base10,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(283), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [854] = 4,
    ACTIONS(289), 1,
      sym_base10,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(292), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [870] = 2,
    ACTIONS(241), 1,
      sym_base10,
    ACTIONS(239), 4,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_RBRACE,
  [880] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [891] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(49), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [902] = 3,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(47), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [913] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(45), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [924] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [935] = 2,
    ACTIONS(310), 1,
      aux_sym_unicode_token4,
    ACTIONS(312), 1,
      aux_sym_unicode_name_token1,
  [942] = 1,
    ACTIONS(314), 1,
      sym_word,
  [946] = 1,
    ACTIONS(316), 1,
      sym_word,
  [950] = 1,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
  [954] = 1,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
  [958] = 1,
    ACTIONS(322), 1,
      aux_sym_string_buffer_token1,
  [962] = 1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
  [966] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 30,
  [SMALL_STATE(15)] = 60,
  [SMALL_STATE(16)] = 90,
  [SMALL_STATE(17)] = 120,
  [SMALL_STATE(18)] = 150,
  [SMALL_STATE(19)] = 180,
  [SMALL_STATE(20)] = 210,
  [SMALL_STATE(21)] = 240,
  [SMALL_STATE(22)] = 270,
  [SMALL_STATE(23)] = 300,
  [SMALL_STATE(24)] = 330,
  [SMALL_STATE(25)] = 360,
  [SMALL_STATE(26)] = 390,
  [SMALL_STATE(27)] = 420,
  [SMALL_STATE(28)] = 450,
  [SMALL_STATE(29)] = 480,
  [SMALL_STATE(30)] = 510,
  [SMALL_STATE(31)] = 540,
  [SMALL_STATE(32)] = 570,
  [SMALL_STATE(33)] = 600,
  [SMALL_STATE(34)] = 630,
  [SMALL_STATE(35)] = 660,
  [SMALL_STATE(36)] = 690,
  [SMALL_STATE(37)] = 720,
  [SMALL_STATE(38)] = 750,
  [SMALL_STATE(39)] = 776,
  [SMALL_STATE(40)] = 802,
  [SMALL_STATE(41)] = 822,
  [SMALL_STATE(42)] = 838,
  [SMALL_STATE(43)] = 854,
  [SMALL_STATE(44)] = 870,
  [SMALL_STATE(45)] = 880,
  [SMALL_STATE(46)] = 891,
  [SMALL_STATE(47)] = 902,
  [SMALL_STATE(48)] = 913,
  [SMALL_STATE(49)] = 924,
  [SMALL_STATE(50)] = 935,
  [SMALL_STATE(51)] = 942,
  [SMALL_STATE(52)] = 946,
  [SMALL_STATE(53)] = 950,
  [SMALL_STATE(54)] = 954,
  [SMALL_STATE(55)] = 958,
  [SMALL_STATE(56)] = 962,
  [SMALL_STATE(57)] = 966,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashset, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashset, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashset, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashset, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtable, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtable, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_hashtable, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_hashtable, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_buffer, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_buffer, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtable, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtable, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_hashtable, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_hashtable, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hashtable_repeat1, 2, 0, 0),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hashtable_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
