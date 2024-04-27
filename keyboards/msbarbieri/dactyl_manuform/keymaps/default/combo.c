// combo started

enum combo_events {
    RESET_LAYER,
};

const uint16_t PROGMEM reset_combo[] = {MT(MOD_LGUI, KC_SPC), LT(NUMROW_LAYER, KC_ENT), COMBO_END};

combo_t key_combos[] = {
    [RESET_LAYER] = COMBO_ACTION(reset_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case RESET_LAYER:
            caps_word_off();
            layer_clear();
            set_single_persistent_default_layer(BASE_LAYER);
            break;
    }
}
