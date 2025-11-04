#ifndef KEY_MAP_H
#define KEY_MAP_H
#include "quantum.h"

/* =========================
 * Layer 0 (Base)
 * ========================= */
/* Left */
#define L0_L_R1_C1 LT(3, KC_Q)
#define L0_L_R1_C2 KC_W
#define L0_L_R1_C3 KC_E
#define L0_L_R1_C4 KC_R
#define L0_L_R1_C5 KC_T

#define L0_L_R2_C1 LGUI_T(KC_A)
#define L0_L_R2_C2 LALT_T(KC_S)
#define L0_L_R2_C3 LCTL_T(KC_D)
#define L0_L_R2_C4 LSFT_T(KC_F)
#define L0_L_R2_C5 LT(1, KC_G)

#define L0_L_R3_C1 KC_Z
#define L0_L_R3_C2 KC_X
#define L0_L_R3_C3 KC_C
#define L0_L_R3_C4 KC_V
#define L0_L_R3_C5 LT(2, KC_B)

#define L0_L_R4_C1 KC_TAB
#define L0_L_R4_C2 _______
#define L0_L_R4_C3 _______
#define L0_L_R4_C4 LT(1, KC_GRAVE)
#define L0_L_R4_C5 KC_SPC
#define L0_L_R4_C6 KC_BTN1

/* Right */
#define L0_R_R1_C1 KC_Y
#define L0_R_R1_C2 KC_U
#define L0_R_R1_C3 KC_I
#define L0_R_R1_C4 KC_O
#define L0_R_R1_C5 KC_P

#define L0_R_R2_C1 LT(1, KC_H)
#define L0_R_R2_C2 RSFT_T(KC_J)
#define L0_R_R2_C3 RCTL_T(KC_K)
#define L0_R_R2_C4 RALT_T(KC_L)
#define L0_R_R2_C5 RGUI_T(KC_MINS)

#define L0_R_R3_C1 LT(2, KC_N)
#define L0_R_R3_C2 KC_M
#define L0_R_R3_C3 KC_COMM
#define L0_R_R3_C4 KC_DOT
#define L0_R_R3_C5 KC_SLSH

#define L0_R_R4_C1 KC_BTN2
#define L0_R_R4_C2 LT(2, KC_ENT)
#define L0_R_R4_C3 _______
#define L0_R_R4_C4 _______
#define L0_R_R4_C5 _______
#define L0_R_R4_C6 KC_BSPC


/* =========================
 * Layer 1
 * ========================= */
/* Left */
#define L1_L_R1_C1 S(KC_1) /* ! */
#define L1_L_R1_C2 KC_7
#define L1_L_R1_C3 KC_8
#define L1_L_R1_C4 KC_9
#define L1_L_R1_C5 S(KC_SEMICOLON) /* + */

#define L1_L_R2_C1 S(KC_6) /* & */
#define L1_L_R2_C2 KC_4
#define L1_L_R2_C3 KC_5
#define L1_L_R2_C4 KC_6
#define L1_L_R2_C5 S(KC_QUOT) /* * */

#define L1_L_R3_C1 S(KC_INTERNATIONAL_3) /* | */
#define L1_L_R3_C2 KC_1
#define L1_L_R3_C3 KC_2
#define L1_L_R3_C4 KC_3
#define L1_L_R3_C5 S(KC_5) /* % */
#define L1_L_R4_C1 S(KC_3) /* # */
#define L1_L_R4_C2 S(KC_7) /* ' */
#define L1_L_R4_C3 S(KC_2) /* " */
#define L1_L_R4_C4 _______
#define L1_L_R4_C5 _______
#define L1_L_R4_C6 _______

/* Right */
#define L1_R_R1_C1 KC_HOME
#define L1_R_R1_C2 KC_END
#define L1_R_R1_C3 KC_UP
#define L1_R_R1_C4 _______
#define L1_R_R1_C5 KC_LEFT_BRACKET

#define L1_R_R2_C1 KC_PGUP
#define L1_R_R2_C2 KC_LEFT
#define L1_R_R2_C3 KC_DOWN
#define L1_R_R2_C4 KC_RGHT
#define L1_R_R2_C5 KC_QUOT

#define L1_R_R3_C1 KC_PGDN
#define L1_R_R3_C2 _______
#define L1_R_R3_C3 _______
#define L1_R_R3_C4 _______
#define L1_R_R3_C5 KC_INT1

