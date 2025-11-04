/*
 * (c) see original file header
 */
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "keymap.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Layer 0 */
  [0] = LAYOUT_universal(
    L0_L_R1_C1 , L0_L_R1_C2 , L0_L_R1_C3 , L0_L_R1_C4 , L0_L_R1_C5 ,        L0_R_R1_C1 , L0_R_R1_C2 , L0_R_R1_C3 , L0_R_R1_C4 , L0_R_R1_C5 ,
    L0_L_R2_C1 , L0_L_R2_C2 , L0_L_R2_C3 , L0_L_R2_C4 , L0_L_R2_C5 ,        L0_R_R2_C1 , L0_R_R2_C2 , L0_R_R2_C3 , L0_R_R2_C4 , L0_R_R2_C5 ,
    L0_L_R3_C1 , L0_L_R3_C2 , L0_L_R3_C3 , L0_L_R3_C4 , L0_L_R3_C5 ,        L0_R_R3_C1 , L0_R_R3_C2 , L0_R_R3_C3 , L0_R_R3_C4 , L0_R_R3_C5 ,
    L0_L_R4_C1 , L0_L_R4_C2 , L0_L_R4_C3 , L0_L_R4_C4 , L0_L_R4_C5 , L0_L_R4_C6 ,  L0_R_R4_C1 , L0_R_R4_C2 , L0_R_R4_C3 , L0_R_R4_C4 , L0_R_R4_C5 , L0_R_R4_C6
  ),

  /* Layer 1 */
  [1] = LAYOUT_universal(
    L1_L_R1_C1 , L1_L_R1_C2 , L1_L_R1_C3 , L1_L_R1_C4 , L1_L_R1_C5 ,        L1_R_R1_C1 , L1_R_R1_C2 , L1_R_R1_C3 , L1_R_R1_C4 , L1_R_R1_C5 ,
    L1_L_R2_C1 , L1_L_R2_C2 , L1_L_R2_C3 , L1_L_R2_C4 , L1_L_R2_C5 ,        L1_R_R2_C1 , L1_R_R2_C2 , L1_R_R2_C3 , L1_R_R2_C4 , L1_R_R2_C5 ,
    L1_L_R3_C1 , L1_L_R3_C2 , L1_L_R3_C3 , L1_L_R3_C4 , L1_L_R3_C5 ,        L1_R_R3_C1 , L1_R_R3_C2 , L1_R_R3_C3 , L1_R_R3_C4 , L1_R_R3_C5 ,
    L1_L_R4_C1 , L1_L_R4_C2 , L1_L_R4_C3 , L1_L_R4_C4 , L1_L_R4_C5 , L1_L_R4_C6 ,  L1_R_R4_C1 , L1_R_R4_C2 , L1_R_R4_C3 , L1_R_R4_C4 , L1_R_R4_C5 , L1_R_R4_C6
  ),

  /* Layer 2 */
  [2] = LAYOUT_universal(
    L2_L_R1_C1 , L2_L_R1_C2 , L2_L_R1_C3 , L2_L_R1_C4 , L2_L_R1_C5 ,        L2_R_R1_C1 , L2_R_R1_C2 , L2_R_R1_C3 , L2_R_R1_C4 , L2_R_R1_C5 ,
    L2_L_R2_C1 , L2_L_R2_C2 , L2_L_R2_C3 , L2_L_R2_C4 , L2_L_R2_C5 ,        L2_R_R2_C1 , L2_R_R2_C2 , L2_R_R2_C3 , L2_R_R2_C4 , L2_R_R2_C5 ,
    L2_L_R3_C1 , L2_L_R3_C2 , L2_L_R3_C3 , L2_L_R3_C4 , L2_L_R3_C5 ,        L2_R_R3_C1 , L2_R_R3_C2 , L2_R_R3_C3 , L2_R_R3_C4 , L2_R_R3_C5 ,
    L2_L_R4_C1 , L2_L_R4_C2 , L2_L_R4_C3 , L2_L_R4_C4 , L2_L_R4_C5 , L2_L_R4_C6 ,  L2_R_R4_C1 , L2_R_R4_C2 , L2_R_R4_C3 , L2_R_R4_C4 , L2_R_R4_C5 , L2_R_R4_C6
  ),

  /* Layer 3 */
  [3] = LAYOUT_universal(
    L3_L_R1_C1 , L3_L_R1_C2 , L3_L_R1_C3 , L3_L_R1_C4 , L3_L_R1_C5 ,        L3_R_R1_C1 , L3_R_R1_C2 , L3_R_R1_C3 , L3_R_R1_C4 , L3_R_R1_C5 ,
    L3_L_R2_C1 , L3_L_R2_C2 , L3_L_R2_C3 , L3_L_R2_C4 , L3_L_R2_C5 ,        L3_R_R2_C1 , L3_R_R2_C2 , L3_R_R2_C3 , L3_R_R2_C4 , L3_R_R2_C5 ,
    L3_L_R3_C1 , L3_L_R3_C2 , L3_L_R3_C3 , L3_L_R3_C4 , L3_L_R3_C5 ,        L3_R_R3_C1 , L3_R_R3_C2 , L3_R_R3_C3 , L3_R_R3_C4 , L3_R_R3_C5 ,
    L3_L_R4_C1 , L3_L_R4_C2 , L3_L_R4_C3 , L3_L_R4_C4 , L3_L_R4_C5 , L3_L_R4_C6 ,  L3_R_R4_C1 , L3_R_R4_C2 , L3_R_R4_C3 , L3_R_R4_C4 , L3_R_R4_C5 , L3_R_R4_C6
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // L1(=数字/矢印)でスクロールモード自動ON
    keyball_set_scroll_mode(get_highest_layer(state) == 1);
    return state;
}

