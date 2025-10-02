/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    LT(3, KC_Q)   , KC_W            , KC_E            , KC_R              , KC_T,                             KC_Y              , KC_U              , KC_I           , KC_O           , KC_P,
    LGUI_T(KC_A)  , LALT_T(KC_S)    , LCTL_T(KC_D)    , LSFT_T(KC_F)      , LT(1, KC_G),                      LT(1, KC_H)       , RSFT_T(KC_J)      , RCTL_T(KC_K)   , RALT_T(KC_L)   , RGUI_T(KC_MINS),
    KC_Z          , KC_X            , KC_C            , KC_V              , LT(2, KC_B),                      LT(2, KC_N)       , KC_M              , KC_COMM        , KC_DOT         , KC_SLSH,
    KC_TAB        , _______         , _______         , LT(1, KC_GRAVE)   , KC_SPC,        KC_BTN1 ,  KC_BTN2 , LT(2, KC_ENT)   , _______           , _______        , _______        , KC_BSPC
  ),

  [1] = LAYOUT_universal(
    KC_ESC       , KC_7         , KC_8      , KC_9            , KC_MINS          ,                            KC_RIGHT_BRACKET , KC_HOME         , KC_UP    , KC_PGUP  , KC_LEFT_BRACKET  ,
    KC_TAB       , KC_4         , KC_5      , KC_6            , S(KC_SEMICOLON)  ,                            KC_NONUS_HASH    , KC_LEFT         , KC_DOWN  , KC_RGHT  , KC_QUOT  ,
    S(KC_TAB)    , KC_1         , KC_2      , KC_3            , S(KC_EQUAL)      ,                            _______          , KC_END          , _______  , KC_PGDN  , KC_INT1  ,
    KC_LCTL      , KC_0         , KC_DOT    , _______         , _______          , _______        , _______ , TO(0)            , _______         , _______  , _______  , KC_RSFT 
  ), 

  [2] = LAYOUT_universal(
    KC_ESC       , KC_F1        , KC_F2     , KC_F3           , KC_F4            ,                            KC_BTN5          , _______         , KC_PGUP  , _______  , C(KC_KP_PLUS)   ,
    KC_TAB       , KC_F5        , KC_F6     , KC_F7           , KC_F8            ,                            KC_BTN4          , KC_BTN1         , KC_BTN3  , KC_BTN2  , _______         ,
    S(KC_TAB)    , KC_F9        , KC_F10    , KC_F11          , KC_F12           ,                            _______          , _______         , KC_PGDN  , _______  , C(KC_KP_MINUS)  ,
    KC_LCTL      , KC_LGUI      , S(KC_3)   , _______         , _______          , _______        , KC_DEL  , TO(0)            , _______         , KC_RALT  , KC_RGUI  , KC_RSFT
  ),

  [3] = LAYOUT_universal(
    KC_SYSTEM_POWER , AML_TO    , AML_I50   , AML_D50         , QK_RBT           ,                            QK_KB_3          , QK_KB_4         , QK_KB_5  , QK_KB_6  , QK_KB_7 ,
    _______         , _______   , _______   , _______         , SCRL_DVI         ,                            QK_KB_10         , _______         , _______  , _______  , _______ ,
    _______         , _______   , _______   , _______         , SCRL_DVD         ,                            CPI_D1K          , CPI_D100        , CPI_I100 , CPI_I1K  , _______ ,
    QK_BOOT         , KBC_RST   , _______   , _______         , _______          , _______        , _______ , _______          , _______         , _______  , KBC_RST  , QK_BOOT
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 1
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

//os auto layer change
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

// A) しきい（上限）の個別調整
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case LT(0, KC_SPC):     // 親指スペース=レイヤータップ
        case LCTL_T(KC_A):         // ホーム行Mod-Tapの例
            return 250;
    }
    return TAPPING_TERM;
}

// B) 「重なったら即ホールド」の適用対象を限定
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case LT(0, KC_SPC):
        case LCTL_T(KC_A):
            return true;           // このキーは重なり→即ホールド
    }
    return false;                  // それ以外はデフォルト
}

// C) Flow Tap の適用範囲（デフォルト準拠：アルファ/スペース）
bool is_flow_tap_key(keyrecord_t* record, uint16_t keycode) {
    switch (get_event_keycode(record->event, keycode)) {
        case KC_SPC:
        case KC_A ... KC_Z:
        case KC_DOT: case KC_COMM: case KC_SCLN: case KC_SLSH:
            return true;
    }
    return false;
}