#define L1_R_R4_C1 _______
#define L1_R_R4_C2 TO(0)
#define L1_R_R4_C3 _______
#define L1_R_R4_C4 _______
#define L1_R_R4_C5 _______
#define L1_R_R4_C6 _______


/* =========================
 * Layer 2
 * ========================= */
/* Left */
#define L2_L_R1_C1 KC_ESC
#define L2_L_R1_C2 KC_F7
#define L2_L_R1_C3 KC_F8
#define L2_L_R1_C4 KC_F9
#define L2_L_R1_C5 KC_F10

#define L2_L_R2_C1 KC_TAB
#define L2_L_R2_C2 KC_F4
#define L2_L_R2_C3 KC_F5
#define L2_L_R2_C4 KC_F6
#define L2_L_R2_C5 KC_F11

#define L2_L_R3_C1 S(KC_TAB)
#define L2_L_R3_C2 KC_F1
#define L2_L_R3_C3 KC_F2
#define L2_L_R3_C4 KC_F3
#define L2_L_R3_C5 KC_F12

#define L2_L_R4_C1 _______
#define L2_L_R4_C2 _______
#define L2_L_R4_C3 _______
#define L2_L_R4_C4 _______
#define L2_L_R4_C5 _______
#define L2_L_R4_C6 _______

/* Right */
#define L2_R_R1_C1 KC_BTN5
#define L2_R_R1_C2 _______
#define L2_R_R1_C3 KC_PGUP
#define L2_R_R1_C4 _______
#define L2_R_R1_C5 C(KC_KP_PLUS)

#define L2_R_R2_C1 KC_BTN4
#define L2_R_R2_C2 KC_BTN1
#define L2_R_R2_C3 KC_BTN3
#define L2_R_R2_C4 KC_BTN2
#define L2_R_R2_C5 C(KC_KP_MINUS)

#define L2_R_R3_C1 _______
#define L2_R_R3_C2 _______
#define L2_R_R3_C3 KC_PGDN
#define L2_R_R3_C4 _______
#define L2_R_R3_C5 _______

#define L2_R_R4_C1 _______
#define L2_R_R4_C2 _______
#define L2_R_R4_C3 _______
#define L2_R_R4_C4 _______
#define L2_R_R4_C5 _______
#define L2_R_R4_C6 _______

/* =========================
 * Layer 3
 * ========================= */
/* Left */
#define L3_L_R1_C1 KC_SYSTEM_POWER
#define L3_L_R1_C2 AML_TO
#define L3_L_R1_C3 AML_I50
#define L3_L_R1_C4 AML_D50
#define L3_L_R1_C5 QK_RBT

#define L3_L_R2_C1 _______
#define L3_L_R2_C2 _______
#define L3_L_R2_C3 _______
#define L3_L_R2_C4 _______
#define L3_L_R2_C5 SCRL_DVI

#define L3_L_R3_C1 _______
#define L3_L_R3_C2 _______
#define L3_L_R3_C3 _______
#define L3_L_R3_C4 _______
#define L3_L_R3_C5 SCRL_DVD

#define L3_L_R4_C1 QK_BOOT
#define L3_L_R4_C2 KBC_RST
#define L3_L_R4_C3 _______
#define L3_L_R4_C4 _______
#define L3_L_R4_C5 _______
#define L3_L_R4_C6 _______

/* Right */
#define L3_R_R1_C1 QK_KB_3
#define L3_R_R1_C2 QK_KB_4
#define L3_R_R1_C3 QK_KB_5
#define L3_R_R1_C4 QK_KB_6
#define L3_R_R1_C5 QK_KB_7

#define L3_R_R2_C1 QK_KB_10
#define L3_R_R2_C2 _______
#define L3_R_R2_C3 _______
#define L3_R_R2_C4 _______
#define L3_R_R2_C5 _______

#define L3_R_R3_C1 CPI_D1K
#define L3_R_R3_C2 CPI_D100
#define L3_R_R3_C3 CPI_I100
#define L3_R_R3_C4 CPI_I1K
#define L3_R_R3_C5 _______

#define L3_R_R4_C1 _______
#define L3_R_R4_C2 _______
#define L3_R_R4_C3 _______
#define L3_R_R4_C4 _______
#define L3_R_R4_C5 KBC_RST
#define L3_R_R4_C6 QK_BOOT

#endif
