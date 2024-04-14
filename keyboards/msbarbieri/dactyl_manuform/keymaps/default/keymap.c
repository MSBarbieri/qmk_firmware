#include <config/config.h>
#include "combo.c"
#include "tap_dance.c"
#include "custom_key.c"
#include "leader.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DVORAK_LAYER] = LAYOUT_manuform_let(MKC_TAB, MKC_COLN, MKC_COMM, MKC_DOT, MKC_P, MKC_Y, /** Split **/ MKC_F, MKC_G, MKC_C, MKC_R, MKC_L, MKC_SCLN,                                                                                                          // high row
                                         MKC_ESC, MT(MOD_LCTL, MKC_A), MT(MOD_LALT, MKC_O), MT(MOD_LSFT, MKC_E), MT(MOD_LGUI, MKC_U), MKC_I, /** Split **/ MKC_D, MT(MOD_LGUI, MKC_H), MT(MOD_RSFT, MKC_T), MT(MOD_RALT, MKC_N), MT(MOD_RCTL, MKC_S), MKC_MINUS, // home row
                                         KC_LSFT, MKC_QUOT, MKC_Q, MKC_J, MKC_K, MKC_X, /** Split **/ MKC_B, MKC_M, MKC_W, MKC_V, MKC_Z, MOD_LSFT,                                                                                                             // lower row
                                         OSM(MOD_LCTL), OSM(MOD_LGUI), OSM(MOD_LGUI), MO(DESK_LAYER), MKC_SPC, MO(SYMBOLS_LAYER), MKC_NO, /** Split **/ MKC_NO, MKC_BSPC, LT(NUMROW_LAYER, MKC_ENT),  MKC_NO, MKC_NO, MKC_NO, OSM(MOD_LCTL),              // thumb cluster
                                         MKC_NO, MKC_NO, MKC_NO, /** Split **/ MKC_NO, MKC_NO, MO(FN_LAYER)),                                                                                                                                                    // thumb cluster

    [SERTAIN_LAYER] = LAYOUT_manuform_let(MKC_TAB, MKC_X, MKC_L, MKC_D, MKC_H, MKC_V, /** Split **/ MKC_Z, MKC_W, MKC_O, MKC_U, MKC_COLN, MKC_SCLN,                                                                                                               // high row
                                          MKC_ESC, MT(MOD_LCTL, MKC_S), MT(MOD_LALT, MKC_R), MT(MOD_LSFT, MKC_T), MT(MOD_LGUI, MKC_N), MKC_F, /** Split **/ MKC_G, MT(MOD_LGUI, MKC_Y), MT(MOD_RSFT, MKC_E), MT(MOD_RALT, MKC_I), MT(MOD_LCTL, MKC_A), MKC_MINUS, // home row
                                          KC_LSFT, MKC_Q, MKC_J, MKC_M, MKC_K, MKC_B, /** Split **/ MKC_P, MKC_C, MKC_QUOT, MKC_COMM, MKC_DOT, MOD_LSFT,                                                                                                        // lower row
                                          OSM(MOD_LCTL), OSM(MOD_LGUI), OSM(MOD_LGUI), MO(DESK_LAYER), MKC_SPC, MO(SYMBOLS_LAYER), MKC_NO, /** Split **/ MKC_NO, MKC_BSPC, LT(NUMROW_LAYER, MKC_ENT), MO(FN_LAYER), MKC_NO, MKC_NO, OSM(MOD_LCTL),              // thumb cluster
                                          MKC_NO, MKC_NO, MKC_NO, /** Split **/ MO(PT_LAYER), MKC_NO, MKC_NO),                                                                                                                                             // thumb cluster

    [QWERTY_LAYER] = LAYOUT_manuform_let(MKC_TAB, MKC_Q, MKC_W, MKC_E, MKC_R, MKC_T, /** Split **/ MKC_Y, MKC_U, MKC_I, MKC_O, MKC_P, MKC_SCLN,                                                                                                                    // high row
                                         MKC_ESC, MT(MOD_LCTL, MKC_A), MT(MOD_LALT, MKC_S), MT(MOD_LSFT, MKC_D), MT(MOD_LGUI, MKC_F), MKC_G, /** Split **/ MKC_H, MT(MOD_LGUI, MKC_J), MT(MOD_RSFT, MKC_K), MT(MOD_RALT, MKC_L), MT(MOD_LCTL, MKC_SCLN), MKC_QUOT, // home row
                                         KC_LSFT, MKC_Z, MKC_X, MKC_C, MKC_V, MKC_B, /** Split **/ MKC_N, MKC_M, MKC_COMM, MKC_DOT, MKC_SLSH, MOD_RSFT,                                                                                                          // lower row
                                         OSM(MOD_LCTL), OSM(MOD_LGUI), OSM(MOD_LGUI), MO(DESK_LAYER), MKC_SPC, MO(SYMBOLS_LAYER), MKC_NO, /** Split **/ MKC_NO, MKC_BSPC, LT(NUMROW_LAYER, MKC_ENT), MO(FN_LAYER), MKC_NO, MKC_NO, OSM(MOD_LCTL),                // thumb cluster
                                         MKC_NO, MKC_NO, MKC_NO, /** Split **/ MKC_NO, MKC_NO, MKC_NO),                                                                                                                                                      // thumb cluster

    [PT_LAYER] = LAYOUT_manuform_let(_______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, MKC_CCED, _______, _______, _______,                   // high row
                                     TG(PT_LAYER), _______, _______, _______, _______, _______, /** Split **/ _______, MKC_CIRC, MKC_GRV, MKC_ACUT, MKC_TILD, _______,               // home row
                                     _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                   // lower row
                                     _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______, _______, // thumb cluster
                                     _______, _______, _______, _______, _______, _______),                                                                                      // thumb cluster
    // [SYMBOLS_LAYER] = LAYOUT_manuform_let(_______, KC_COLN, KC_SLASH, LSFT(KC_LBRC), LSFT(KC_1), LSFT(KC_COMM), /** Split **/ LSFT(KC_DOT), LSFT(KC_8), LSFT(KC_RBRC), KC_BSLS, LSFT(KC_6), _______,// lower row
    //                                       TG(SYMBOLS_LAYER), KC_GRAVE, KC_EQUAL, LSFT(KC_9), LSFT(KC_7), _______, /** Split **/KC_QUES, LSFT(KC_BSLS), LSFT(KC_0), LSFT(KC_EQUAL), LSFT(KC_GRAVE), _______,
    //                                       _______, _______, LSFT(KC_2), KC_LBRC, LSFT(KC_3), _______, /** Split **/ _______, LSFT(KC_4), KC_RBRC, LSFT(KC_5), KC_COMM, KC_DOT,        // lower row
    [SYMBOLS_LAYER] = LAYOUT_manuform_let(_______, MKC_COLN, MKC_COMM, MKC_DOT, LSFT(MKC_1), LSFT(MKC_7), /** Split **/ LSFT(MKC_BSLS), LSFT(MKC_2), LSFT(MKC_5), MKC_SLSH, MKC_BSLS, _______,                   // high row
                                          LSFT(MKC_4), LSFT(MKC_EQUAL), MKC_LBRC, LSFT(MKC_LBRC), LSFT(MKC_9), LSFT(MKC_3), /** Split **/ MKC_EQUAL, LSFT(MKC_0), LSFT(MKC_RBRC), MKC_RBRC, LSFT(MKC_8), _______, // home row
                                          _______, MKC_GRAVE, _______, MKC_CIRC, MKC_TILD, _______, /** Split **/ _______, MKC_QUOT, _______, _______, _______, _______,                         // lower row
                                          _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, KC_LSFT, _______, _______, _______, _______,                  // base row
                                          _______, _______, _______, /** Split **/ _______, _______, _______),                                                                                         // thumb cluster
    //
    [NUMBER_LAYER] = LAYOUT_manuform_let(_______, _______, _______, _______, _______, _______, /** Split **/ LSFT(MKC_8), MKC_7, MKC_8, MKC_9, LSFT(MKC_EQUAL), _______,                                                      // high row
                                         _______, _______, _______, _______, _______, _______, /** Split **/ MKC_EQUAL, MKC_4, MKC_5, MKC_6, MKC_0, _______,                                                                  // home row
                                         _______, _______, _______, _______, _______, _______, /** Split **/ MKC_SLSH, MKC_1, MKC_2, MKC_3, MKC_MINUS, _______,                                                               // lower row
                                         _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, MKC_0, _______, _______, _______,                                        // base row
                                         _______, _______, _______, _______, _______, _______),                                                                                                                          // thumb cluster
    [NUMROW_LAYER] = LAYOUT_manuform_let(_______, LSFT(MKC_EQUAL), MKC_LBRC, LSFT(MKC_LBRC), LSFT(MKC_9), LSFT(MKC_3), /** Split **/ MKC_EQUAL, LSFT(MKC_0), LSFT(MKC_RBRC), MKC_RBRC, LSFT(MKC_8), _______,                       // high row
                                         _______, MT(MOD_LCTL, MKC_1), MT(MOD_LALT, MKC_2), MT(MOD_LSFT, MKC_3), MKC_4, MKC_5, /** Split **/ MKC_6, MKC_7, MT(MOD_LSFT, MKC_8), MT(MOD_LALT, MKC_9), MT(MOD_LCTL, MKC_0), _______, // home row
                                         _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                                                       // lower row
                                         _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______, _______,                                     // thumb cluster
                                         _______, _______, _______, /** Split **/ _______, _______, _______),
    [NAV_LAYER]    = LAYOUT_manuform_let(_______, _______, KC_HOME, KC_UP, KC_END, _______, /** Split **/ _______, KC_HOME, KC_UP, KC_END, KC_RIGHT, _______,                     // high row
                                         _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGUP, /** Split **/ KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGUP, _______,              // home row
                                         _______, _______, _______, KC_DOWN, KC_UP, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                  // lower row
                                         _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, KC_0, _______, _______, _______, // base row
                                         _______, _______, _______, /** Split **/ _______, _______, _______),                                                                     // thumb cluster
    //
    [MOUSE_LAYER] = LAYOUT_manuform_let(_______, _______, _______, _______, _______, _______, /** Split **/ _______, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, _______, _______,                        // high row
                                        _______, KC_MS_WH_DOWN, KC_ACL0, KC_ACL1, KC_ACL2, KC_MS_WH_UP, /** Split **/ KC_MS_WH_DOWN, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_WH_UP, _______, // home row
                                        _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                               // lower row
                                        _______, _______, _______, _______, KC_MS_BTN2, _______, _______, /** Split **/ _______, _______, KC_MS_BTN1, _______, _______, _______, _______,       // lower row
                                        _______, _______, _______, /** Split **/ _______, _______, _______),                                                                                    // thumb cluster

    [SOUND_LAYER] = LAYOUT_manuform_let(_______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                                                             // row high
                                        _______, _______, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, _______, /** Split **/ _______, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, _______, _______, // row home
                                        _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                                                             // row lower
                                        _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______, _______,                                           // thumb cluster
                                        _______, _______, _______, /** Split **/ _______, _______, _______),

    [FN_LAYER] = LAYOUT_manuform_let(_______, _______, _______, KC_F11, _______, _______, /** Split **/ _______, KC_PSCR, KC_F12, _______, _______, _______,                     // row high
                                     _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, /** Split **/ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______,                                      // row home
                                     _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______,                   // row lower
                                     _______, _______, _______, _______, _______, _______, _______, /** Split **/ _______, _______, _______, _______, _______, _______, _______, // thumb cluster
                                     _______, _______, _______, /** Split **/ _______, _______, _______),

    [DESK_LAYER] = LAYOUT_manuform_let(_______, G(C(KC_1)), G(C(KC_2)), G(C(KC_3)), G(C(KC_4)), G(C(KC_5)), /** Split **/ G(C(KC_6)), G(C(KC_7)), G(C(KC_8)), G(C(KC_9)), G(C(KC_0)), _______, // row high
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
        case SERTAIN_LAYER:
        case QWERTY_LAYER:
        case DVORAK_LAYER:
            rgb_matrix_sethsv(HSV_PURPLE);
            break;
        case FN_LAYER:
            rgb_matrix_sethsv(HSV_PINK);
            break;
        case SOUND_LAYER:
            rgb_matrix_sethsv(HSV_ORANGE);
            break;
        case DESK_LAYER:
            rgb_matrix_sethsv(HSV_CORAL);
            break;
        default: //  for any other layers, or the default layer
            rgb_matrix_sethsv(HSV_WHITE);
            break;
    }
    return state;
}

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
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
