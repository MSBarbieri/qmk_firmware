#include <config/config.h>

typedef struct {
    bool is_press_action;
    int  state;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD = 2, DOUBLE_TAP = 3, DOUBLE_HOLD = 4, TRIPLE_TAP = 5, TRIPLE_HOLD = 6 };

int cur_dance(tap_dance_state_t *state);
int cur_dance(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->pressed)
            return SINGLE_HOLD;
        else
            return SINGLE_TAP;
    } else if (state->count == 2) {
        if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    } else if (state->count == 3) {
        if (state->interrupted || !state->pressed)
            return TRIPLE_TAP;
        else
            return TRIPLE_HOLD;
    } else
        return 8;
}

enum { LEADER_TAP = 0 };

static tap leadertap_state = {.is_press_action = true, .state = 0};

void leadertap_finished(tap_dance_state_t *state, void *user_data);
void leadertap_reset(tap_dance_state_t *state, void *user_data);
void leadertap_finished(tap_dance_state_t *state, void *user_data) {
    leadertap_state.state = cur_dance(state);
    switch (leadertap_state.state) {
        case SINGLE_TAP:
            // tap_code16(QK_LEADER);
            leader_start();
            break;
        case SINGLE_HOLD:
            layer_on(DESK_LAYER);
            break;
        case DOUBLE_TAP:
        case DOUBLE_HOLD:
            // register_code(KC_LALT);
            // layer_on(1);
            break;

            // Last case is for fast typing. Assuming your key is `f`:
            // For example, when typing the word `buffer`, and you want to make sure that you send `ff` and not `Esc`.
            // In order to type `ff` when typing fast, the next character will have to be hit within the `TAPPING_TERM`, which by default is 200ms.
    }
}

void leadertap_reset(tap_dance_state_t *state, void *user_data) {
    switch (leadertap_state.state) {
        case SINGLE_TAP:
            // leader_end_user();
            break;
        case SINGLE_HOLD:
            layer_off(DESK_LAYER);
            break;
    }
    leadertap_state.state = 0;
}

tap_dance_action_t tap_dance_actions[] = {[LEADER_TAP] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, leadertap_finished, leadertap_reset)};
