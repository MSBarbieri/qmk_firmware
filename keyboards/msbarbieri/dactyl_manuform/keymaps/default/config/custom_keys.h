#pragma once
#include "keymap_brazilian_abnt2.h"

#define MKC_TAB KC_TAB
#define MKC_ESC KC_ESC
#define MKC_LCTL KC_LCTL
#define MKC_LALT KC_LALT
#define MKC_LGUI KC_LGUI
#define MKC_RSFT KC_RSFT
#define MKC_RCTL KC_RCTL
#define MKC_RALT KC_RALT
#define MKC_RGUI KC_RGUI
#define MKC_SPC KC_SPC
#define MKC_BSPC KC_BSPC
#define MKC_ENT KC_ENT
#define MKC_EQUAL KC_EQUAL
#define MKC_MINUS KC_MINUS


#define MKC_DEL KC_DEL
#define MKC_INS KC_INS
#define MKC_HOME KC_HOME
#define MKC_END KC_END
#define MKC_PGUP KC_PGUP
#define MKC_PGDN KC_PGDN
#define MKC_LEFT KC_LEFT
#define MKC_DOWN KC_DOWN
#define MKC_UP KC_UP
#define MKC_RIGHT KC_RIGHT
#define MKC_PSCR KC_PSCR
#define MKC_SLCK KC_SLCK
#define MKC_NO KC_NO

#define USE_PT_BR true

#if USE_PT_BR == true
#define MKC_QUOT BR_QUOT  // '
#define MKC_1 BR_1    // 1
#define MKC_2 BR_2    // 2
#define MKC_3 BR_3    // 3
#define MKC_4 BR_4    // 4
#define MKC_5 BR_5    // 5
#define MKC_6 BR_6    // 6
#define MKC_7 BR_7    // 7
#define MKC_8 BR_8    // 8
#define MKC_9 BR_9    // 9
#define MKC_0 BR_0    // 0
#define MKC_MINS BR_MINS // -
#define MKC_EQL BR_EQL  // =
#define MKC_Q BR_Q    // Q
#define MKC_W BR_W    // W
#define MKC_E BR_E    // E
#define MKC_R BR_R    // R
#define MKC_T BR_T    // T
#define MKC_Y BR_Y    // Y
#define MKC_U BR_U    // U
#define MKC_I BR_I    // I
#define MKC_O BR_O    // O
#define MKC_P BR_P    // P
#define MKC_ACUT BR_ACUT // ´ (dead)
#define MKC_LBRC BR_LBRC // [
#define MKC_A BR_A    // A
#define MKC_S BR_S    // S
#define MKC_D BR_D    // D
#define MKC_F BR_F    // F
#define MKC_G BR_G    // G
#define MKC_H BR_H    // H
#define MKC_J BR_J    // J
#define MKC_K BR_K    // K
#define MKC_L BR_L    // L
#define MKC_CCED BR_CCED // Ç
#define MKC_TILD BR_TILD // ~ (dead)
#define MKC_RBRC BR_RBRC // ]
#define MKC_BSLS BR_BSLS // (backslash)
#define MKC_Z BR_Z    // Z
#define MKC_X BR_X    // X
#define MKC_C BR_C    // C
#define MKC_V BR_V    // V
#define MKC_B BR_B    // B
#define MKC_N BR_N    // N
#define MKC_M BR_M    // M
#define MKC_COMM BR_COMM // ,
#define MKC_DOT BR_DOT  // .
#define MKC_SCLN BR_SCLN // ;
#define MKC_SLSH BR_SLSH // /
#define MKC_PDOT BR_PDOT // .
#define MKC_PCMM BR_PCMM // ,
#define MKC_DQUO BR_DQUO // "
#define MKC_EXLM BR_EXLM    // !
#define MKC_AT BR_AT    // @
#define MKC_HASH BR_HASH    // #
#define MKC_DLR BR_DLR    // $
#define MKC_PERC BR_PERC    // %
#define MKC_DIAE BR_DIAE    // ¨ (dead)
#define MKC_AMPR BR_AMPR    // &
#define MKC_ASTR BR_ASTR    // *
#define MKC_LPRN BR_LPRN    // (
#define MKC_RPRN BR_RPRN    // )
#define MKC_UNDS BR_UNDS // _
#define MKC_PLUS BR_PLUS  // +
#define MKC_GRV BR_GRV // ` (dead)
#define MKC_LCBR BR_LCBR // {
#define MKC_CIRC BR_CIRC // ^ (dead)
#define MKC_RCBR BR_RCBR // }
#define MKC_PIPE BR_PIPE // |
#define MKC_LABK BR_LABK // <
#define MKC_RABK BR_RABK  // >
#define MKC_COLN BR_COLN // :
#define MKC_QUES BR_QUES // ?
#define MKC_SUP1 BR_SUP1    // ¹
#define MKC_SUP2 BR_SUP2    // ²
#define MKC_SUP3 BR_SUP3    // ³
#define MKC_PND BR_PND    // £
#define MKC_CENT BR_CENT    // ¢
#define MKC_NOT BR_NOT    // ¬
#define MKC_SECT BR_SECT  // §
#define MKC_DEG BR_DEG    // °
#define MKC_FORD BR_FORD // ª
#define MKC_MORD BR_MORD // º
#define MKC_CRUZ BR_CRUZ    // ₢
#define MKC_GRAVE BR_GRV

