// combo started

enum combo_events { RESET_LAYER, RESET_MOUSE_LAYER, LEADER_COMBO };

const uint16_t PROGMEM reset_combo[]       = {LT(SYMBOLS_LAYER, KC_SPC), LT(NUMROW_LAYER, KC_ENT), COMBO_END};
const uint16_t PROGMEM reset_mouse_combo[] = {KC_MS_BTN2, KC_MS_BTN1, COMBO_END};
const uint16_t PROGMEM leader_combo[]      = {LT(DESK_LAYER, KC_DEL), KC_BSPC, COMBO_END};

combo_t key_combos[] = {
    [RESET_LAYER]       = COMBO_ACTION(reset_combo),
    [RESET_MOUSE_LAYER] = COMBO_ACTION(reset_mouse_combo),
    [LEADER_COMBO]      = COMBO(leader_combo, QK_LEADER),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case RESET_MOUSE_LAYER:
        case RESET_LAYER:
            caps_word_off();
            layer_clear();
            set_single_persistent_default_layer(BASE_LAYER);
            break;
    }
}
