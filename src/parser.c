#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_P_DQUOTE = 32,
  aux_sym_pathname_token1 = 33,
  anon_sym_SBUF_DQUOTE = 34,
  anon_sym_V_LBRACE = 35,
  anon_sym_T_LBRACE = 36,
  sym_symbol = 37,
  sym_f = 38,
  sym_source_file = 39,
  sym__declaration = 40,
  sym__top_level_form = 41,
  sym_number = 42,
  sym_float = 43,
  sym_integer = 44,
  sym_unary_postfix = 45,
  sym_unary_op = 46,
  sym_char = 47,
  sym_unicode = 48,
  sym_unicode_name = 49,
  sym_quote = 50,
  sym_collection = 51,
  sym_array = 52,
  sym_byte_array = 53,
  sym_complex = 54,
  sym_hashset = 55,
  sym_hashtable = 56,
  sym_id_hashtable = 57,
  sym_pathname = 58,
  sym_string_buffer = 59,
  sym_vector = 60,
  sym_tuple = 61,
  sym_property_pair = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_quote_repeat1 = 64,
  aux_sym_byte_array_repeat1 = 65,
  aux_sym_hashtable_repeat1 = 66,
  aux_sym_tuple_repeat1 = 67,
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
  [anon_sym_P_DQUOTE] = "P\"",
  [aux_sym_pathname_token1] = "pathname_token1",
  [anon_sym_SBUF_DQUOTE] = "SBUF\"",
  [anon_sym_V_LBRACE] = "V{",
  [anon_sym_T_LBRACE] = "T{",
  [sym_symbol] = "symbol",
  [sym_f] = "f",
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
  [sym_pathname] = "pathname",
  [sym_string_buffer] = "string_buffer",
  [sym_vector] = "vector",
  [sym_tuple] = "tuple",
  [sym_property_pair] = "property_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quote_repeat1] = "quote_repeat1",
  [aux_sym_byte_array_repeat1] = "byte_array_repeat1",
  [aux_sym_hashtable_repeat1] = "hashtable_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
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
  [anon_sym_P_DQUOTE] = anon_sym_P_DQUOTE,
  [aux_sym_pathname_token1] = aux_sym_pathname_token1,
  [anon_sym_SBUF_DQUOTE] = anon_sym_SBUF_DQUOTE,
  [anon_sym_V_LBRACE] = anon_sym_V_LBRACE,
  [anon_sym_T_LBRACE] = anon_sym_T_LBRACE,
  [sym_symbol] = sym_symbol,
  [sym_f] = sym_f,
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
  [sym_pathname] = sym_pathname,
  [sym_string_buffer] = sym_string_buffer,
  [sym_vector] = sym_vector,
  [sym_tuple] = sym_tuple,
  [sym_property_pair] = sym_property_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_quote_repeat1] = aux_sym_quote_repeat1,
  [aux_sym_byte_array_repeat1] = aux_sym_byte_array_repeat1,
  [aux_sym_hashtable_repeat1] = aux_sym_hashtable_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
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
  [anon_sym_P_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pathname_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SBUF_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_f] = {
    .visible = true,
    .named = true,
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
  [sym_pathname] = {
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
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_property_pair] = {
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
  [aux_sym_tuple_repeat1] = {
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 31,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(90);
      ADVANCE_MAP(
        'P', 131,
        '[', 145,
        '\\', 126,
        ']', 146,
        'd', 132,
        'f', 161,
        '{', 147,
        '}', 139,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(156);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '}') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(127);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(125);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'F') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(14);
      if (lookahead == '{') ADVANCE(149);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == '{') ADVANCE(151);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == '\\') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(29);
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
      if (lookahead == '{') ADVANCE(148);
      END_STATE();
    case 55:
      if (lookahead == '{') ADVANCE(158);
      END_STATE();
    case 56:
      if (lookahead == '{') ADVANCE(157);
      END_STATE();
    case 57:
      if (lookahead == '{') ADVANCE(150);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(152);
      END_STATE();
    case 59:
      if (lookahead == '{') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      END_STATE();
    case 63:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      END_STATE();
    case 65:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 66:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 67:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(160);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(115);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      ADVANCE_MAP(
        '"', 1,
        '0', 99,
        'B', 54,
        'C', 22,
        'H', 37,
        'I', 23,
        'P', 2,
        'S', 15,
        'T', 55,
        'V', 56,
        '[', 145,
        '\\', 126,
        ']', 146,
        'd', 45,
        'f', 161,
        '{', 147,
        '}', 139,
        '+', 9,
        '-', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_definition);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ratio);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 97,
        '/', 72,
        '+', 73,
        '-', 73,
        ',', 77,
        '_', 77,
        'B', 61,
        'b', 61,
        'E', 60,
        'e', 60,
        'O', 68,
        'o', 68,
        'X', 78,
        'x', 78,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 97,
        '/', 72,
        '+', 73,
        '-', 73,
        ',', 77,
        '_', 77,
        'E', 60,
        'e', 60,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 97,
        '/', 72,
        '+', 73,
        '-', 73,
        ',', 77,
        '_', 77,
        'E', 60,
        'e', 60,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 97,
        '/', 72,
        '+', 73,
        '-', 73,
        ',', 77,
        '_', 77,
        'E', 60,
        'e', 60,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        ',', 77,
        '_', 77,
        'B', 61,
        'b', 61,
        'O', 68,
        'o', 68,
        'X', 78,
        'x', 78,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_base10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_base16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(71);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_base08);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_CHAR_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_POSTPONE_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(59);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(144);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 'v')) ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_unicode_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_unicode_token2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_unicode_token3);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_unicode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_octcode);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_HS_LBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_H_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_IH_LBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_P_DQUOTE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_pathname_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_pathname_token1);
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SBUF_DQUOTE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_V_LBRACE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_T_LBRACE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_f);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 89},
  [2] = {.lex_state = 89},
  [3] = {.lex_state = 89},
  [4] = {.lex_state = 89},
  [5] = {.lex_state = 89},
  [6] = {.lex_state = 89},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 89},
  [9] = {.lex_state = 89},
  [10] = {.lex_state = 89},
  [11] = {.lex_state = 89},
  [12] = {.lex_state = 89},
  [13] = {.lex_state = 89},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 89},
  [16] = {.lex_state = 89},
  [17] = {.lex_state = 89},
  [18] = {.lex_state = 89},
  [19] = {.lex_state = 89},
  [20] = {.lex_state = 89},
  [21] = {.lex_state = 89},
  [22] = {.lex_state = 89},
  [23] = {.lex_state = 89},
  [24] = {.lex_state = 89},
  [25] = {.lex_state = 89},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 89},
  [28] = {.lex_state = 89},
  [29] = {.lex_state = 89},
  [30] = {.lex_state = 89},
  [31] = {.lex_state = 89},
  [32] = {.lex_state = 89},
  [33] = {.lex_state = 89},
  [34] = {.lex_state = 89},
  [35] = {.lex_state = 89},
  [36] = {.lex_state = 89},
  [37] = {.lex_state = 89},
  [38] = {.lex_state = 89},
  [39] = {.lex_state = 89},
  [40] = {.lex_state = 89},
  [41] = {.lex_state = 89},
  [42] = {.lex_state = 89},
  [43] = {.lex_state = 89},
  [44] = {.lex_state = 89},
  [45] = {.lex_state = 89},
  [46] = {.lex_state = 89},
  [47] = {.lex_state = 42},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 89},
  [53] = {.lex_state = 89},
  [54] = {.lex_state = 89},
  [55] = {.lex_state = 89},
  [56] = {.lex_state = 89},
  [57] = {.lex_state = 89},
  [58] = {.lex_state = 89},
  [59] = {.lex_state = 89},
  [60] = {.lex_state = 65},
  [61] = {.lex_state = 89},
  [62] = {.lex_state = 89},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 66},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 67},
  [69] = {.lex_state = 89},
  [70] = {.lex_state = 89},
  [71] = {.lex_state = 66},
  [72] = {.lex_state = 89},
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
    [sym_f] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(3),
    [sym_collection] = STATE(3),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(3),
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
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [2] = {
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(2),
    [sym_collection] = STATE(2),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [anon_sym_P_DQUOTE] = ACTIONS(90),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(93),
    [anon_sym_V_LBRACE] = ACTIONS(96),
    [anon_sym_T_LBRACE] = ACTIONS(99),
  },
  [3] = {
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(2),
    [sym_collection] = STATE(2),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_definition] = ACTIONS(104),
    [sym_string] = ACTIONS(104),
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
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [4] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(106),
    [aux_sym_float_token1] = ACTIONS(109),
    [aux_sym_float_token2] = ACTIONS(109),
    [aux_sym_float_token3] = ACTIONS(112),
    [sym_ratio] = ACTIONS(115),
    [sym_base10] = ACTIONS(118),
    [sym_base16] = ACTIONS(121),
    [sym_base08] = ACTIONS(121),
    [sym_base02] = ACTIONS(121),
    [anon_sym_CHAR_COLON] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(127),
    [anon_sym_POSTPONE_COLON] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_B_LBRACE] = ACTIONS(138),
    [anon_sym_C_LBRACE] = ACTIONS(141),
    [anon_sym_HS_LBRACE] = ACTIONS(144),
    [anon_sym_H_LBRACE] = ACTIONS(147),
    [anon_sym_IH_LBRACE] = ACTIONS(150),
    [anon_sym_P_DQUOTE] = ACTIONS(153),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(156),
    [anon_sym_V_LBRACE] = ACTIONS(159),
    [anon_sym_T_LBRACE] = ACTIONS(162),
  },
  [5] = {
    [sym__top_level_form] = STATE(9),
    [sym_number] = STATE(9),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(9),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(9),
    [sym_collection] = STATE(9),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(9),
    [aux_sym_quote_repeat1] = STATE(9),
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
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [6] = {
    [sym__top_level_form] = STATE(8),
    [sym_number] = STATE(8),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(8),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(8),
    [sym_collection] = STATE(8),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(8),
    [aux_sym_quote_repeat1] = STATE(8),
    [sym_string] = ACTIONS(169),
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
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [7] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(173),
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
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [8] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(173),
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
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [9] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(173),
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
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [10] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(173),
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
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [11] = {
    [sym__top_level_form] = STATE(7),
    [sym_number] = STATE(7),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(7),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(7),
    [sym_collection] = STATE(7),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(7),
    [aux_sym_quote_repeat1] = STATE(7),
    [sym_string] = ACTIONS(183),
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
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [12] = {
    [sym__top_level_form] = STATE(10),
    [sym_number] = STATE(10),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(10),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(10),
    [sym_collection] = STATE(10),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(10),
    [aux_sym_quote_repeat1] = STATE(10),
    [sym_string] = ACTIONS(187),
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
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [13] = {
    [sym__top_level_form] = STATE(14),
    [sym_number] = STATE(14),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(14),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(14),
    [sym_collection] = STATE(14),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(14),
    [aux_sym_quote_repeat1] = STATE(14),
    [sym_string] = ACTIONS(191),
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
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [14] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(173),
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
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
  [15] = {
    [sym__top_level_form] = STATE(69),
    [sym_number] = STATE(69),
    [sym_float] = STATE(24),
    [sym_integer] = STATE(24),
    [sym_unary_postfix] = STATE(69),
    [sym_unary_op] = STATE(64),
    [sym_quote] = STATE(69),
    [sym_collection] = STATE(69),
    [sym_array] = STATE(17),
    [sym_byte_array] = STATE(17),
    [sym_complex] = STATE(17),
    [sym_hashset] = STATE(17),
    [sym_hashtable] = STATE(17),
    [sym_id_hashtable] = STATE(17),
    [sym_pathname] = STATE(17),
    [sym_string_buffer] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_tuple] = STATE(69),
    [sym_string] = ACTIONS(197),
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
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(201), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(199), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [32] = 2,
    ACTIONS(205), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(203), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [64] = 2,
    ACTIONS(209), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(207), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [96] = 2,
    ACTIONS(213), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(211), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [128] = 2,
    ACTIONS(217), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(215), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [160] = 2,
    ACTIONS(221), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(219), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [192] = 2,
    ACTIONS(225), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(223), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [224] = 2,
    ACTIONS(229), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(227), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [256] = 2,
    ACTIONS(233), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(231), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [288] = 2,
    ACTIONS(237), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(235), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [320] = 2,
    ACTIONS(241), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(239), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [352] = 2,
    ACTIONS(245), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(243), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [384] = 2,
    ACTIONS(249), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(247), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [416] = 2,
    ACTIONS(253), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(251), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [448] = 2,
    ACTIONS(257), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(255), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [480] = 2,
    ACTIONS(261), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(259), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [512] = 2,
    ACTIONS(265), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(263), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [544] = 2,
    ACTIONS(269), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(267), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [576] = 2,
    ACTIONS(273), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(271), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [608] = 2,
    ACTIONS(277), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(275), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [640] = 2,
    ACTIONS(281), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(279), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [672] = 2,
    ACTIONS(285), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(283), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [704] = 2,
    ACTIONS(289), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(287), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [736] = 2,
    ACTIONS(293), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(291), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [768] = 2,
    ACTIONS(297), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(295), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [800] = 2,
    ACTIONS(301), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(299), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [832] = 2,
    ACTIONS(305), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(303), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [864] = 2,
    ACTIONS(309), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(307), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [896] = 2,
    ACTIONS(313), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(311), 24,
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
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
  [928] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(46), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(24), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [954] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(72), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(24), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [980] = 5,
    ACTIONS(319), 1,
      aux_sym_unicode_token3,
    STATE(20), 1,
      sym_char,
    ACTIONS(317), 2,
      aux_sym_unicode_token1,
      aux_sym_unicode_token2,
    STATE(18), 2,
      sym_unicode,
      sym_unicode_name,
    ACTIONS(315), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      sym_octcode,
  [1000] = 4,
    ACTIONS(321), 1,
      sym_base10,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(49), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(323), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [1016] = 4,
    ACTIONS(321), 1,
      sym_base10,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(323), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [1032] = 4,
    ACTIONS(329), 1,
      sym_base10,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(332), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [1048] = 2,
    ACTIONS(261), 1,
      sym_base10,
    ACTIONS(259), 4,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_RBRACE,
  [1058] = 4,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    ACTIONS(341), 1,
      sym_f,
    STATE(53), 2,
      sym_property_pair,
      aux_sym_tuple_repeat1,
  [1072] = 3,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    STATE(59), 2,
      sym_property_pair,
      aux_sym_tuple_repeat1,
  [1083] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [1094] = 3,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    STATE(55), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [1105] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(54), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [1116] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(58), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [1127] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [1138] = 3,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    STATE(59), 2,
      sym_property_pair,
      aux_sym_tuple_repeat1,
  [1149] = 2,
    ACTIONS(361), 1,
      aux_sym_unicode_token4,
    ACTIONS(363), 1,
      aux_sym_unicode_name_token1,
  [1156] = 1,
    ACTIONS(365), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [1161] = 1,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
  [1165] = 1,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
  [1169] = 1,
    ACTIONS(371), 1,
      sym_word,
  [1173] = 1,
    ACTIONS(373), 1,
      aux_sym_pathname_token1,
  [1177] = 1,
    ACTIONS(375), 1,
      sym_symbol,
  [1181] = 1,
    ACTIONS(377), 1,
      aux_sym_pathname_token1,
  [1185] = 1,
    ACTIONS(379), 1,
      sym_symbol,
  [1189] = 1,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
  [1193] = 1,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
  [1197] = 1,
    ACTIONS(385), 1,
      sym_word,
  [1201] = 1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 32,
  [SMALL_STATE(18)] = 64,
  [SMALL_STATE(19)] = 96,
  [SMALL_STATE(20)] = 128,
  [SMALL_STATE(21)] = 160,
  [SMALL_STATE(22)] = 192,
  [SMALL_STATE(23)] = 224,
  [SMALL_STATE(24)] = 256,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 320,
  [SMALL_STATE(27)] = 352,
  [SMALL_STATE(28)] = 384,
  [SMALL_STATE(29)] = 416,
  [SMALL_STATE(30)] = 448,
  [SMALL_STATE(31)] = 480,
  [SMALL_STATE(32)] = 512,
  [SMALL_STATE(33)] = 544,
  [SMALL_STATE(34)] = 576,
  [SMALL_STATE(35)] = 608,
  [SMALL_STATE(36)] = 640,
  [SMALL_STATE(37)] = 672,
  [SMALL_STATE(38)] = 704,
  [SMALL_STATE(39)] = 736,
  [SMALL_STATE(40)] = 768,
  [SMALL_STATE(41)] = 800,
  [SMALL_STATE(42)] = 832,
  [SMALL_STATE(43)] = 864,
  [SMALL_STATE(44)] = 896,
  [SMALL_STATE(45)] = 928,
  [SMALL_STATE(46)] = 954,
  [SMALL_STATE(47)] = 980,
  [SMALL_STATE(48)] = 1000,
  [SMALL_STATE(49)] = 1016,
  [SMALL_STATE(50)] = 1032,
  [SMALL_STATE(51)] = 1048,
  [SMALL_STATE(52)] = 1058,
  [SMALL_STATE(53)] = 1072,
  [SMALL_STATE(54)] = 1083,
  [SMALL_STATE(55)] = 1094,
  [SMALL_STATE(56)] = 1105,
  [SMALL_STATE(57)] = 1116,
  [SMALL_STATE(58)] = 1127,
  [SMALL_STATE(59)] = 1138,
  [SMALL_STATE(60)] = 1149,
  [SMALL_STATE(61)] = 1156,
  [SMALL_STATE(62)] = 1161,
  [SMALL_STATE(63)] = 1165,
  [SMALL_STATE(64)] = 1169,
  [SMALL_STATE(65)] = 1173,
  [SMALL_STATE(66)] = 1177,
  [SMALL_STATE(67)] = 1181,
  [SMALL_STATE(68)] = 1185,
  [SMALL_STATE(69)] = 1189,
  [SMALL_STATE(70)] = 1193,
  [SMALL_STATE(71)] = 1197,
  [SMALL_STATE(72)] = 1201,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashset, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashset, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtable, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtable, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_hashtable, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_hashtable, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathname, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pathname, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashset, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashset, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtable, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtable, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_hashtable, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_hashtable, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_buffer, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_buffer, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hashtable_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hashtable_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_pair, 4, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [369] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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