#else

#define MKC_GRV  KC_GRV  // '
#define MKC_1    KC_1    // 1
#define MKC_2    KC_2    // 2
#define MKC_3    KC_3    // 3
#define MKC_4    KC_4    // 4
#define MKC_5    KC_5    // 5
#define MKC_6    KC_6    // 6
#define MKC_7    KC_7    // 7
#define MKC_8    KC_8    // 8
#define MKC_9    KC_9    // 9
#define MKC_0    KC_0    // 0
#define MKC_MINS KC_MINS // -
#define MKC_EQL  KC_EQL  // =
#define MKC_Q    KC_Q    // Q
#define MKC_W    KC_W    // W
#define MKC_E    KC_E    // E
#define MKC_R    KC_R    // R
#define MKC_T    KC_T    // T
#define MKC_Y    KC_Y    // Y
#define MKC_U    KC_U    // U
#define MKC_I    KC_I    // I
#define MKC_O    KC_O    // O
#define MKC_P    KC_P    // P
#define MKC_LBRC KC_LBRC // ´ (dead)
#define MKC_RBRC KC_RBRC // [
#define MKC_A    KC_A    // A
#define MKC_S    KC_S    // S
#define MKC_D    KC_D    // D
#define MKC_F    KC_F    // F
#define MKC_G    KC_G    // G
#define MKC_H    KC_H    // H
#define MKC_J    KC_J    // J
#define MKC_K    KC_K    // K
#define MKC_L    KC_L    // L
#define MKC_SCLN KC_SCLN // Ç
#define MKC_QUOT KC_QUOT // ~ (dead)
#define MKC_BSLS KC_BSLS // ]
#define MKC_NUBS KC_NUBS // (backslash)
#define MKC_Z    KC_Z    // Z
#define MKC_X    KC_X    // X
#define MKC_C    KC_C    // C
#define MKC_V    KC_V    // V
#define MKC_B    KC_B    // B
#define MKC_N    KC_N    // N
#define MKC_M    KC_M    // M
#define MKC_COMM KC_COMM // ,
#define MKC_DOT  KC_DOT  // .
#define MKC_SLSH KC_SLSH // ;
#define MKC_INT1 KC_INT1 // /
#define MKC_PCMM KC_PCMM // .
#define MKC_PDOT KC_PDOT // ,
#define MKC_DQUO S(KC_QUOT) // "
#define MKC_EXLM S(KC_1)    // !
#define MKC_AT   S(KC_2)    // @
#define MKC_HASH S(KC_3)    // #
#define MKC_DLR  S(KC_4)    // $
#define MKC_PERC S(KC_5)    // %
#define MKC_DIAE S(KC_6)    // ¨ (dead)
#define MKC_AMPR S(KC_7)    // &
#define MKC_ASTR S(KC_8)    // *
#define MKC_LPRN S(KC_9)    // (
#define MKC_RPRN S(KC_0)    // )
#define MKC_UNDS S(KC_MINS) // _
#define MKC_PLUS S(KC_EQL)  // +
#define MKC_LCBR S(KC_LBRC) // {
#define MKC_CIRC S(KC_TILD) // ^ (dead)
#define MKC_RCBR S(KC_RBRC) // }
#define MKC_PIPE S(KC_BSLS) // |
#define MKC_LABK S(KC_COMM) // <
#define MKC_RABK S(KC_DOT)  // >
#define MKC_COLN S(KC_SCLN) // :
#define MKC_QUES S(KC_SLSH) // ?
#define MKC_SUP1 ALGR(KC_1)    // ¹
#define MKC_SUP2 ALGR(KC_2)    // ²
#define MKC_SUP3 ALGR(KC_3)    // ³
#define MKC_PND  ALGR(KC_4)    // £
#define MKC_CENT ALGR(KC_5)    // ¢
#define MKC_NOT  ALGR(KC_6)    // ¬
#define MKC_SECT ALGR(KC_EQL)  // §
#define MKC_DEG  ALGR(KC_E)    // °
#define MKC_FORD ALGR(KC_LBRC) // ª
#define MKC_MORD ALGR(KC_RBRC) // º
#define MKC_CRUZ ALGR(KC_C)    // ₢
#define MKC_TILD KC_TILD // ~ (dead)
#define MKC_ACUT KC_NO // ´ (dead)
#define MKC_CCED KC_NO
#define MKC_GRAVE BR_GRAVE

#endif