#ifdef OLED_ENABLE
void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif

#if defined(OS_DETECTION_ENABLE) && defined(DEFERRED_EXEC_ENABLE)
uint32_t os_detect_callback(uint32_t trigger_time, void *cb_arg) {
#if defined(MAGIC_KEYCODE_ENABLE) || defined(KEYBALL_KEEP_MAGIC_FUNCTIONS)
    keymap_config.raw = eeconfig_read_keymap();
#endif
    switch (detected_host_os()) {
    case OS_WINDOWS: {
        uint8_t mode = 0;
        keyball_set_scroll_reverse_mode(mode);
#if defined(MAGIC_KEYCODE_ENABLE) || defined(KEYBALL_KEEP_MAGIC_FUNCTIONS)
        keymap_config.swap_lalt_lgui = true;
        keymap_config.swap_ralt_rgui = false;
#endif
        break;
    }
    case OS_MACOS: {
        uint8_t mode = KEYBALL_SCROLLSNAP_MODE_VERTICAL | KEYBALL_SCROLLSNAP_MODE_HORIZONTAL;
        keyball_set_scroll_reverse_mode(mode);
#if defined(MAGIC_KEYCODE_ENABLE) || defined(KEYBALL_KEEP_MAGIC_FUNCTIONS)
        keymap_config.swap_lalt_lgui = false;
        keymap_config.swap_ralt_rgui = true;
#endif
        break;
    }
    default:
        break;
    }
#if defined(MAGIC_KEYCODE_ENABLE) || defined(KEYBALL_KEEP_MAGIC_FUNCTIONS)
    eeconfig_update_keymap(keymap_config.raw);
#endif
    return 0;
}
#endif

void keyboard_post_init_user(void) {
#if defined(OS_DETECTION_ENABLE) && defined(DEFERRED_EXEC_ENABLE)
    defer_exec(100, os_detect_callback, NULL);
#endif
}

/* 指定したキーのタップ判定時間（TAPPING_TERM）をキー別に上書きします。*/
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case L0_L_R2_C1:      return 300; //小指
        case L0_R_R2_C5:      return 300; //小指
    }
    return TAPPING_TERM;
}

/*タップ中に他のキーが押された瞬間に「即ホールド扱い」にする*/
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t* record) {
//    switch (keycode) {
//        case KC_SPC:
//        case LGUI_T(KC_A):
//            return true; // これらは「重なったら即ホールド」
//    }
    return false;
}

/* Flow Tap 設定（据え置き） */
bool is_flow_tap_key(keyrecord_t* record, uint16_t keycode) {
    switch (get_event_keycode(record->event, keycode)) {
        case KC_SPC:
        case KC_A ... KC_Z:
        case KC_DOT: case KC_COMM: case KC_SCLN: case KC_SLSH:
            return true;
    }
    return false;
}
uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t* record, uint16_t prev_keycode) {
    if (is_flow_tap_key(record, keycode) && is_flow_tap_key(record, prev_keycode)) {
        return FLOW_TAP_TERM;
    }
    return 0;
}

