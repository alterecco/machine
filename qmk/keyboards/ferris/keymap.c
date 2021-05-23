#include QMK_KEYBOARD_H
#include <stdint.h>

#include "alterecco.h"

// clang-format off

/**
  [VOID] = LAYOUT(
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _______ , _______ , _______ , _______ , _______     ,     _______ , _______ , _______ , _______ , _______ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _______ , _______ , _______ , _______ , _______     ,     _______ , _______ , _______ , _______ , _______ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _______ , _______ , _______ , _______ , _______     ,     _______ , _______ , _______ , _______ , _______ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
                                 _______ , _______     ,     _______ , _______
                              //---------+---------+---+---+---------+---------//
  ),
**/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [DEF] = LAYOUT(
//---------+-------__Q__-----__B__-------+---------         ---------+-------__J__-----__Z__-------+---------//
   __ESC__ , ___L___ , ___R___ , ___W___ , _______     ,     _______ , ___G___ , ___U___ , ___D___ , _______ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   ___S___ , ___H___ , ___N___ , ___T___ , _COMMA_     ,     __DOT__ , ___E___ , ___A___ , ___I___ , ___O___ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   ___F___ , ___M___ , ___V___ , ___C___ , _______     ,     _______ , ___P___ , ___X___ , ___K___ , ___Y___ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
                                 _LSHFT_ , __NAV__     ,     o_SPC_o , __NUM__
                                            //---------+---------+---+---+---------+---------//
  ),

  [NAV] = LAYOUT(
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _______ , _______ , _______ , _______ , _______     ,     _______ , _______ , __UP___ , _______ , _RESET_ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   o_SFT_o , o_CTL_o , o_OPT_o , o_CMD_o , _______     ,     o_RPT_o , _LEFT__ , _DOWN__ , _RIGHT_ , _______ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _______ , _______ , _______ , _______ , _______     ,     _______ , __TAB__ , n_TABL_ , n_TABR_ , _______ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
                                 _______ , _______     ,     _BKSPC_ , _ENTER_
                              //---------+---------+---+---+---------+---------//
  ),

  [SYM] = LAYOUT(
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _CIRCF_ , __AT___ , _SCOLN_ , _EXCLM_ , _______     ,     _PLUS__ , _UNDRS_ , _MINUS_ , _EQUAL_ , _PIPE__ ,
//---------+---------+---------+---------+-_TILDE_-         -_DQUOT_-+---------+---------+---------+---------//
   _LABRC_ , _LBRAC_ , _LCBRC_ , _LPARN_ , _GRAVE_     ,     _SQUOT_ , _RPARN_ , _RCBRC_ , _RBRAC_ , _RABRC_ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _BSLSH_ , _HASH__ , _AMPRS_ , _SLASH_ , _______     ,     _______ , _PERCT_ , _DOLLR_ , _QUEST_ , _ASTER_ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
                                 _COLON_ , _LSHFT_     ,     _______ , _______
                              //---------+---------+---+---+---------+---------//
  ),

  [NUM] = LAYOUT(
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _______ , ___7___ , ___8___ , ___9___ , _______     ,     _______ , _______ , _______ , _______ , _______ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _______ , ___4___ , ___5___ , ___6___ , _______     ,     _______ , _______ , _______ , _______ , _______ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _______ , ___1___ , ___2___ , ___3___ , _______     ,     _______ , _______ , _______ , _______ , _______ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
                                 ___0___ , _______     ,     _______ , _______
                              //---------+---------+---+---+---------+---------//
  ),

};