#include "features/custom_shift_keys.h"

const custom_shift_key_t custom_shift_keys[] = {
    {MKC_COLN, MKC_SLSH}, // Shift : is /
    {MKC_SCLN, MKC_QUES}, // Shift ; is ?
    {MKC_BSPC, MKC_DEL},  // Shift backspace is del
};

uint8_t NUM_CUSTOM_SHIFT_KEYS = sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);
