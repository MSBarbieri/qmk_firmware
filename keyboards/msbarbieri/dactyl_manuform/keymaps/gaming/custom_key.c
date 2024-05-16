#include "features/custom_shift_keys.h"

const custom_shift_key_t custom_shift_keys[] = {
    {KC_COLN, KC_SLSH}, // Shift : is /
    {KC_SCLN, KC_QUES}, // Shift ; is ?
};

uint8_t NUM_CUSTOM_SHIFT_KEYS = sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);
