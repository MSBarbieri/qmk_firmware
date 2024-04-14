#include QMK_KEYBOARD_H
#include "keymap_brazilian_abnt2.h"
#include "config.h"

#include "combo.c"
#include "tap_dance.c"
#include "custom_key.c"
#include "leader.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DVORAK_LAYER] = LAYOUT_manuform_let(KC_TAB, KC_COLN, KC_COMM, KC_DOT, KC_P, KC_Y, /** Split **/ KC_F, KC_G, KC_C, KC_R, KC_L, KC_SCLN,                                                                                                                                           // high row
                                         KC_ESC, MT(MOD_LCTL, KC_A), MT(MOD_LALT, KC_O), MT(MOD_LSFT, KC_E), MT(MOD_LGUI, KC_U), KC_I, /** Split **/ KC_D, MT(MOD_LGUI, KC_H), MT(MOD_RSFT, KC_T), MT(MOD_RALT, KC_N), MT(MOD_RCTL, KC_S), KC_MINUS,                                  // home row
                                         OSM(MOD_LSFT), KC_QUOT, KC_Q, KC_J, KC_K, KC_X, /** Split **/ KC_B, KC_M, KC_W, KC_V, KC_Z, MOD_LSFT,                                                                                                                                        // lower row
                                         OSM(MOD_LCTL), OSM(MOD_LGUI), OSM(MOD_LGUI), OSM(MOD_LALT), LT(SYMBOLS_LAYER, KC_SPC), LT(DESK_LAYER, KC_DEL), DF(SERTAIN_LAYER), /** Split **/ KC_NO, KC_BSPC, LT(NUMROW_LAYER, KC_ENT), OSM(MOD_RALT), TG(PT_LAYER), KC_NO, OSM(MOD_LCTL), // thumb cluster
                                         OSM(MOD_LCTL), DF(DVORAK_LAYER), DF(QWERTY_LAYER), /** Split **/ KC_GRAVE, KC_CAPS, KC_DEL),                                                                                                                                                 // thumb cluster
    [CANARY_LAYER] = LAYOUT_manuform_let(KC_TAB, KC_W, KC_L, KC_Y, KC_P, KC_B, /** Split **/ KC_Z, KC_F, KC_O, KC_U, KC_QUOT, KC_SCLN,                                                                                                                                                // high row
                                         KC_ESC, MT(MOD_LCTL, KC_C), MT(MOD_LALT, KC_R), MT(MOD_LSFT, KC_S), MT(MOD_LGUI, KC_T), KC_G, /** Split **/ KC_M, MT(MOD_LGUI, KC_N), MT(MOD_RSFT, KC_E), MT(MOD_RALT, KC_I), MT(MOD_LCTL, KC_A), KC_MINUS,                                  // home row
                                         OSM(MOD_LSFT), KC_Q, KC_J, KC_V, KC_D, KC_K, /** Split **/ KC_X, KC_H, KC_COLN, KC_COMM, KC_DOT, MOD_LSFT,                                                                                                                                   // lower row
                                         OSM(MOD_LCTL), OSM(MOD_LGUI), KC_NO, OSM(MOD_LALT), LT(SYMBOLS_LAYER, KC_SPC), LT(DESK_LAYER, KC_DEL), DF(SERTAIN_LAYER), /** Split **/ KC_NO, KC_BSPC, LT(NUMROW_LAYER, KC_ENT), OSM(MOD_RALT), KC_NO, KC_NO, OSM(MOD_LCTL),                // base row
                                         OSM(MOD_LCTL), DF(DVORAK_LAYER), DF(QWERTY_LAYER), /** Split **/ KC_GRAVE, KC_CAPS, KC_DEL),                                                                                                                                                 // thumb cluster
    [QWERTY_LAYER] = LAYOUT_manuform_let(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, /** Split **/ KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SCLN,                                                                                                                                                   // high row
                                         KC_ESC, MT(MOD_LCTL, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LSFT, KC_D), MT(MOD_LGUI, KC_F), KC_G, /** Split **/ KC_H, MT(MOD_LGUI, KC_J), MT(MOD_RSFT, KC_K), MT(MOD_RALT, KC_L), MT(MOD_LCTL, KC_SCLN), KC_QUOT,                                // home row
                                         OSM(MOD_LSFT), KC_Z, KC_X, KC_C, KC_V, KC_B, /** Split **/ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MOD_RSFT,                                                                                                                                   // lower row
                                         OSM(MOD_LCTL), OSM(MOD_LGUI), KC_NO, OSM(MOD_LALT), LT(SYMBOLS_LAYER, KC_SPC), LT(DESK_LAYER, KC_DEL), DF(SERTAIN_LAYER), /** Split **/ KC_NO, KC_BSPC, LT(NUMROW_LAYER, KC_ENT), OSM(MOD_RALT), KC_NO, KC_NO, OSM(MOD_LCTL),                // base row
                                         OSM(MOD_LCTL), DF(DVORAK_LAYER), DF(QWERTY_LAYER), /** Split **/ KC_GRAVE, KC_CAPS, KC_DEL),                                                                                                                                                 // thumb cluster

    [PT_LAYER] = LAYOUT_manuform_let(_______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, BR_CCED, _______, _______, _______,                   // high row
                                     TG(PT_LAYER), _______, _______, _______, _______, _______, /** Split **/ _______, BR_CIRC, BR_GRV, BR_ACUT, BR_TILD, _______,               // home row
                                     _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                   // lower row
                                     _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______, _______, // thumb cluster
                                     _______, _______, _______, _______, _______, _______),                                                                                      // thumb cluster

    [SYMBOLS_LAYER] = LAYOUT_manuform_let(_______, KC_COLN, KC_SLASH, LSFT(KC_LBRC), LSFT(KC_1), LSFT(KC_COMM), /** Split **/ LSFT(KC_DOT), LSFT(KC_8), LSFT(KC_RBRC), KC_BSLS, LSFT(KC_6), _______,
                                          // start home row
                                          TG(SYMBOLS_LAYER), KC_GRAVE, KC_EQUAL, LSFT(KC_9), LSFT(KC_7), _______, /** Split **/
                                          KC_QUES, LSFT(KC_BSLS), LSFT(KC_0), LSFT(KC_EQUAL), LSFT(KC_GRAVE), _______,
                                          // end home row
                                          _______, _______, LSFT(KC_2), KC_LBRC, LSFT(KC_3), _______, /** Split **/ _______, LSFT(KC_4), KC_RBRC, LSFT(KC_5), KC_COMM, KC_DOT,        // lower row
                                          _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______, _______, // base row
                                          _______, _______, _______, /** Split **/ _______, _______, _______),                                                                        // thumb cluster
    //
    [NUMBER_LAYER] = LAYOUT_manuform_let(_______, _______, _______, _______, _______, _______, /** Split **/ LSFT(KC_8), KC_7, KC_8, KC_9, LSFT(KC_EQUAL), _______,                                                      // high row
                                         _______, _______, _______, _______, _______, _______, /** Split **/ KC_EQUAL, KC_4, KC_5, KC_6, KC_0, _______,                                                                  // home row
                                         _______, _______, _______, _______, _______, _______, /** Split **/ KC_SLSH, KC_1, KC_2, KC_3, KC_MINUS, _______,                                                               // lower row
                                         _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, KC_0, _______, _______, _______,                                        // base row
                                         _______, _______, _______, _______, _______, _______),                                                                                                                          // thumb cluster
    [NUMROW_LAYER] = LAYOUT_manuform_let(_______, LSFT(KC_EQUAL), KC_LBRC, LSFT(KC_LBRC), LSFT(KC_9), LSFT(KC_3), /** Split **/ KC_EQUAL, LSFT(KC_0), LSFT(KC_RBRC), KC_RBRC, LSFT(KC_8), _______,                       // high row
                                         _______, MT(MOD_LCTL, KC_1), MT(MOD_LALT, KC_2), MT(MOD_LSFT, KC_3), KC_4, KC_5, /** Split **/ KC_6, KC_7, MT(MOD_LSFT, KC_8), MT(MOD_LALT, KC_9), MT(MOD_LCTL, KC_0), _______, // home row
                                         _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                                                       // lower row
                                         _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______, _______,                                     // thumb cluster
                                         _______, _______, _______, /** Split **/ _______, _______, _______),
    [NAV_LAYER]    = LAYOUT_manuform_let(_______, _______, KC_HOME, KC_UP, KC_END, _______, /** Split **/ _______, _______, _______, _______, KC_RIGHT, _______,                           // high row
                                         _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGUP, /** Split **/ _______, KC_LEFT, _______, _______, _______, _______,                        // home row
                                         _______, _______, _______, KC_DOWN, KC_UP, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                           // lower row
                                         _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, KC_0, _______, _______, _______,          // base row
                                         _______, _______, _______, /** Split **/ _______, _______, _______),                                                                              // thumb cluster
    [MOUSE_LAYER]  = LAYOUT_manuform_let(_______, _______, _______, _______, _______, _______, /** Split **/ _______, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, _______, _______,                  // high row
                                         _______, KC_MS_WH_DOWN, KC_ACL0, KC_ACL1, KC_ACL2, _______, /** Split **/ _______, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_WH_UP, _______,     // home row
                                         _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                         // lower row
                                         _______, _______, _______, _______, KC_MS_BTN2, _______, _______, /** Split **/ _______, _______, KC_MS_BTN1, _______, _______, _______, _______, // lower row
                                         _______, _______, _______, /** Split **/ _______, _______, _______),                                                                              // thumb cluster

    [SOUND_LAYER] = LAYOUT_manuform_let(_______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                                                             // row high
                                        _______, _______, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, _______, /** Split **/ _______, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, _______, _______, // row home
                                        _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                                                             // row lower
                                        _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______, _______,                                           // thumb cluster
                                        _______, _______, _______, /** Split **/ _______, _______, _______),
    [FN_LAYER]    = LAYOUT_manuform_let(_______, _______, _______, KC_F11, _______, _______, /** Split **/ _______, KC_PSCR, KC_F12, _______, _______, _______,                     // row high
                                        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, /** Split **/ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______,                                      // row home
                                        _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                   // row lower
                                        _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______, _______, // thumb cluster
                                        _______, _______, _______, /** Split **/ _______, _______, _______),
    [DESK_LAYER]  = LAYOUT_manuform_let(_______, G(C(KC_1)), G(C(KC_2)), G(C(KC_3)), G(C(KC_4)), G(C(KC_5)), /** Split **/ G(C(KC_6)), G(C(KC_7)), G(C(KC_8)), G(C(KC_9)), G(C(KC_0)), _______, // row high
                                        _______, G(KC_1), G(KC_2), G(KC_3), G(KC_4), G(KC_5), /** Split **/ G(KC_6), G(KC_7), G(KC_8), G(KC_9), G(KC_0), _______,                               // row lower
                                        _______, G(A(KC_1)), G(A(KC_2)), G(A(KC_3)), G(A(KC_4)), G(A(KC_5)), /** Split **/ G(A(KC_6)), G(A(KC_7)), G(A(KC_8)), G(A(KC_9)), G(A(KC_0)), _______, // row lower
                                        _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, KC_LSFT, _______, _______, _______, _______,             // thumb cluster
                                        _______, _______, _______, /** Split **/ _______, _______, _______),
};

void persistent_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case SYMBOLS_LAYER:
            rgb_matrix_sethsv(HSV_GREEN);
            break;
        case NUMBER_LAYER:
        case NUMROW_LAYER:
            rgb_matrix_sethsv(HSV_CYAN);
            break;
        case NAV_LAYER:
        case MOUSE_LAYER:
            rgb_matrix_sethsv(HSV_RED);
            break;
        case CANARY_LAYER:
        case QWERTY_LAYER:
        case DVORAK_LAYER:
            rgb_matrix_sethsv(HSV_PURPLE);
            break;
        default: //  for any other layers, or the default layer
            rgb_matrix_sethsv(HSV_WHITE);
            break;
    }
    return state;
}

void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_custom_shift_keys(keycode, record)) {
        return false;
    }
    // Your macros ...
    switch (keycode) {
        case KC_TRNS:
        case KC_NO:
            /* Always cancel one-shot layer when another key gets pressed */
            if (record->event.pressed && is_oneshot_layer_active()) clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
            return true;
        default:
            return true;
    }

    return true;
}
