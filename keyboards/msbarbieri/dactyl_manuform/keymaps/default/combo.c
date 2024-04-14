// combo started
#include <config/config.h>

enum combo_events {
    RESET_LAYER,
    RESET_MOUSE_LAYER,
    LEADER_COMBO,
    FN_COMBO,
    NAV_COMBO,
};

const uint16_t PROGMEM reset_combo[]       = {MKC_SPC, LT(NUMROW_LAYER, MKC_ENT), COMBO_END};
const uint16_t PROGMEM reset_mouse_combo[] = {KC_MS_BTN2, KC_MS_BTN1, COMBO_END};
const uint16_t PROGMEM leader_combo[]      = {MO(SYMBOLS_LAYER), MKC_BSPC, COMBO_END};

const uint16_t PROGMEM fn_combo[]    = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM mouse_combo[] = {KC_K, KC_M, COMBO_END};

combo_t key_combos[] = {
    [RESET_LAYER]       = COMBO_ACTION(reset_combo),
    [RESET_MOUSE_LAYER] = COMBO_ACTION(reset_mouse_combo),
    [LEADER_COMBO]      = COMBO(leader_combo, QK_LEADER),
    [NAV_COMBO]         = COMBO(mouse_combo, MO(NAV_LAYER)),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case RESET_MOUSE_LAYER:
        case RESET_LAYER:
            caps_word_off();
            layer_clear();
            set_single_persistent_default_layer(get_base_layer());
            break;
    }
}