// D) Flow Tap の時間（必要ならキー別に変える）
uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t* record, uint16_t prev_keycode) {
    if (is_flow_tap_key(record, keycode) && is_flow_tap_key(record, prev_keycode)) {
        return FLOW_TAP_TERM;  // 例：150ms
    }
    return 0;  // 0でFlow Tap無効（この条件では使わない）
}

// 先に ACTION 関数のプロトタイプだけ宣言しておく（本体は後で定義）
static inline void ArrowR_send(void);
static inline void ArrowL_send(void);
static inline void Parentheses_send(void);
static inline void Brackets_send(void);

// 1) 呼び方はそのまま：X(識別子, 出力 or 関数, (キー, キー[, キー]))
//    ※キー列を「( … )」で1引数として渡す前提のままにします。
#define SIMPLE_COMBOS(X) \
  X(RT_TAB,         KC_TAB,            (KC_R, KC_T)) \
  X(RT_BACKTAB,     S(KC_TAB),         (S(KC_R), S(KC_T))) \
  X(RT_CTRLTAB,     C(KC_TAB),         (C(KC_R), C(KC_T))) \
  X(YU_HOME,        KC_HOME,           (KC_Y, KC_U)) \
  X(NM_END,         KC_END,            (LT(2, KC_N), KC_M)) \
  X(LMINS_SCLN,     KC_SCLN,           (RALT_T(KC_L), RGUI_T(KC_MINS))) \
  X(KL_QUOT,        KC_QUOT,           (RCTL_T(KC_K) , RALT_T(KC_L))) \
  X(OP_DELWORD,     LCTL(KC_BSPC),     (KC_O, KC_P)) \
  X(DOTSLSH_DEL,    KC_DEL,            (KC_DOT, KC_SLSH)) \
  X(WER_TOGG,       CW_TOGG,           (KC_W, KC_E, KC_R))

  #define ACTION_COMBOS(X) \
  X(WE_ARROWR,      ArrowR_send,       (KC_W, KC_E)) \
  X(ER_ARROWL,      ArrowL_send,       (KC_E, KC_R)) \
  X(SD_PARENTHESES, Parentheses_send,  (LALT_T(KC_S), LCTL_T(KC_D))) \
  X(SD_CURLYBRACKETS, Curlybrackets_send,  (LALT_T(KC_S), LSFT_T(KC_F))) \
  X(DF_BRACKETS,    Brackets_send,     (LCTL_T(KC_D), LSFT_T(KC_F)))

// 2) ここから下は生成部。キー列を 1 引数で受けて“中で展開”する。
//    (KC_A, KC_B) → KC_A, KC_B にするヘルパ
#define EXPAND_KEYS(...) __VA_ARGS__

// シーケンス配列生成
#define MAKE_SEQ(name, out_or_func, pair) \
  const uint16_t PROGMEM name##_seq[] = { EXPAND_KEYS pair, COMBO_END };

// enum（インデックス）
#define MAKE_ENUM(name, out_or_func, pair) name,

// コンボ配列
#define MAKE_COMBO(name, out, pair)   [name] = COMBO(name##_seq, out),
#define MAKE_ACTION(name, func, pair) [name] = COMBO_ACTION(name##_seq),

// ACTION の switch 用
#define MAKE_CASE(name, func, pair) case name: func(); break;

// ---- 展開 ----
SIMPLE_COMBOS(MAKE_SEQ)
ACTION_COMBOS(MAKE_SEQ)

enum { SIMPLE_COMBOS(MAKE_ENUM) ACTION_COMBOS(MAKE_ENUM) COMBO_LEN };

combo_t key_combos[COMBO_LEN] = {
  SIMPLE_COMBOS(MAKE_COMBO)
  ACTION_COMBOS(MAKE_ACTION)
};

// 3) ACTION 本体（tap_code/SEND_STRING の“構成”は変えません）
static inline void ArrowR_send(void) { tap_code(KC_MINUS);tap_code16(S(KC_DOT)); }
static inline void ArrowL_send(void) { tap_code16(S(KC_COMMA));tap_code(KC_MINUS); }
static inline void Parentheses_send(void) { tap_code16(S(KC_8));tap_code16(S(KC_9));tap_code(KC_LEFT); }
static inline void Brackets_send(void) { tap_code(KC_RBRC);tap_code(KC_BSLS); tap_code(KC_LEFT); }
static inline void Curlybrackets_send(void) { tap_code16(S(KC_RBRC));tap_code16(S(KC_BSLS));tap_code(KC_LEFT); }

// 4) ACTION ディスパッチ（押下時だけ発火）
void process_combo_event(uint16_t idx, bool pressed) {
  if (!pressed) return;
  switch (idx) {
    ACTION_COMBOS(MAKE_CASE)
    default: break;
  }
}