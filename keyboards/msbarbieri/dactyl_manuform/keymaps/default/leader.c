#include <config/config.h>

void leader_start_user(void) {
    rgb_matrix_sethsv(HSV_WHITE);
}

void leader_end_user(void) {
    layer_clear();

    if (leader_sequence_one_key(MKC_E)) {
        layer_invert(NUMBER_LAYER);
    } else if (leader_sequence_one_key(MKC_S)) {
        layer_invert(SOUND_LAYER);
    } else if (leader_sequence_one_key(MKC_DOT)) {
        layer_invert(FN_LAYER);
    } else if (leader_sequence_one_key(MKC_B)) {
        layer_invert(MOUSE_LAYER);
    } else if (leader_sequence_one_key(MKC_N)) {
        layer_invert(DESK_LAYER);
    } else if (leader_sequence_one_key(MKC_T) || leader_sequence_one_key(MKC_DOWN)) {
        layer_invert(NAV_LAYER);

    } else if (leader_sequence_two_keys(MKC_C, MKC_C)) {
        tap_code16(QK_MAGIC_TOGGLE_ESCAPE_CAPS_LOCK);
    } else if (leader_sequence_two_keys(MKC_K, MKC_D)) {
        set_base_layer(DVORAK_LAYER);
    } else if (leader_sequence_two_keys(MKC_K, MKC_Q)) {
        set_base_layer(QWERTY_LAYER);
    } else if (leader_sequence_two_keys(MKC_K, MKC_S)) {
        set_base_layer(SERTAIN_LAYER);
        set_single_persistent_default_layer(get_base_layer());
    } else if (leader_sequence_two_keys(MKC_M, MKC_R)) {
        SEND_STRING("hello world from hotkey!");
    }
}
