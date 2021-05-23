#pragma once

#include "quantum.h"

enum layers
{
  DEF,
  NAV,
  SYM,
  NUM,
  SYS,
};

enum keycodes
{
  o_RPT_o = SAFE_RANGE,
  o_STP_o,
  o_NUM_o,

  // Oneshot mods with no timers.
  o_SFT_o,
  o_CTL_o,
  o_OPT_o,
  o_CMD_o,
};

#define XXXXXXX KC_NO
// #undef  _______
// #define _______ KC_NO

#define __NAV__ OSL(NAV)
#define __NUM__ OSL(NUM)
#define o_SPC_o LT(SYM, KC_SPACE)

#define ___A___ KC_A
#define ___B___ KC_B
#define ___C___ KC_C
#define ___D___ KC_D
#define ___E___ KC_E
#define ___F___ KC_F
#define ___G___ KC_G
#define ___H___ KC_H
#define ___I___ KC_I
#define ___J___ KC_J
#define ___K___ KC_K
#define ___L___ KC_L
#define ___M___ KC_M
#define ___N___ KC_N
#define ___O___ KC_O
#define ___P___ KC_P
#define ___Q___ KC_Q
#define ___R___ KC_R
#define ___S___ KC_S
#define ___T___ KC_T
#define ___U___ KC_U
#define ___V___ KC_V
#define ___W___ KC_W
#define ___X___ KC_X
#define ___Y___ KC_Y
#define ___Z___ KC_Z

#define ___0___ KC_0
#define ___1___ KC_1
#define ___2___ KC_2
#define ___3___ KC_3
#define ___4___ KC_4
#define ___5___ KC_5
#define ___6___ KC_6
#define ___7___ KC_7
#define ___8___ KC_8
#define ___9___ KC_9

// WORKS FOR ABC EXTENDED
#define _ARING_ ROPT(KC_A)
#define _OSLSH_ ROPT(KC_O)
#define _AELIG_ ROPT(KC_QUOTE)

#define _LPARN_ KC_LEFT_PAREN
#define _RPARN_ KC_RIGHT_PAREN
#define _LCBRC_ KC_LEFT_CURLY_BRACE
#define _RCBRC_ KC_RIGHT_CURLY_BRACE
#define _LBRAC_ KC_LBRACKET
#define _RBRAC_ KC_RBRACKET
#define _LABRC_ KC_LEFT_ANGLE_BRACKET
#define _RABRC_ KC_RIGHT_ANGLE_BRACKET

#define __DOT__ KC_DOT
#define _COMMA_ KC_COMMA
#define _SQUOT_ KC_QUOTE
#define _DQUOT_ KC_DOUBLE_QUOTE
#define _COLON_ KC_COLON
#define _SCOLN_ KC_SCOLON
#define _TILDE_ LSFT(KC_GRAVE)
#define _GRAVE_ KC_GRAVE
#define _UNDRS_ KC_UNDERSCORE
#define _EQUAL_ KC_EQUAL
#define _MINUS_ KC_MINUS
#define _PLUS__ KC_PLUS
#define _ASTER_ KC_ASTERISK
#define _HASH__ KC_HASH
#define _DOLLR_ KC_DOLLAR
#define _SLASH_ KC_SLASH
#define _BSLSH_ KC_BSLASH
#define _PERCT_ KC_PERCENT
#define _AMPRS_ KC_AMPERSAND
#define _QUEST_ KC_QUESTION
#define _EXCLM_ KC_EXCLAIM
#define _CIRCF_ KC_CIRCUMFLEX
#define _PIPE__ LSFT(KC_BSLS)
#define __AT___ KC_AT

#define _SPACE_ KC_SPACE
#define __TAB__ KC_TAB
#define _ENTER_ KC_ENTER
#define _BKSPC_ KC_BSPACE
#define __ESC__ KC_ESCAPE

#define _LEFT__ KC_LEFT
#define __UP___ KC_UP
#define _DOWN__ KC_DOWN
#define _RIGHT_ KC_RIGHT

#define _LSHFT_ KC_LSFT
#define _LCTRL_ KC_LCTL
#define _LOPT__ KC_LOPT
#define _LCMD__ KC_LCMD

#define n_TABL_ LSFT(LCMD(_LBRAC_))
#define n_TABR_ LSFT(LCMD(_RBRAC_))

#define _RESET_ RESET

#define MAC_UNDO LCMD(KC_Z)
#define MAC_REDO LSFT(LCMD(KC_Z))
#define MAC_COPY LCMD(KC_C)
#define MAC_PASTE LCMD(KC_V)
#define MAC_CUT LCMD(KC_X)
#define MAC_SELECT_ALL LCMD(KC_A)
#define MAC_PASTE_MATCH LSFT(LOPT(LCMD(KC_C)))

#define BRI_MIN KC_F14
#define BRI_MAX KC_F15
