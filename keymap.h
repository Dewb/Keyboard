#ifndef KEYMAP_H
#define KEYMAP_H

#include <keylayouts.h>

#define MODIFIERKEY_FN 0x8f

#define MATRIX_ROWS 7

#define MATRIX_COLS 8

int normal[MATRIX_ROWS][MATRIX_COLS] = {
	{ 0, KEY_A, KEY_B, KEY_C, KEY_D, KEY_E, KEY_F, KEY_G },
	{ KEY_H, KEY_I, KEY_J, KEY_K, KEY_L, KEY_M, KEY_N, KEY_O },
	{ KEY_P, KEY_Q, KEY_R, KEY_S, KEY_T, KEY_U, KEY_V, KEY_W },
	{ KEY_X, KEY_Y, KEY_Z, KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT, KEY_SPACE },
	{ KEY_0, KEY_1, KEY_2, KEY_3, KEY_4, KEY_5, KEY_6, KEY_7 },
	{ KEY_8, KEY_9, KEY_EQUAL, KEY_SEMICOLON, KEY_COMMA, KEY_MINUS, KEY_PERIOD, KEY_SLASH },
	{ KEY_ENTER, KEY_ESC, KEY_BACKSPACE, 0, 0, 0, 0, 0 }
};

int modifier[MATRIX_ROWS][MATRIX_COLS] = {
	{ MODIFIERKEY_FN, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, MODIFIERKEY_LEFT_SHIFT }
};

int fn_keys[MATRIX_ROWS][MATRIX_COLS] = {
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, KEY_LEFT_BRACE, KEY_RIGHT_BRACE, 0 },
	{ KEY_F10, KEY_F1, KEY_F2, KEY_F3, KEY_F4, KEY_F5, KEY_F6, KEY_F7 },
	{ KEY_F8, KEY_F9, KEY_F10, KEY_TILDE, 0, KEY_F11, 0, 0 },
	{ 0, 0, KEY_TAB, 0, 0, 0, 0, 0 }
};

int Row_IO[MATRIX_ROWS] = { 1, 2, 4, 5, 6, 7, 8 };

int Col_IO[MATRIX_COLS] = { 9, 10, 11, 12, 3, 14, 15, 16 };

#endif
