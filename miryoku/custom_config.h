// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// One-handed left-hand config:
// - Base: left QWERTY kept (with existing home-row mods)
// - Mirror (U_MOUSE): right QWERTY mirrored onto the left hand
// - Rightmost thumb: hold = Mirror, tap = Space
// - Middle thumb: Delete (Backspace)
// - Left thumb: hold = Sym (nums / nav / hyphen), tap = Esc
// Sym is the only utility layer besides Mirror.

#pragma once

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY

// Helper macros for custom hold-taps in custom_config.dtsi
#define U_LT_HP(LAYER, TAP) &u_lt_hp20 LAYER TAP
#define U_LT_SYM_HP(LAYER, TAP) &u_lt_sym_hp35 LAYER TAP

#define HML(LAYER, TAP) &hml LAYER TAP
#define HMR(LAYER, TAP) &hmr LAYER TAP

// Rename Mouse display name to Mirror (same layer index)
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mirror") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9

// Base: left QWERTY unchanged; left thumbs remapped for one-handed use
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
HML(LGUI, A),      HML(LALT, S),      HML(LCTRL, D),     HML(LSHFT, F),     &kp G,             &kp H,             HMR(LSHFT, J),     HMR(LCTRL, K),     HMR(LALT, L),      HMR(LGUI, SQT),    \
U_LT_HP(U_BUTTON, Z), U_MT(RALT, X),  &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT_SYM_HP(U_SYM, ESC), &kp BSPC,      U_LT(U_MOUSE, SPACE), U_LT_SYM_HP(U_SYM, RET), U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), U_NP,              U_NP

// Mirror: right-hand QWERTY mirrored onto the left hand
//   P O I U Y
//   ' L K J H
//   / . , M N
#define MIRYOKU_LAYER_MOUSE \
&kp P,             &kp O,             &kp I,             &kp U,             &kp Y,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_MT(LGUI, SQT),   U_MT(LALT, L),     U_MT(LCTRL, K),    U_MT(LSHFT, J),    &kp H,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp SLASH,         U_MT(RALT, DOT),   &kp COMMA,         &kp M,             &kp N,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              U_NA,              &kp BSPC,          U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Sym: numbers, arrows, hyphen (left hand only)
//   1 2 3 4 5
//   ← ↓ ↑ → -
//   6 7 8 9 0
#define MIRYOKU_LAYER_SYM \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,            U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              U_NA,              &kp BSPC,          U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#if __has_include("custom_config.dtsi")
  #include "custom_config.dtsi"
#endif