/* ===== Combo ===== */
/* 先に ACTION 関数のプロトタイプ */
static inline void ArrowR_send(void);
static inline void ArrowL_send(void);
static inline void Parentheses_send(void);
static inline void Brackets_send(void);
static inline void Curlybrackets_send(void);

#define SIMPLE_COMBOS(X) \
  X(TAB,         KC_TAB,            (L0_L_R1_C4, L0_L_R1_C5)) /* R+T */ \
  X(HOME,        KC_HOME,           (L0_R_R1_C1, L0_R_R1_C2)) /* Y+U */ \
  X(END,         KC_END,            (L0_R_R3_C1, L0_R_R3_C2)) /* LT2(N)+M */ \
  X(LMINS_SCLN,  KC_SCLN,           (L0_R_R2_C4, L0_R_R2_C5)) /* RALT(L)+RGUI(-) */ \
  X(KL_QUOT,     KC_QUOT,           (L0_R_R2_C3, L0_R_R2_C4)) /* RCTL(K)+RALT(L) */ \
  X(OP_DELWORD,  LCTL(KC_BSPC),     (L0_R_R1_C4, L0_R_R1_C5)) /* O+P */ \
  X(DOTSLSH_DEL, KC_DEL,            (L0_R_R3_C4, L0_R_R3_C5)) /* .+/ */ \
  X(WER_TOGG,    CW_TOGG,           (L0_L_R1_C2, L0_L_R1_C3, L0_L_R1_C4)) /* W,E,R */ \
  X(ZERO,        KC_0,              (L1_L_R2_C2, L1_L_R2_C3)) /* 4,5 */ \
  X(ZERO2,        KC_0,              (L1_L_R2_C3, L1_L_R2_C4)) /* 5,6 */ \

#define ACTION_COMBOS(X) \
  X(ARROWR,      ArrowR_send,         (L0_L_R1_C2, L0_L_R1_C3)) /* W+E */ \
  X(ARROWL,      ArrowL_send,         (L0_L_R1_C3, L0_L_R1_C4)) /* E+R */ \
  X(PARENTHESES, Parentheses_send,    (L0_L_R2_C2, L0_L_R2_C3)) /* Alt(S)+Ctl(D) */ \
  X(CURLYBRACKETS, Curlybrackets_send,(L0_L_R2_C2, L0_L_R2_C4)) /* Alt(S)+Sft(F) */ \
  X(BRACKETS,    Brackets_send,       (L0_L_R2_C3, L0_L_R2_C4)) /* Ctl(D)+Sft(F) */

/* 2) ヘルパと生成部 */
#define EXPAND_KEYS(...) __VA_ARGS__
#define MAKE_SEQ(name, out_or_func, pair) const uint16_t PROGMEM name##_seq[] = { EXPAND_KEYS pair, COMBO_END };
#define MAKE_ENUM(name, out_or_func, pair) name,
#define MAKE_COMBO(name, out, pair)   [name] = COMBO(name##_seq, out),
#define MAKE_ACTION(name, func, pair) [name] = COMBO_ACTION(name##_seq),
#define MAKE_CASE(name, func, pair) case name: func(); break;

SIMPLE_COMBOS(MAKE_SEQ)
ACTION_COMBOS(MAKE_SEQ)

enum { SIMPLE_COMBOS(MAKE_ENUM) ACTION_COMBOS(MAKE_ENUM) COMBO_LEN };

combo_t key_combos[COMBO_LEN] = {
  SIMPLE_COMBOS(MAKE_COMBO)
  ACTION_COMBOS(MAKE_ACTION)
};

/* 3) ACTION 本体 */
static inline void ArrowL_send(void) { tap_code(KC_MINUS); tap_code16(S(KC_DOT)); }
static inline void ArrowR_send(void) { tap_code16(S(KC_COMMA)); tap_code(KC_MINUS); }
static inline void Parentheses_send(void) { tap_code16(S(KC_8)); tap_code16(S(KC_9)); tap_code(KC_LEFT); }
static inline void Brackets_send(void) { tap_code(KC_RBRC); tap_code(KC_BSLS); tap_code(KC_LEFT); }
static inline void Curlybrackets_send(void) { tap_code16(S(KC_RBRC)); tap_code16(S(KC_BSLS)); tap_code(KC_LEFT); }

/* 4) ACTION ディスパッチ */
void process_combo_event(uint16_t idx, bool pressed) {
  if (!pressed) return;
  switch (idx) {
    ACTION_COMBOS(MAKE_CASE)
    default: break;
  }
}
