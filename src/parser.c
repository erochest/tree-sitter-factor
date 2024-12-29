#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
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
  sym_source_file = 14,
  sym__declaration = 15,
  sym__top_level_form = 16,
  sym_number = 17,
  sym_float = 18,
  sym_integer = 19,
  sym_unary_postfix = 20,
  sym_unary_op = 21,
  aux_sym_source_file_repeat1 = 22,
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
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym__top_level_form] = "_top_level_form",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_unary_postfix] = "unary_postfix",
  [sym_unary_op] = "unary_op",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym__top_level_form] = sym__top_level_form,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_unary_postfix] = sym_unary_postfix,
  [sym_unary_op] = sym_unary_op,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
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
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 42},
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
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(10),
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
  },
  [2] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_definition] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
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
  },
  [3] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_definition] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [aux_sym_float_token1] = ACTIONS(28),
    [aux_sym_float_token2] = ACTIONS(28),
    [aux_sym_float_token3] = ACTIONS(31),
    [sym_ratio] = ACTIONS(34),
    [sym_base10] = ACTIONS(37),
    [sym_base16] = ACTIONS(40),
    [sym_base08] = ACTIONS(40),
    [sym_base02] = ACTIONS(40),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POSTPONE_COLON] = ACTIONS(43),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym_definition] = ACTIONS(46),
    [sym_string] = ACTIONS(46),
    [aux_sym_float_token1] = ACTIONS(46),
    [aux_sym_float_token2] = ACTIONS(46),
    [aux_sym_float_token3] = ACTIONS(48),
    [sym_ratio] = ACTIONS(48),
    [sym_base10] = ACTIONS(48),
    [sym_base16] = ACTIONS(46),
    [sym_base08] = ACTIONS(46),
    [sym_base02] = ACTIONS(46),
    [anon_sym_BSLASH] = ACTIONS(46),
    [anon_sym_POSTPONE_COLON] = ACTIONS(46),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [sym_definition] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
    [aux_sym_float_token1] = ACTIONS(50),
    [aux_sym_float_token2] = ACTIONS(50),
    [aux_sym_float_token3] = ACTIONS(52),
    [sym_ratio] = ACTIONS(52),
    [sym_base10] = ACTIONS(52),
    [sym_base16] = ACTIONS(50),
    [sym_base08] = ACTIONS(50),
    [sym_base02] = ACTIONS(50),
    [anon_sym_BSLASH] = ACTIONS(50),
    [anon_sym_POSTPONE_COLON] = ACTIONS(50),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_definition] = ACTIONS(54),
    [sym_string] = ACTIONS(54),
    [aux_sym_float_token1] = ACTIONS(54),
    [aux_sym_float_token2] = ACTIONS(54),
    [aux_sym_float_token3] = ACTIONS(56),
    [sym_ratio] = ACTIONS(56),
    [sym_base10] = ACTIONS(56),
    [sym_base16] = ACTIONS(54),
    [sym_base08] = ACTIONS(54),
    [sym_base02] = ACTIONS(54),
    [anon_sym_BSLASH] = ACTIONS(54),
    [anon_sym_POSTPONE_COLON] = ACTIONS(54),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_definition] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
    [aux_sym_float_token1] = ACTIONS(58),
    [aux_sym_float_token2] = ACTIONS(58),
    [aux_sym_float_token3] = ACTIONS(60),
    [sym_ratio] = ACTIONS(60),
    [sym_base10] = ACTIONS(60),
    [sym_base16] = ACTIONS(58),
    [sym_base08] = ACTIONS(58),
    [sym_base02] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(58),
    [anon_sym_POSTPONE_COLON] = ACTIONS(58),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(62), 1,
      sym_word,
  [4] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(66), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 4,
  [SMALL_STATE(10)] = 8,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
