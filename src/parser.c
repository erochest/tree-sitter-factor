#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
  anon_sym_BSLASH = 11,
  anon_sym_POSTPONE_COLON = 12,
  sym_word = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  sym_source_file = 18,
  sym__declaration = 19,
  sym__top_level_form = 20,
  sym_number = 21,
  sym_float = 22,
  sym_integer = 23,
  sym_unary_postfix = 24,
  sym_unary_op = 25,
  sym_quote = 26,
  sym_array = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_quote_repeat1 = 29,
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
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POSTPONE_COLON] = "POSTPONE:",
  [sym_word] = "word",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym__top_level_form] = "_top_level_form",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_unary_postfix] = "unary_postfix",
  [sym_unary_op] = "unary_op",
  [sym_quote] = "quote",
  [sym_array] = "array",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quote_repeat1] = "quote_repeat1",
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
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_POSTPONE_COLON] = anon_sym_POSTPONE_COLON,
  [sym_word] = sym_word,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym__top_level_form] = sym__top_level_form,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_unary_postfix] = sym_unary_postfix,
  [sym_unary_op] = sym_unary_op,
  [sym_quote] = sym_quote,
  [sym_array] = sym_array,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_quote_repeat1] = aux_sym_quote_repeat1,
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
  [anon_sym_RBRACE] = {
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
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '"', 1,
        '0', 65,
        'P', 17,
        '[', 89,
        '\\', 86,
        ']', 90,
        'd', 28,
        '{', 91,
        '}', 92,
        '+', 3,
        '-', 3,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(7);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      END_STATE();
    case 42:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_definition);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_ratio);
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 63,
        '/', 47,
        '+', 48,
        '-', 48,
        ',', 52,
        '_', 52,
        'B', 38,
        'b', 38,
        'E', 37,
        'e', 37,
        'O', 43,
        'o', 43,
        'X', 53,
        'x', 53,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 63,
        '/', 47,
        '+', 48,
        '-', 48,
        ',', 52,
        '_', 52,
        'E', 37,
        'e', 37,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 63,
        '/', 47,
        '+', 48,
        '-', 48,
        ',', 52,
        '_', 52,
        'E', 37,
        'e', 37,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 63,
        '/', 47,
        '+', 48,
        '-', 48,
        ',', 52,
        '_', 52,
        'E', 37,
        'e', 37,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_base16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_base08);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(41);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_POSTPONE_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 42},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 42},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_definition] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [sym_ratio] = ACTIONS(1),
    [sym_base10] = ACTIONS(1),
    [sym_base16] = ACTIONS(1),
    [sym_base08] = ACTIONS(1),
    [sym_base02] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POSTPONE_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(19),
    [sym_quote] = STATE(2),
    [sym_array] = STATE(2),
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
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_POSTPONE_COLON] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [2] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(19),
    [sym_quote] = STATE(3),
    [sym_array] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_definition] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_POSTPONE_COLON] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [3] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(19),
    [sym_quote] = STATE(3),
    [sym_array] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_definition] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [aux_sym_float_token1] = ACTIONS(32),
    [aux_sym_float_token2] = ACTIONS(32),
    [aux_sym_float_token3] = ACTIONS(35),
    [sym_ratio] = ACTIONS(38),
    [sym_base10] = ACTIONS(41),
    [sym_base16] = ACTIONS(44),
    [sym_base08] = ACTIONS(44),
    [sym_base02] = ACTIONS(44),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POSTPONE_COLON] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(53),
  },
  [4] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(19),
    [sym_quote] = STATE(4),
    [sym_array] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(56),
    [aux_sym_float_token1] = ACTIONS(59),
    [aux_sym_float_token2] = ACTIONS(59),
    [aux_sym_float_token3] = ACTIONS(62),
    [sym_ratio] = ACTIONS(65),
    [sym_base10] = ACTIONS(68),
    [sym_base16] = ACTIONS(71),
    [sym_base08] = ACTIONS(71),
    [sym_base02] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(74),
    [anon_sym_POSTPONE_COLON] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(80),
  },
  [5] = {
    [sym__top_level_form] = STATE(7),
    [sym_number] = STATE(7),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_unary_postfix] = STATE(7),
    [sym_unary_op] = STATE(19),
    [sym_quote] = STATE(7),
    [sym_array] = STATE(7),
    [aux_sym_quote_repeat1] = STATE(7),
    [sym_string] = ACTIONS(85),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_POSTPONE_COLON] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [6] = {
    [sym__top_level_form] = STATE(8),
    [sym_number] = STATE(8),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_unary_postfix] = STATE(8),
    [sym_unary_op] = STATE(19),
    [sym_quote] = STATE(8),
    [sym_array] = STATE(8),
    [aux_sym_quote_repeat1] = STATE(8),
    [sym_string] = ACTIONS(89),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_POSTPONE_COLON] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(91),
  },
  [7] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(19),
    [sym_quote] = STATE(4),
    [sym_array] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(93),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_POSTPONE_COLON] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [8] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(19),
    [sym_quote] = STATE(4),
    [sym_array] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(93),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_POSTPONE_COLON] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(97),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_definition] = ACTIONS(99),
    [sym_string] = ACTIONS(99),
    [aux_sym_float_token1] = ACTIONS(99),
    [aux_sym_float_token2] = ACTIONS(99),
    [aux_sym_float_token3] = ACTIONS(101),
    [sym_ratio] = ACTIONS(101),
    [sym_base10] = ACTIONS(101),
    [sym_base16] = ACTIONS(99),
    [sym_base08] = ACTIONS(99),
    [sym_base02] = ACTIONS(99),
    [anon_sym_BSLASH] = ACTIONS(99),
    [anon_sym_POSTPONE_COLON] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_definition] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [aux_sym_float_token1] = ACTIONS(103),
    [aux_sym_float_token2] = ACTIONS(103),
    [aux_sym_float_token3] = ACTIONS(105),
    [sym_ratio] = ACTIONS(105),
    [sym_base10] = ACTIONS(105),
    [sym_base16] = ACTIONS(103),
    [sym_base08] = ACTIONS(103),
    [sym_base02] = ACTIONS(103),
    [anon_sym_BSLASH] = ACTIONS(103),
    [anon_sym_POSTPONE_COLON] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_definition] = ACTIONS(107),
    [sym_string] = ACTIONS(107),
    [aux_sym_float_token1] = ACTIONS(107),
    [aux_sym_float_token2] = ACTIONS(107),
    [aux_sym_float_token3] = ACTIONS(109),
    [sym_ratio] = ACTIONS(109),
    [sym_base10] = ACTIONS(109),
    [sym_base16] = ACTIONS(107),
    [sym_base08] = ACTIONS(107),
    [sym_base02] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(107),
    [anon_sym_POSTPONE_COLON] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_definition] = ACTIONS(111),
    [sym_string] = ACTIONS(111),
    [aux_sym_float_token1] = ACTIONS(111),
    [aux_sym_float_token2] = ACTIONS(111),
    [aux_sym_float_token3] = ACTIONS(113),
    [sym_ratio] = ACTIONS(113),
    [sym_base10] = ACTIONS(113),
    [sym_base16] = ACTIONS(111),
    [sym_base08] = ACTIONS(111),
    [sym_base02] = ACTIONS(111),
    [anon_sym_BSLASH] = ACTIONS(111),
    [anon_sym_POSTPONE_COLON] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_definition] = ACTIONS(115),
    [sym_string] = ACTIONS(115),
    [aux_sym_float_token1] = ACTIONS(115),
    [aux_sym_float_token2] = ACTIONS(115),
    [aux_sym_float_token3] = ACTIONS(117),
    [sym_ratio] = ACTIONS(117),
    [sym_base10] = ACTIONS(117),
    [sym_base16] = ACTIONS(115),
    [sym_base08] = ACTIONS(115),
    [sym_base02] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_POSTPONE_COLON] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_definition] = ACTIONS(119),
    [sym_string] = ACTIONS(119),
    [aux_sym_float_token1] = ACTIONS(119),
    [aux_sym_float_token2] = ACTIONS(119),
    [aux_sym_float_token3] = ACTIONS(121),
    [sym_ratio] = ACTIONS(121),
    [sym_base10] = ACTIONS(121),
    [sym_base16] = ACTIONS(119),
    [sym_base08] = ACTIONS(119),
    [sym_base02] = ACTIONS(119),
    [anon_sym_BSLASH] = ACTIONS(119),
    [anon_sym_POSTPONE_COLON] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_definition] = ACTIONS(123),
    [sym_string] = ACTIONS(123),
    [aux_sym_float_token1] = ACTIONS(123),
    [aux_sym_float_token2] = ACTIONS(123),
    [aux_sym_float_token3] = ACTIONS(125),
    [sym_ratio] = ACTIONS(125),
    [sym_base10] = ACTIONS(125),
    [sym_base16] = ACTIONS(123),
    [sym_base08] = ACTIONS(123),
    [sym_base02] = ACTIONS(123),
    [anon_sym_BSLASH] = ACTIONS(123),
    [anon_sym_POSTPONE_COLON] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_definition] = ACTIONS(127),
    [sym_string] = ACTIONS(127),
    [aux_sym_float_token1] = ACTIONS(127),
    [aux_sym_float_token2] = ACTIONS(127),
    [aux_sym_float_token3] = ACTIONS(129),
    [sym_ratio] = ACTIONS(129),
    [sym_base10] = ACTIONS(129),
    [sym_base16] = ACTIONS(127),
    [sym_base08] = ACTIONS(127),
    [sym_base02] = ACTIONS(127),
    [anon_sym_BSLASH] = ACTIONS(127),
    [anon_sym_POSTPONE_COLON] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(131), 1,
      sym_word,
  [4] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(135), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 4,
  [SMALL_STATE(19)] = 8,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
