#include "config.h"

void leader_start_user(void) {
    rgb_matrix_sethsv(HSV_WHITE);
}

void leader_end_user(void) {
    layer_clear();

    if (leader_sequence_one_key(KC_E)) {
        layer_invert(NUMBER_LAYER);
    } else if (leader_sequence_one_key(KC_S)) {
        layer_invert(SOUND_LAYER);
    } else if (leader_sequence_one_key(KC_DOT)) {
        layer_invert(FN_LAYER);
    } else if (leader_sequence_one_key(KC_B)) {
        layer_invert(MOUSE_LAYER);
    } else if (leader_sequence_one_key(KC_N)) {
        layer_invert(DESK_LAYER);
    } else if (leader_sequence_one_key(KC_T) || leader_sequence_one_key(KC_DOWN)) {
        layer_invert(NAV_LAYER);
    } else if (leader_sequence_two_keys(KC_C, KC_C)) {
        tap_code16(QK_MAGIC_TOGGLE_ESCAPE_CAPS_LOCK);
    } else if (leader_sequence_two_keys(KC_M, KC_R)) {
        SEND_STRING("hello world from hotkey!");
    }
}
