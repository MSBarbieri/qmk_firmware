#include "config.h"

static int _baseLayer = DVORAK_LAYER;

int get_base_layer(void) {
    return _baseLayer;
}

void set_base_layer(int layer) {
    _baseLayer = layer;
    set_single_persistent_default_layer(_baseLayer);
}
