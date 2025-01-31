/*!
	@file NOKIA5110_TEXT_FONT_DATA.cpp
	@brief Font data file , 9 fonts
	@author Gavin Lyons
	@details Project Name NOKIA5110_TEXT URL:https://github.com/gavinlyonsrepo/NOKIA5110_TEXT
*/

#include  "NOKIA5110_TEXT_FONT_DATA.h"

#ifdef NOKIA5110_FONT_Default

/*!
 ASCII font file : DEFAULT 5 by 8 
 Define the ASCII table as Data array
 cols left to right 0x00 is  off 0xFF is all on
 Each character is five bytes wide one byte height. 
 so ! is 0 0 5F 0 0 , Also in code adds two blank lines on either side so in effect 0 0 0 5f 0 0 0 
 Each character is in a 7 by 8 pixel box 
*/

 const PROGMEM unsigned char FontDefault[94][5] = {
    {0x00, 0x00, 0x00, 0x00, 0x00}, // 20
    {0x00, 0x00, 0x5f, 0x00, 0x00}, // 21 ! 
    {0x00, 0x07, 0x00, 0x07, 0x00}, // 22 ?
    {0x14, 0x7f, 0x14, 0x7f, 0x14}, // 23 #
    {0x24, 0x2a, 0x7f, 0x2a, 0x12}, // 24 $
    {0x23, 0x13, 0x08, 0x64, 0x62}, // 25 %
    {0x36, 0x49, 0x55, 0x22, 0x50}, // 26 &
    {0x00, 0x05, 0x03, 0x00, 0x00}, // 27 ?
    {0x00, 0x1c, 0x22, 0x41, 0x00}, // 28 (
    {0x00, 0x41, 0x22, 0x1c, 0x00}, // 29 )
    {0x14, 0x08, 0x3e, 0x08, 0x14}, // 2a *
    {0x08, 0x08, 0x3e, 0x08, 0x08}, // 2b +
    {0x00, 0x50, 0x30, 0x00, 0x00}, // 2c ,
    {0x08, 0x08, 0x08, 0x08, 0x08}, // 2d ?
    {0x00, 0x60, 0x60, 0x00, 0x00}, // 2e .
    {0x20, 0x10, 0x08, 0x04, 0x02}, // 2f /
    {0x3e, 0x51, 0x49, 0x45, 0x3e}, // 30 0
    {0x00, 0x42, 0x7f, 0x40, 0x00}, // 31 1
    {0x42, 0x61, 0x51, 0x49, 0x46}, // 32 2
    {0x21, 0x41, 0x45, 0x4b, 0x31}, // 33 3
    {0x18, 0x14, 0x12, 0x7f, 0x10}, // 34 4
    {0x27, 0x45, 0x45, 0x45, 0x39}, // 35 5
    {0x3c, 0x4a, 0x49, 0x49, 0x30}, // 36 6
    {0x01, 0x71, 0x09, 0x05, 0x03}, // 37 7
    {0x36, 0x49, 0x49, 0x49, 0x36}, // 38 8
    {0x06, 0x49, 0x49, 0x29, 0x1e}, // 39 9
    {0x00, 0x36, 0x36, 0x00, 0x00}, // 3a :
    {0x00, 0x56, 0x36, 0x00, 0x00}, // 3b ;
    {0x08, 0x14, 0x22, 0x41, 0x00}, // 3c <
    {0x14, 0x14, 0x14, 0x14, 0x14}, // 3d =
    {0x00, 0x41, 0x22, 0x14, 0x08}, // 3e >
    {0x02, 0x01, 0x51, 0x09, 0x06}, // 3f ?
    {0x32, 0x49, 0x79, 0x41, 0x3e}, // 40 @
    {0x7e, 0x11, 0x11, 0x11, 0x7e}, // 41 A
    {0x7f, 0x49, 0x49, 0x49, 0x36}, // 42 B
    {0x3e, 0x41, 0x41, 0x41, 0x22}, // 43 C
    {0x7f, 0x41, 0x41, 0x22, 0x1c}, // 44 D
    {0x7f, 0x49, 0x49, 0x49, 0x41}, // 45 E
    {0x7f, 0x09, 0x09, 0x09, 0x01}, // 46 F
    {0x3e, 0x41, 0x49, 0x49, 0x7a}, // 47 G
    {0x7f, 0x08, 0x08, 0x08, 0x7f}, // 48 H
    {0x00, 0x41, 0x7f, 0x41, 0x00}, // 49 I
    {0x20, 0x40, 0x41, 0x3f, 0x01}, // 4a J
    {0x7f, 0x08, 0x14, 0x22, 0x41}, // 4b K
    {0x7f, 0x40, 0x40, 0x40, 0x40}, // 4c L
    {0x7f, 0x02, 0x0c, 0x02, 0x7f}, // 4d M
    {0x7f, 0x04, 0x08, 0x10, 0x7f}, // 4e N
    {0x3e, 0x41, 0x41, 0x41, 0x3e}, // 4f O
    {0x7f, 0x09, 0x09, 0x09, 0x06}, // 50 P
    {0x3e, 0x41, 0x51, 0x21, 0x5e}, // 51 Q
    {0x7f, 0x09, 0x19, 0x29, 0x46}, // 52 R
    {0x46, 0x49, 0x49, 0x49, 0x31}, // 53 S
    {0x01, 0x01, 0x7f, 0x01, 0x01}, // 54 T
    {0x3f, 0x40, 0x40, 0x40, 0x3f}, // 55 U
    {0x1f, 0x20, 0x40, 0x20, 0x1f}, // 56 V
    {0x3f, 0x40, 0x38, 0x40, 0x3f}, // 57 W
    {0x63, 0x14, 0x08, 0x14, 0x63}, // 58 X
    {0x07, 0x08, 0x70, 0x08, 0x07}, // 59 Y
    {0x61, 0x51, 0x49, 0x45, 0x43}, // 5a Z
    {0x00, 0x7f, 0x41, 0x41, 0x00}, // 5b [
    {0x02, 0x04, 0x08, 0x10, 0x20}, // 5c forward slash
    {0x00, 0x41, 0x41, 0x7f, 0x00}, // 5d ]
    {0x04, 0x02, 0x01, 0x02, 0x04}, // 5e ^
    {0x40, 0x40, 0x40, 0x40, 0x40}, // 5f _
    {0x00, 0x01, 0x02, 0x04, 0x00}, // 60 `
    {0x20, 0x54, 0x54, 0x54, 0x78}, // 61 a
    {0x7f, 0x48, 0x44, 0x44, 0x38}, // 62 b
    {0x38, 0x44, 0x44, 0x44, 0x20}, // 63 c
    {0x38, 0x44, 0x44, 0x48, 0x7f}, // 64 d
    {0x38, 0x54, 0x54, 0x54, 0x18}, // 65 e
    {0x08, 0x7e, 0x09, 0x01, 0x02}, // 66 f
    {0x0c, 0x52, 0x52, 0x52, 0x3e}, // 67 g
    {0x7f, 0x08, 0x04, 0x04, 0x78}, // 68 h
    {0x00, 0x44, 0x7d, 0x40, 0x00}, // 69 i
    {0x20, 0x40, 0x44, 0x3d, 0x00}, // 6a j
    {0x7f, 0x10, 0x28, 0x44, 0x00}, // 6b k
    {0x00, 0x41, 0x7f, 0x40, 0x00}, // 6c l
    {0x7c, 0x04, 0x18, 0x04, 0x78}, // 6d m
    {0x7c, 0x08, 0x04, 0x04, 0x78}, // 6e n
    {0x38, 0x44, 0x44, 0x44, 0x38}, // 6f o
    {0x7c, 0x14, 0x14, 0x14, 0x08}, // 70 p
    {0x08, 0x14, 0x14, 0x18, 0x7c}, // 71 q
    {0x7c, 0x08, 0x04, 0x04, 0x08}, // 72 r
    {0x48, 0x54, 0x54, 0x54, 0x20}, // 73 s
    {0x04, 0x3f, 0x44, 0x40, 0x20}, // 74 t
    {0x3c, 0x40, 0x40, 0x20, 0x7c}, // 75 u
    {0x1c, 0x20, 0x40, 0x20, 0x1c}, // 76 v
    {0x3c, 0x40, 0x30, 0x40, 0x3c}, // 77 w
    {0x44, 0x28, 0x10, 0x28, 0x44}, // 78 x
    {0x0c, 0x50, 0x50, 0x50, 0x3c}, // 79 y
    {0x44, 0x64, 0x54, 0x4c, 0x44}, // 7a z
    {0x00, 0x08, 0x36, 0x41, 0x00}, // 7b {
    {0x00, 0x00, 0x7f, 0x00, 0x00}, // 7c |
    {0x00, 0x41, 0x36, 0x08, 0x00}, // 7d },
};

const unsigned char (* pFontDefaultPtr)[5] = FontDefault;

#endif

#ifdef NOKIA5110_FONT_Thick
/*!
 ASCII font file : Thick Font 7 by 8 
 Define the ASCII table as Data array
 cols left to right 0x00 is  off 0xFF is all on
 Each character is 7 bytes wide one byte height. 
 so ! is 0x5f,0x5f,0x00,0x00,0x00,0x00,0x00,0x00 , 
 Also the code adds two blank lines on LHS and RHS side 
 Each character is in a 9 by 8 bit pixel box.
*/
 const PROGMEM  unsigned char FontThick[59][7] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //  
    {0x5f, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00}, // !
    {0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x00}, // "
    {0x14, 0x7f, 0x7f, 0x14, 0x7f, 0x7f, 0x14}, // #
    {0x6f, 0x6f, 0x6b, 0xeb, 0x6b, 0x7b, 0x7b}, // $
    {0x63, 0x73, 0x38, 0x1c, 0x0e, 0x67, 0x63}, // %
    {0x7f, 0x7f, 0x6b, 0x63, 0x68, 0x78, 0x78}, // &
    {0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00}, // '
    {0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00}, // (
    {0x80, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00}, // )
    {0x36, 0x08, 0x7f, 0x7f, 0x7f, 0x08, 0x36}, // *
    {0x08, 0x08, 0x3e, 0x08, 0x08, 0x00, 0x00}, // +
    {0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00}, // ,
    {0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00}, // -
    {0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00}, // .
    {0x70, 0x1c, 0x07, 0x00, 0x00, 0x00, 0x00}, // /
    {0x7f, 0x7f, 0x63, 0x63, 0x63, 0x7f, 0x7f}, // 0
    {0x60, 0x66, 0x66, 0x7f, 0x7f, 0x60, 0x60}, // 1
    {0x7b, 0x7b, 0x6b, 0x6b, 0x6b, 0x6f, 0x6f}, // 2
    {0x63, 0x63, 0x6b, 0x6b, 0x6b, 0x7f, 0x7f}, // 3
    {0x1f, 0x1f, 0x18, 0x18, 0x18, 0x7e, 0x7e}, // 4
    {0x6f, 0x6f, 0x6b, 0x6b, 0x6b, 0x7b, 0x7b}, // 5
    {0x7f, 0x7f, 0x6c, 0x6c, 0x6c, 0x7c, 0x7c}, // 6
    {0x43, 0x63, 0x73, 0x3b, 0x1f, 0x0f, 0x07}, // 7
    {0x7f, 0x7f, 0x6b, 0x6b, 0x6b, 0x7f, 0x7f}, // 8
    {0x1f, 0x1f, 0x1b, 0x1b, 0x1b, 0x7f, 0x7f}, // 9
    {0x6c, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00}, // :
    {0xec, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00}, // ;
    {0x08, 0x14, 0x22, 0x22, 0x00, 0x00, 0x00}, // <
    {0x14, 0x14, 0x14, 0x14, 0x14, 0x00, 0x00}, // =
    {0x22, 0x22, 0x14, 0x08, 0x00, 0x00, 0x00}, // >
    {0x03, 0x03, 0x5b, 0x5b, 0x0b, 0x0f, 0x0f}, // ?
    {0x7f, 0x7f, 0x63, 0x6f, 0x6b, 0x6f, 0x6f}, // @
    {0x7f, 0x7f, 0x1b, 0x1b, 0x1b, 0x7f, 0x7f}, // A
    {0x7f, 0x7f, 0x6b, 0x6b, 0x6f, 0x7e, 0x7c}, // B
    {0x7f, 0x7f, 0x63, 0x63, 0x63, 0x63, 0x63}, // C
    {0x7f, 0x7f, 0x63, 0x63, 0x67, 0x7e, 0x7c}, // D
    {0x7f, 0x7f, 0x6b, 0x6b, 0x6b, 0x6b, 0x6b}, // E
    {0x7f, 0x7f, 0x0b, 0x0b, 0x0b, 0x03, 0x03}, // F
    {0x7f, 0x7f, 0x63, 0x63, 0x6b, 0x7b, 0x7b}, // G
    {0x7f, 0x7f, 0x18, 0x18, 0x18, 0x7f, 0x7f}, // H
    {0x63, 0x63, 0x7f, 0x7f, 0x63, 0x63, 0x63}, // I
    {0x60, 0x60, 0x60, 0x60, 0x60, 0x7f, 0x3f}, // J
    {0x7f, 0x7f, 0x18, 0x18, 0x1e, 0x7f, 0x79}, // K
    {0x7f, 0x7f, 0x60, 0x60, 0x60, 0x60, 0x60}, // L
    {0x7f, 0x7f, 0x03, 0x06, 0x03, 0x7f, 0x7f}, // M
    {0x7f, 0x7f, 0x0e, 0x1c, 0x38, 0x7f, 0x7f}, // N
    {0x7f, 0x7f, 0x63, 0x63, 0x63, 0x7f, 0x7f}, // O
    {0x7f, 0x7f, 0x1b, 0x1b, 0x1b, 0x1f, 0x1f}, // P
    {0x7f, 0x7f, 0x63, 0xf3, 0xf3, 0x7f, 0x7f}, // Q
    {0x7f, 0x7f, 0x1b, 0x3b, 0x7b, 0x7f, 0x5f}, // R
    {0x6f, 0x6f, 0x6b, 0x6b, 0x6b, 0x7b, 0x7b}, // S
    {0x03, 0x03, 0x7f, 0x7f, 0x03, 0x03, 0x03}, // T
    {0x7f, 0x7f, 0x60, 0x60, 0x60, 0x7f, 0x7f}, // U
    {0x1f, 0x3f, 0x70, 0x60, 0x70, 0x3f, 0x1f}, // V
    {0x3f, 0x7f, 0x60, 0x30, 0x60, 0x7f, 0x3f}, // W
    {0x77, 0x7f, 0x1c, 0x08, 0x1c, 0x7f, 0x77}, // X
    {0x07, 0x0f, 0x7c, 0x78, 0x7c, 0x0f, 0x07}, // Y
    {0x73, 0x7b, 0x6b, 0x6b, 0x6b, 0x6f, 0x67}, // Z
};
const unsigned char (* pFontThickPtr)[7]  = FontThick;
#endif

#ifdef NOKIA5110_FONT_HomeSpun
/*!
 ASCII font file : Homespun FONT 7 by 8 
 added v2.3 
*/
 const PROGMEM  unsigned char FontHomeSpun[95][7] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //  
    {0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00}, // !
    {0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00}, // "
    {0x14, 0x7f, 0x14, 0x7f, 0x14, 0x00, 0x00}, // #
    {0x6f, 0x49, 0xc9, 0x7b, 0x00, 0x00, 0x00}, // $
    {0x63, 0x13, 0x08, 0x64, 0x63, 0x00, 0x00}, // %
    {0x7f, 0xc9, 0x49, 0x63, 0x00, 0x00, 0x00}, // &
    {0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00}, // '
    {0x3e, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00}, // (
    {0x41, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00}, // )
    {0x0a, 0x04, 0x1f, 0x04, 0x0a, 0x00, 0x00}, // *
    {0x08, 0x08, 0x3e, 0x08, 0x08, 0x00, 0x00}, // +
    {0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00}, // ,
    {0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00}, // -
    {0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00}, // .
    {0x60, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00}, // /
    {0x7f, 0x41, 0x41, 0x7f, 0x00, 0x00, 0x00}, // 0
    {0x01, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00}, // 1
    {0x7b, 0x49, 0x49, 0x6f, 0x00, 0x00, 0x00}, // 2
    {0x63, 0x49, 0x49, 0x7f, 0x00, 0x00, 0x00}, // 3
    {0x0f, 0x08, 0x08, 0x7f, 0x00, 0x00, 0x00}, // 4
    {0x6f, 0x49, 0x49, 0x7b, 0x00, 0x00, 0x00}, // 5
    {0x7f, 0x49, 0x49, 0x7b, 0x00, 0x00, 0x00}, // 6
    {0x03, 0x01, 0x01, 0x7f, 0x00, 0x00, 0x00}, // 7
    {0x7f, 0x49, 0x49, 0x7f, 0x00, 0x00, 0x00}, // 8
    {0x0f, 0x09, 0x09, 0x7f, 0x00, 0x00, 0x00}, // 9
    {0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00}, // :
    {0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, 0x00}, // ;
    {0x08, 0x14, 0x22, 0x00, 0x00, 0x00, 0x00}, // <
    {0x14, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00}, // =
    {0x22, 0x14, 0x08, 0x00, 0x00, 0x00, 0x00}, // >
    {0x03, 0x59, 0x09, 0x0f, 0x00, 0x00, 0x00}, // ?
    {0x7f, 0x41, 0x5d, 0x55, 0x5f, 0x00, 0x00}, // @
    {0x7f, 0x09, 0x09, 0x7f, 0x00, 0x00, 0x00}, // A
    {0x7f, 0x49, 0x49, 0x77, 0x00, 0x00, 0x00}, // B
    {0x7f, 0x41, 0x41, 0x63, 0x00, 0x00, 0x00}, // C
    {0x7f, 0x41, 0x41, 0x3e, 0x00, 0x00, 0x00}, // D
    {0x7f, 0x49, 0x49, 0x63, 0x00, 0x00, 0x00}, // E
    {0x7f, 0x09, 0x09, 0x03, 0x00, 0x00, 0x00}, // F
    {0x7f, 0x41, 0x49, 0x7b, 0x00, 0x00, 0x00}, // G
    {0x7f, 0x08, 0x08, 0x7f, 0x00, 0x00, 0x00}, // H
    {0x41, 0x7f, 0x41, 0x00, 0x00, 0x00, 0x00}, // I
    {0x60, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00}, // J
    {0x7f, 0x08, 0x08, 0x77, 0x00, 0x00, 0x00}, // K
    {0x7f, 0x40, 0x40, 0x60, 0x00, 0x00, 0x00}, // L
    {0x7f, 0x01, 0x01, 0x7f, 0x01, 0x01, 0x7f}, // M
    {0x7f, 0x01, 0x01, 0x7f, 0x00, 0x00, 0x00}, // N
    {0x7f, 0x41, 0x41, 0x7f, 0x00, 0x00, 0x00}, // O
    {0x7f, 0x09, 0x09, 0x0f, 0x00, 0x00, 0x00}, // P
    {0x7f, 0x41, 0xc1, 0x7f, 0x00, 0x00, 0x00}, // Q
    {0x7f, 0x09, 0x09, 0x77, 0x00, 0x00, 0x00}, // R
    {0x6f, 0x49, 0x49, 0x7b, 0x00, 0x00, 0x00}, // S
    {0x01, 0x01, 0x7f, 0x01, 0x01, 0x00, 0x00}, // T
    {0x7f, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00}, // U
    {0x7f, 0x20, 0x10, 0x0f, 0x00, 0x00, 0x00}, // V
    {0x7f, 0x40, 0x40, 0x7f, 0x40, 0x40, 0x7f}, // W
    {0x77, 0x08, 0x08, 0x77, 0x00, 0x00, 0x00}, // X
    {0x6f, 0x48, 0x48, 0x7f, 0x00, 0x00, 0x00}, // Y
    {0x71, 0x49, 0x49, 0x47, 0x00, 0x00, 0x00}, // Z
    {0x7f, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00}, // [
    {0x03, 0x04, 0x08, 0x10, 0x60, 0x00, 0x00}, // "\"
    {0x41, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00}, // ]
    {0x04, 0x02, 0x01, 0x02, 0x04, 0x00, 0x00}, // ^
    {0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00}, // _
    {0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // `
    {0x74, 0x54, 0x54, 0x7c, 0x00, 0x00, 0x00}, // a
    {0x7f, 0x44, 0x44, 0x7c, 0x00, 0x00, 0x00}, // b
    {0x7c, 0x44, 0x44, 0x6c, 0x00, 0x00, 0x00}, // c
    {0x7c, 0x44, 0x44, 0x7f, 0x00, 0x00, 0x00}, // d
    {0x7c, 0x54, 0x54, 0x5c, 0x00, 0x00, 0x00}, // e
    {0x7f, 0x05, 0x05, 0x01, 0x00, 0x00, 0x00}, // f
    {0xbc, 0xa4, 0xa4, 0xfc, 0x00, 0x00, 0x00}, // g
    {0x7f, 0x04, 0x04, 0x7c, 0x00, 0x00, 0x00}, // h
    {0x7d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // i
    {0x80, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x00}, // j
    {0x7f, 0x04, 0x04, 0x7a, 0x00, 0x00, 0x00}, // k
    {0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // l
    {0x7c, 0x04, 0x04, 0x7c, 0x04, 0x04, 0x7c}, // m
    {0x7c, 0x04, 0x04, 0x7c, 0x00, 0x00, 0x00}, // n
    {0x7c, 0x44, 0x44, 0x7c, 0x00, 0x00, 0x00}, // o
    {0xfc, 0x44, 0x44, 0x7c, 0x00, 0x00, 0x00}, // p
    {0x7c, 0x44, 0x44, 0xfc, 0x00, 0x00, 0x00}, // q
    {0x7c, 0x04, 0x04, 0x0c, 0x00, 0x00, 0x00}, // r
    {0x5c, 0x54, 0x54, 0x74, 0x00, 0x00, 0x00}, // s
    {0x7f, 0x44, 0x44, 0x60, 0x00, 0x00, 0x00}, // t
    {0x7c, 0x40, 0x40, 0x7c, 0x00, 0x00, 0x00}, // u
    {0x7c, 0x20, 0x10, 0x0c, 0x00, 0x00, 0x00}, // v
    {0x7c, 0x40, 0x40, 0x7c, 0x40, 0x40, 0x7c}, // w
    {0x6c, 0x10, 0x10, 0x6c, 0x00, 0x00, 0x00}, // x
    {0xbc, 0xa0, 0xa0, 0xfc, 0x00, 0x00, 0x00}, // y
    {0x64, 0x54, 0x54, 0x4c, 0x00, 0x00, 0x00}, // z
    {0x08, 0x3e, 0x41, 0x00, 0x00, 0x00, 0x00}, // {
    {0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // |
    {0x41, 0x3e, 0x08, 0x00, 0x00, 0x00, 0x00}, // }
    {0x1c, 0x04, 0x1c, 0x10, 0x1c, 0x00, 0x00} // ~
};
const unsigned char (* pFontHomeSpunPtr)[7] = FontHomeSpun;

#endif //end of homespun font

#ifdef NOKIA5110_FONT_SevenSeg
/*!
 ASCII font file : Seven Segment 4 by 8 
 Define the ASCII table as Data array
 cols left to right 0x00 is  off 0xFF is all on
 Each character is five bytes wide one byte height. 
 so ! is 0x36 0 0  0 0 , Also in code adds two blank lines on either side so in effect 0 36 0 0 0 0 0 
 Each character is in a 6 by 8 pixel box 
*/
 const PROGMEM  unsigned char FontSevenSegment[92][4] = {
    {0x00, 0x00, 0x00, 0x00}, //  
    {0x36, 0x00, 0x00, 0x00}, // !
    {0x06, 0x00, 0x00, 0x06}, // "
    {0x36, 0x49, 0x49, 0x36}, // #
    {0x06, 0x49, 0x49, 0x30}, // $
    {0x36, 0x49, 0x49, 0x36}, // %
    {0x36, 0x49, 0x49, 0x36}, // &
    {0x06, 0x00, 0x00, 0x00}, // '
    {0x36, 0x41, 0x41, 0x00}, // (
    {0x41, 0x41, 0x36, 0x00}, // )
    {0x06, 0x09, 0x09, 0x06}, // *
    {0x36, 0x08, 0x08, 0x00}, // +
    {0x30, 0x00, 0x00, 0x00}, // ,
    {0x08, 0x08, 0x00, 0x00}, // -
    {0x30, 0x00, 0x00, 0x00}, // .
    {0x30, 0x08, 0x08, 0x06}, // /
    {0x36, 0x41, 0x41, 0x36}, // 0
    {0x36, 0x00, 0x00, 0x00}, // 1
    {0x30, 0x49, 0x49, 0x06}, // 2
    {0x49, 0x49, 0x36, 0x00}, // 3
    {0x06, 0x08, 0x08, 0x36}, // 4
    {0x06, 0x49, 0x49, 0x30}, // 5
    {0x36, 0x49, 0x49, 0x30}, // 6
    {0x01, 0x01, 0x36, 0x00}, // 7
    {0x36, 0x49, 0x49, 0x36}, // 8
    {0x06, 0x49, 0x49, 0x36}, // 9
    {0x36, 0x00, 0x00, 0x00}, // :
    {0x36, 0x00, 0x00, 0x00}, // ;
    {0x36, 0x41, 0x41, 0x00}, // <
    {0x48, 0x48, 0x00, 0x00}, // =
    {0x41, 0x41, 0x36, 0x00}, // >
    {0x30, 0x09, 0x09, 0x06}, // ?
    {0x36, 0x49, 0x49, 0x36}, // @
    {0x36, 0x09, 0x09, 0x36}, // A
    {0x36, 0x49, 0x49, 0x36}, // B
    {0x36, 0x41, 0x41, 0x00}, // C
    {0x30, 0x48, 0x48, 0x36}, // D
    {0x36, 0x49, 0x49, 0x00}, // E
    {0x36, 0x09, 0x09, 0x00}, // F
    {0x36, 0x49, 0x49, 0x30}, // G
    {0x36, 0x08, 0x08, 0x36}, // H
    {0x36, 0x00, 0x00, 0x00}, // I
    {0x40, 0x40, 0x36, 0x00}, // J
    {0x36, 0x08, 0x08, 0x36}, // K
    {0x36, 0x40, 0x40, 0x00}, // L
    {0x36, 0x01, 0x01, 0x36}, // M
    {0x36, 0x01, 0x01, 0x36}, // N
    {0x36, 0x41, 0x41, 0x36}, // O
    {0x36, 0x09, 0x09, 0x06}, // P
    {0x06, 0x09, 0x09, 0x36}, // Q
    {0x36, 0x01, 0x01, 0x00}, // R
    {0x06, 0x49, 0x49, 0x30}, // S
    {0x36, 0x48, 0x48, 0x00}, // T
    {0x36, 0x40, 0x40, 0x36}, // U
    {0x36, 0x40, 0x40, 0x36}, // V
    {0x36, 0x40, 0x40, 0x36}, // W
    {0x36, 0x08, 0x08, 0x36}, // X
    {0x06, 0x08, 0x08, 0x36}, // Y
    {0x30, 0x49, 0x49, 0x06}, // Z
    {0x36, 0x41, 0x41, 0x00}, // [
    {0x06, 0x08, 0x08, 0x30}, // "\"
    {0x41, 0x41, 0x36, 0x00}, // ]
    {0x06, 0x01, 0x01, 0x06}, // ^
    {0x40, 0x40, 0x00, 0x00}, // _
    {0x06, 0x00, 0x00, 0x00}, // `
    {0x30, 0x49, 0x49, 0x36}, // a
    {0x36, 0x48, 0x48, 0x30}, // b
    {0x36, 0x41, 0x41, 0x00}, // c
    {0x30, 0x48, 0x48, 0x36}, // d
    {0x36, 0x49, 0x49, 0x00}, // e
    {0x36, 0x09, 0x09, 0x00}, // f
    {0x06, 0x49, 0x49, 0x36}, // g
    {0x36, 0x08, 0x08, 0x30}, // h
    {0x36, 0x00, 0x00, 0x00}, // i
    {0x40, 0x40, 0x36, 0x00}, // j
    {0x36, 0x08, 0x08, 0x36}, // k
    {0x36, 0x00, 0x00, 0x00}, // l
    {0x36, 0x01, 0x01, 0x36}, // m
    {0x36, 0x01, 0x01, 0x36}, // n
    {0x36, 0x41, 0x41, 0x36}, // o
    {0x36, 0x09, 0x09, 0x06}, // p
    {0x06, 0x09, 0x09, 0x36}, // q
    {0x36, 0x01, 0x01, 0x00}, // r
    {0x06, 0x49, 0x49, 0x30}, // s
    {0x36, 0x48, 0x48, 0x00}, // t
    {0x36, 0x40, 0x40, 0x36}, // u
    {0x36, 0x40, 0x40, 0x36}, // v
    {0x36, 0x40, 0x40, 0x36}, // w
    {0x36, 0x08, 0x08, 0x36}, // x
    {0x06, 0x48, 0x48, 0x36}, // y
    {0x30, 0x49, 0x49, 0x06}, // z
};

const unsigned char (* pFontSevenSegPtr)[4]= FontSevenSegment;
#endif //end of seven segment font

#ifdef NOKIA5110_FONT_Wide

/*!
 ASCII font file : Number five Wide font 8 by 8 
 Define the ASCII table as Data array
 cols left to right 0x00 is  off 0xFF is all on 
 Each character is in a 10 by 8 bit pixel box 
*/
 const PROGMEM  unsigned char FontWide[59][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //  
    {0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x00}, // !
    {0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00}, // "
    {0x0a, 0x1f, 0x0a, 0x1f, 0x0a, 0x00, 0x00, 0x00}, // #
    {0x24, 0x2a, 0x2a, 0x7f, 0x2a, 0x2a, 0x12, 0x00}, // $
    {0x00, 0x47, 0x25, 0x17, 0x08, 0x74, 0x52, 0x71}, // %
    {0x00, 0x36, 0x49, 0x49, 0x49, 0x41, 0x41, 0x38}, // &
    {0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // '
    {0x00, 0x3e, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00}, // (
    {0x41, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // )
    {0x04, 0x15, 0x0e, 0x15, 0x04, 0x00, 0x00, 0x00}, // *
    {0x08, 0x08, 0x3e, 0x08, 0x08, 0x00, 0x00, 0x00}, // +
    {0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00}, // ,
    {0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00}, // -
    {0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // .
    {0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00}, // /
    {0x00, 0x3e, 0x61, 0x51, 0x49, 0x45, 0x43, 0x3e}, // 0
    {0x00, 0x00, 0x01, 0x01, 0x7e, 0x00, 0x00, 0x00}, // 1
    {0x00, 0x71, 0x49, 0x49, 0x49, 0x49, 0x49, 0x46}, // 2
    {0x41, 0x49, 0x49, 0x49, 0x49, 0x49, 0x36, 0x00}, // 3
    {0x00, 0x0f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7f}, // 4
    {0x00, 0x4f, 0x49, 0x49, 0x49, 0x49, 0x49, 0x31}, // 5
    {0x00, 0x3e, 0x49, 0x49, 0x49, 0x49, 0x49, 0x30}, // 6
    {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x7e, 0x00}, // 7
    {0x00, 0x36, 0x49, 0x49, 0x49, 0x49, 0x49, 0x36}, // 8
    {0x00, 0x06, 0x49, 0x49, 0x49, 0x49, 0x49, 0x3e}, // 9
    {0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00}, // :
    {0x00, 0x34, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00}, // ;
    {0x08, 0x14, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00}, // <
    {0x14, 0x14, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00}, // =
    {0x22, 0x14, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00}, // >
    {0x00, 0x06, 0x01, 0x01, 0x59, 0x09, 0x09, 0x06}, // ?
    {0x00, 0x3e, 0x41, 0x5d, 0x55, 0x5d, 0x51, 0x5e}, // @
    {0x00, 0x7e, 0x01, 0x09, 0x09, 0x09, 0x09, 0x7e}, // A
    {0x00, 0x7f, 0x41, 0x49, 0x49, 0x49, 0x49, 0x36}, // B
    {0x00, 0x3e, 0x41, 0x41, 0x41, 0x41, 0x41, 0x22}, // C
    {0x00, 0x7f, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3e}, // D
    {0x00, 0x3e, 0x49, 0x49, 0x49, 0x49, 0x49, 0x41}, // E
    {0x00, 0x7e, 0x09, 0x09, 0x09, 0x09, 0x09, 0x01}, // F
    {0x00, 0x3e, 0x41, 0x49, 0x49, 0x49, 0x49, 0x79}, // G
    {0x00, 0x7f, 0x08, 0x08, 0x08, 0x08, 0x08, 0x7f}, // H
    {0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00}, // I
    {0x00, 0x38, 0x40, 0x40, 0x41, 0x41, 0x41, 0x3f}, // J
    {0x00, 0x7f, 0x08, 0x08, 0x08, 0x0c, 0x0a, 0x71}, // K
    {0x00, 0x3f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}, // L
    {0x00, 0x7e, 0x01, 0x01, 0x7e, 0x01, 0x01, 0x7e}, // M
    {0x00, 0x7e, 0x01, 0x01, 0x3e, 0x40, 0x40, 0x3f}, // N
    {0x00, 0x3e, 0x41, 0x41, 0x41, 0x41, 0x41, 0x3e}, // O
    {0x00, 0x7e, 0x09, 0x09, 0x09, 0x09, 0x09, 0x06}, // P
    {0x00, 0x3e, 0x41, 0x41, 0x71, 0x51, 0x51, 0x7e}, // Q
    {0x00, 0x7e, 0x01, 0x31, 0x49, 0x49, 0x49, 0x46}, // R
    {0x00, 0x46, 0x49, 0x49, 0x49, 0x49, 0x49, 0x31}, // S
    {0x01, 0x01, 0x01, 0x7f, 0x01, 0x01, 0x01, 0x00}, // T
    {0x00, 0x3f, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3f}, // U
    {0x00, 0x0f, 0x10, 0x20, 0x40, 0x20, 0x10, 0x0f}, // V
    {0x00, 0x3f, 0x40, 0x40, 0x3f, 0x40, 0x40, 0x3f}, // W
    {0x00, 0x63, 0x14, 0x08, 0x08, 0x08, 0x14, 0x63}, // X
    {0x00, 0x07, 0x08, 0x08, 0x78, 0x08, 0x08, 0x07}, // Y
    {0x00, 0x71, 0x49, 0x49, 0x49, 0x49, 0x49, 0x47}, // Z
};

const unsigned char (* pFontWidePtr)[8] = FontWide;

#endif //end of wide

#ifdef NOKIA5110_FONT_Tiny
/*!
 ASCII font file : tiny 3 by 8 
 Define the ASCII table as Data array
 cols left to right, 0x00 is off, 0xFF is all on
 Each character is 3 bytes wide one byte height. 
 Each character is in a 5 by 8 pixel box ( two blanks bytes on either side added in code)
*/
 const PROGMEM  unsigned char FontTiny[95][3] = {
    {0x00, 0x00, 0x00}, //  
    {0x00, 0x2e, 0x00}, // !
    {0x06, 0x00, 0x06}, // "
    {0x3e, 0x14, 0x3e}, // #
    {0x0c, 0x36, 0x18}, // $
    {0x32, 0x08, 0x26}, // %
    {0x14, 0x2a, 0x34}, // &
    {0x00, 0x06, 0x00}, // '
    {0x00, 0x1c, 0x22}, // (
    {0x22, 0x1c, 0x00}, // )
    {0x14, 0x08, 0x14}, // *
    {0x08, 0x1c, 0x08}, // +
    {0x40, 0x60, 0x00}, // ,
    {0x08, 0x08, 0x08}, // -
    {0x00, 0x20, 0x00}, // .
    {0x60, 0x1c, 0x02}, // /
    {0x3e, 0x22, 0x3e}, // 0
    {0x24, 0x3e, 0x20}, // 1
    {0x32, 0x2a, 0x26}, // 2
    {0x22, 0x2a, 0x3e}, // 3
    {0x0e, 0x08, 0x3e}, // 4
    {0x2e, 0x2a, 0x3a}, // 5
    {0x3e, 0x2a, 0x3a}, // 6
    {0x02, 0x3a, 0x06}, // 7
    {0x3e, 0x2a, 0x3e}, // 8
    {0x2e, 0x2a, 0x3e}, // 9
    {0x00, 0x14, 0x00}, // :
    {0x40, 0x64, 0x00}, // ;
    {0x08, 0x14, 0x22}, // <
    {0x14, 0x14, 0x14}, // =
    {0x22, 0x14, 0x08}, // >
    {0x02, 0x2a, 0x06}, // ?
    {0x3e, 0x22, 0x2e}, // @
    {0x3e, 0x0a, 0x3e}, // A
    {0x3e, 0x2a, 0x36}, // B
    {0x3e, 0x22, 0x22}, // C
    {0x3e, 0x22, 0x1c}, // D
    {0x3e, 0x2a, 0x22}, // E
    {0x3e, 0x0a, 0x02}, // F
    {0x3e, 0x22, 0x3a}, // G
    {0x3e, 0x08, 0x3e}, // H
    {0x22, 0x3e, 0x22}, // I
    {0x30, 0x20, 0x3e}, // J
    {0x3e, 0x08, 0x36}, // K
    {0x3e, 0x20, 0x20}, // L
    {0x3e, 0x04, 0x3e}, // M
    {0x3c, 0x08, 0x1e}, // N
    {0x3e, 0x22, 0x3e}, // O
    {0x3e, 0x0a, 0x0e}, // P
    {0x3e, 0x22, 0x7e}, // Q
    {0x3e, 0x0a, 0x34}, // R
    {0x2e, 0x2a, 0x3a}, // S
    {0x02, 0x3e, 0x02}, // T
    {0x3e, 0x20, 0x3e}, // U
    {0x1e, 0x20, 0x1e}, // V
    {0x3e, 0x10, 0x3e}, // W
    {0x36, 0x08, 0x36}, // X
    {0x06, 0x38, 0x06}, // Y
    {0x32, 0x2a, 0x26}, // Z
    {0x00, 0x3e, 0x22}, // [
    {0x02, 0x1c, 0x60}, // "\"
    {0x22, 0x3e, 0x00}, // ]
    {0x04, 0x02, 0x04}, // ^
    {0x40, 0x40, 0x40}, // _
    {0x00, 0x02, 0x00}, // `
    {0x3e, 0x0a, 0x3e}, // a
    {0x3e, 0x2a, 0x36}, // b
    {0x3e, 0x22, 0x22}, // c
    {0x3e, 0x22, 0x1c}, // d
    {0x3e, 0x2a, 0x22}, // e
    {0x3e, 0x0a, 0x02}, // f
    {0x3e, 0x22, 0x3a}, // g
    {0x3e, 0x08, 0x3e}, // h
    {0x22, 0x3e, 0x22}, // i
    {0x30, 0x20, 0x3e}, // j
    {0x3e, 0x08, 0x36}, // k
    {0x3e, 0x20, 0x20}, // l
    {0x3e, 0x04, 0x3e}, // m
    {0x3c, 0x08, 0x1e}, // n
    {0x3e, 0x22, 0x3e}, // o
    {0x3e, 0x0a, 0x0e}, // p
    {0x3e, 0x22, 0x7e}, // q
    {0x3e, 0x0a, 0x34}, // r
    {0x2e, 0x2a, 0x3a}, // s
    {0x02, 0x3e, 0x02}, // t
    {0x3e, 0x20, 0x3e}, // u
    {0x1e, 0x20, 0x1e}, // v
    {0x3e, 0x10, 0x3e}, // w
    {0x36, 0x08, 0x36}, // x
    {0x06, 0x38, 0x06}, // y
    {0x32, 0x2a, 0x26}, // z
    {0x08, 0x3e, 0x22}, // {
    {0x00, 0x7e, 0x00}, // |
    {0x22, 0x3e, 0x08}, // }
    {0x02, 0x06, 0x04} // ~
};
const  unsigned char (* pFontTinyPtr)[3]  = FontTiny;
#endif //end of tiny

#ifdef NOKIA5110_FONT_Large
/*!
 ASCII font file : "large" 12 by 16 
 Define the ASCII table as Data array
 cols left to right, 0x00 is off, 0xFF is all on
 Each character is 12 bits wide, two byte height.
 NO LOWERCASE LETTERS
*/
 const PROGMEM  uint16_t FontLarge[59][12] = {
    {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}, //
    {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x39FE, 0x39FE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}, // !
    {0x0000, 0x0000, 0x0000, 0x00FC, 0x00FC, 0x0000, 0x0000, 0x00FC, 0x00FC, 0x0000, 0x0000, 0x0000}, // "
    {0x0000, 0x0000, 0x0810, 0x0810, 0x7FFE, 0x0810, 0x0810, 0x7FFE, 0x0810, 0x0810, 0x0000, 0x0000}, // #
    {0x0000, 0x0000, 0x0000, 0x3070, 0x18D8, 0x3FFE, 0x1B0C, 0x0618, 0x0030, 0x0000, 0x0000, 0x0000}, // $
    {0x0000, 0x3000, 0x1800, 0x0C3E, 0x0622, 0x033E, 0x0180, 0x00C0, 0x3E60, 0x2230, 0x3E18, 0x0000}, // %
    {0X0000, 0x007f, 0x007f, 0x006b, 0x0063, 0x0068, 0x0078, 0x0078, 0x0000, 0x0000, 0x0000, 0X0000}, // &
    {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x003F, 0x003F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}, // '
    {0x0000, 0x0000, 0x1FFC, 0x3FFE, 0x2002, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}, // (
    {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2002, 0x3FFE, 0x1FFC, 0x0000, 0x0000}, // )
    {0x0000, 0x18C6, 0x0CCC, 0x06D8, 0x03F0, 0x7FFE, 0x7FFE, 0x03F0, 0x06D8, 0x0CCC, 0x18C6, 0x0000}, // *
    {0x0000, 0x0380, 0x0380, 0x0380, 0x7FFE, 0x7FFE, 0x7FFE, 0x0380, 0x0380, 0x0380, 0x0000, 0x0000}, // +
    {0x0000, 0x0000, 0x0000, 0x4000, 0x6000, 0x7E00, 0x7F00, 0x0380, 0x0000, 0x0000, 0x0000, 0x0000}, // ,
    {0x0000, 0x03C0, 0x03C0, 0x03C0, 0x03C0, 0x03C0, 0x03C0, 0x03C0, 0x03C0, 0x03C0, 0x03C0, 0x0000}, // -
    {0x0000, 0x0000, 0x0000, 0x7F00, 0x7F00, 0x7F00, 0x7F00, 0x7F00, 0x0000, 0x0000, 0x0000, 0x0000}, // .
    {0x0000, 0x7000, 0x3800, 0x1C00, 0x0E00, 0x0700, 0x0380, 0x01C0, 0x00E0, 0x0070, 0x0038, 0x0000}, // /
    {0x0000, 0x0000, 0x3FFF, 0x3FFF, 0x3103, 0x3083, 0x3043, 0x3023, 0x3FFF, 0x3FFF, 0x0000, 0x0000}, // 0
    {0x0000, 0x0000, 0x000C, 0x000C, 0x3006, 0x3006, 0x3FFF, 0x3FFF, 0x3FFF, 0x3000, 0x3000, 0x0000}, // 1
    {0x0000, 0x0000, 0x0000, 0x3FC3, 0x3FC3, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x30FF, 0x30FF, 0x0000}, // 2
    {0x0000, 0x0000, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x3FFF, 0x3FFF, 0x0000, 0x0000}, // 3
    {0x0000, 0x0000, 0x00FF, 0x00FF, 0x00C0, 0x00C0, 0x00C0, 0x00C0, 0x3FFF, 0x3FFF, 0x0000, 0x0000}, // 4
    {0x0000, 0x0000, 0x30FF, 0x30FF, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x3FC3, 0x3FC3, 0x0000, 0x0000}, // 5
    {0x0000, 0x0000, 0x3FFF, 0x3FFF, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x3FC3, 0x3FC3, 0x0000, 0x0000}, // 6
    {0x0000, 0x0000, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x3FFF, 0x3FFF, 0x0000, 0x0000}, // 7
    {0x0000, 0x0000, 0x3FFF, 0x3FFF, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x3FFF, 0x3FFF, 0x0000, 0x0000}, // 8
    {0x0000, 0x0000, 0x30FF, 0x30FF, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x3FFF, 0x3FFF, 0x0000, 0x0000}, // 9
    {0x0000, 0x0000, 0x0000, 0x0000, 0x3E3E, 0x3E3E, 0x3E3E, 0x3E3E, 0x0000, 0x0000, 0x0000, 0x0000}, // :
    {0x0000, 0x0000, 0x0000, 0x3000, 0x1E3E, 0x0E3E, 0x063E, 0x023E, 0x0000, 0x0000, 0x0000, 0x0000}, // ;
    {0x0180, 0x0660, 0x0C30, 0x1818, 0x300C, 0x6006, 0x4002, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}, // <
    {0x0000, 0x0198, 0x0198, 0x0198, 0x0198, 0x0198, 0x0198, 0x0198, 0x0198, 0x0198, 0x0198, 0x0000}, // =
    {0x0000, 0x0000, 0x0000, 0x0000, 0x6006, 0x6006, 0x300C, 0x1818, 0x0C30, 0x0660, 0x0180, 0x0000}, // >
    {0x0000, 0x0018, 0x0018, 0x000C, 0x0006, 0x6706, 0x6706, 0x07FE, 0x00FE, 0x0000, 0x0000, 0x0000}, // ?
    {0x0000, 0x1F00, 0x3FF0, 0x307C, 0x27CE, 0x26C6, 0x06C6, 0x06C6, 0x0606, 0x07FE, 0x07FE, 0x0000}, // @
    {0x0000, 0x3FFE, 0x3FFF, 0x3FFF, 0x01C3, 0x01C3, 0x01C3, 0x01C3, 0x3FFF, 0x3FFF, 0x3FFE, 0x0000}, // A
    {0x0000, 0x2002, 0x3003, 0x3003, 0x3FFF, 0x3FFF, 0x30C3, 0x30C3, 0x3FFF, 0x3FFF, 0x3FFE, 0x0000}, // B
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x3807, 0x3807, 0x3807, 0x3807, 0x3807, 0x3003, 0x0000, 0x0000}, // C
    {0x0000, 0x1806, 0x3807, 0x3807, 0x3FFF, 0x3FFF, 0x3807, 0x3807, 0x3FFF, 0x3FFF, 0x3FFF, 0x0000}, // D
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x38C7, 0x38C7, 0x38C7, 0x38C7, 0x3807, 0x3003, 0x0000, 0x0000}, // E
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x01C7, 0x00C7, 0x00C7, 0x00C7, 0x0047, 0x0003, 0x0000, 0x0000}, // F
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x3807, 0x3807, 0x3987, 0x3987, 0x3987, 0x3F87, 0x1F03, 0x0000}, // G
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x00E0, 0x00E0, 0x00E0, 0x00E0, 0x3FFF, 0x3FFF, 0x1FFE, 0x0000}, // H
    {0x0000, 0x1806, 0x3807, 0x3807, 0x3807, 0x3FFF, 0x3FFF, 0x3807, 0x3807, 0x3807, 0x1806, 0x0000}, // I
    {0x0000, 0x1FC0, 0x3FC0, 0x3C00, 0x3800, 0x3800, 0x3800, 0x3800, 0x3FFF, 0x3FFF, 0x1FFE, 0x0000}, // J
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x01C0, 0x01C0, 0x01E0, 0x0330, 0x0618, 0x0C0C, 0x1806, 0x0000}, // K
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x3C00, 0x3800, 0x3800, 0x3800, 0x3800, 0x3800, 0x3800, 0x3000}, // L
    {0x0000, 0x1FFE, 0x3FFF, 0x1FFF, 0x000E, 0x0078, 0x0078, 0x000E, 0x1FFF, 0x3FFF, 0x1FFE, 0x0000}, // M
    {0x0000, 0x1FFE, 0x3FFF, 0x1FFF, 0x003E, 0x00F0, 0x03C0, 0x0780, 0x1FFF, 0x3FFF, 0x1FFE, 0x0000}, // N
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x3C0F, 0x3807, 0x3807, 0x3C0F, 0x3FFF, 0x3FFF, 0x1FFE, 0x0000}, // O
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x01C7, 0x00C7, 0x00C7, 0x00C7, 0x00FF, 0x00FF, 0x00FE, 0x0000}, // P
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x3C0F, 0x3987, 0x3B07, 0x3E0F, 0x3FFF, 0x3FFF, 0x1FFE, 0x0000}, // Q
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x03C7, 0x06C7, 0x0CC7, 0x18C7, 0x30FF, 0x007E, 0x0000, 0x0000}, // R
    {0x0000, 0x187E, 0x38FF, 0x38FF, 0x38C7, 0x38C7, 0x38C7, 0x3FC7, 0x3FC7, 0x1FC6, 0x0000, 0x0000}, // S
    {0x0000, 0x0003, 0x0007, 0x0007, 0x0007, 0x1FFF, 0x1FFF, 0x0007, 0x0007, 0x0007, 0x0003, 0x0000}, // T
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x3C00, 0x3800, 0x3800, 0x3C00, 0x3FFF, 0x3FFF, 0x1FFE, 0x0000}, // U
    {0x0000, 0x000F, 0x003F, 0x01FC, 0x03C0, 0x1E00, 0x1E00, 0x0FC0, 0x01FC, 0x003F, 0x000F, 0x0000}, // V
    {0x0000, 0x1FFE, 0x3FFF, 0x3FFF, 0x1E00, 0x07C0, 0x07C0, 0x1E00, 0x3FFF, 0x3FFF, 0x1FFE, 0x0000}, // W
    {0x0000, 0x0E07, 0x070E, 0x039C, 0x01F8, 0x01F0, 0x01F0, 0x01DC, 0x038E, 0x0707, 0x0E03, 0x0000}, // X
    {0x0000, 0x007E, 0x20FF, 0x30FF, 0x30E0, 0x30C0, 0x30C0, 0x30E0, 0x3FFE, 0x3FFF, 0x1FFE, 0x0000}, // Y
    {0x0000, 0x1C06, 0x3E07, 0x3F07, 0x3B87, 0x39C7, 0x38E7, 0x3877, 0x383F, 0x381F, 0x180E, 0x0000} // Z
};

const  uint16_t (* pFontLargePtr)[12] = FontLarge;

#endif

#ifdef NOKIA5110_FONT_Huge
/*!
 ASCII font file : huge  16 by 24 
 Define the ASCII table as Data array
 cols left to right, 0x00 is off, 0xFF is all on
 Each character is 16 bits wide,  3 byte height. 
Numbers + . : only. type / for a space 
*/
 const PROGMEM  uint32_t FontHuge[13][16] = {
    {0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x1FC000, 0x3FE000, 0x3FE000, 0x3FE000, 0x3FE000, 0x3FE000, 0x1FC000, 0x000000, 0x000000, 0x000000, 0x000000}, // .
    {0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000}, // /
    {0x000000, 0x3FFFFC, 0x7FFFFE, 0x7FFFFE, 0x7FFFFE, 0x7FFFFE, 0x7C003E, 0x7C003E, 0x7C003E, 0x7C003E, 0x7FFFFE, 0x7FFFFE, 0x7FFFFE, 0x7FFFFE, 0x3FFFFC, 0x000000}, // 0
    {0x000000, 0x000060, 0x300070, 0x380078, 0x3C007C, 0x3C001E, 0x3C000E, 0x3FFFFE, 0x3FFFFE, 0x3FFFFE, 0x3FFFFE, 0x3FFFFC, 0x3C0000, 0x3C0000, 0x380000, 0x000000}, // 1
    {0x000000, 0x3FF81C, 0x7FFC1E, 0x7FFC1E, 0x783C1E, 0x783C1E, 0x783C1E, 0x783C1E, 0x783C1E, 0x783C1E, 0x783C3E, 0x781FFE, 0x781FFE, 0x381FFC, 0x000000, 0x000000}, // 2
    {0x000000, 0x30000C, 0x78181E, 0x783C1E, 0x783C1E, 0x783C1E, 0x783C1E, 0x783C1E, 0x783C1E, 0x783C1E, 0x7FFC3E, 0x7FFFFE, 0x7FFFFE, 0x3FFFFC, 0x000000, 0x000000}, // 3
    {0x000000, 0x001FFC, 0x003FFE, 0x003FFE, 0x003FFC, 0x003C00, 0x003C00, 0x003C00, 0x003C00, 0x003C00, 0x3FFFFE, 0x7FFFFE, 0x7FFFFE, 0x3FFFFC, 0x000000, 0x000000}, // 4
    {0x000000, 0x380FFC, 0x7C1FFE, 0x7C1FFE, 0x7C1FFE, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7FFE1E, 0x7FFE1E, 0x7FFE1E, 0x3FFC1C, 0x000000, 0x000000}, // 5
    {0x000000, 0x3FFFFC, 0x7FFFFE, 0x7FFFFE, 0x7FFFFE, 0x7E3E1E, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7FFE1E, 0x7FFE1E, 0x7FFE1E, 0x3FFC1C, 0x000000, 0x000000}, // 6
    {0x000000, 0x00001C, 0x00001E, 0x00001E, 0x00001E, 0x00001E, 0x000C1E, 0x001E1E, 0x001E1E, 0x001E1E, 0x3FFFFE, 0x7FFFFE, 0x7FFFFE, 0x3FFFFC, 0x000000, 0x000000}, // 7
    {0x000000, 0x3FFFFC, 0x7FFFFE, 0x7FFFFE, 0x7FFFFE, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7FFFFE, 0x7FFFFE, 0x7FFFFE, 0x3FFFFC, 0x000000, 0x000000}, // 8
    {0x000000, 0x300FFC, 0x7C1FFE, 0x7C1FFE, 0x7C1FFE, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7C1E1E, 0x7FFFFE, 0x7FFFFE, 0x7FFFFE, 0x3FFFFC, 0x000000, 0x000000}, // 9
    {0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x1F81F8, 0x3FC3FC, 0x3FC3FC, 0x3FC3FC, 0x3FC3FC, 0x3FC3FC, 0x1F81F8, 0x000000, 0x000000, 0x000000, 0x000000} // :
};
const  uint32_t (* pFontHugePtr)[16] = FontHuge;
#endif


#ifdef NOKIA5110_FONT_Mega
/*!
 ASCII font file : Mega 16 by 32 
 Define the ASCII table as Data array
 cols left to right, 0x00 is off, 0xFF is all on
 Each character is 16 bits wide 4 byte height. 
 Numbers only + : . /
*/
const PROGMEM  uint32_t FontMega[13][16] = {
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x1FC00000, 0x3FE00000, 0x3FE00000, 0x3FE00000, 0x3FE00000, 0x3FE00000, 0x1FC00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000}, // .
    {0x00000000, 0x00000000, 0x00000000, 0x1E000000, 0x07800000, 0x01E00000, 0x00780000, 0x001E0000, 0x00078000, 0x0001E000, 0x00007800, 0x00001E00, 0x00000780, 0x000001E0, 0x00000078, 0x00000000}, // / 
    {0x00000000, 0x3FFFFFF8, 0x7FFFFFFC, 0x7FFFFFFC, 0x7FFFFFFC, 0x7E0000FC, 0x7C00007C, 0x7C00007C, 0x7C00007C, 0x7C00007C, 0x7E0000FC, 0x7FFFFFFC, 0x7FFFFFFC, 0x7FFFFFFC, 0x3FFFFFF8, 0x00000000}, // 0
    {0x00000000, 0x00000000, 0x40000000, 0x600000C0, 0x70000060, 0x70000070, 0x70000038, 0x7FFFFFF8, 0x7FFFFFFC, 0x7FFFFFFC, 0x7FFFFFFC, 0x7FFFFFF8, 0x60000000, 0x40000000, 0x00000000, 0x00000000}, // 1
    {0x00000000, 0x3FFF8038, 0x7FFFC07C, 0x7FFFC07C, 0x7FFFC07C, 0x7FFFC07C, 0x7C0FC07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07E0FC, 0x7C07FFFC, 0x7C07FFFC, 0x7C07FFFC, 0x3803FFF8, 0x00000000}, // 2
    {0x00000000, 0x38038038, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7E0FE0FC, 0x7FFFFFFC, 0x7FFFFFFC, 0x7FFFFFFC, 0x3FFFFFF8, 0x00000000}, // 3
    {0x00000000, 0x0003FFF0, 0x0007FFF8, 0x0007FFF8, 0x0007FFF0, 0x0007C000, 0x0007C000, 0x0007C000, 0x0007C000, 0x0007C000, 0x000FE000, 0x3FFFFFF8, 0x7FFFFFFC, 0x7FFFFFFC, 0x3FFFFFF8, 0x00000000}, // 4
    {0x00000000, 0x3803FFF8, 0x7C07FFFC, 0x7C07FFFC, 0x7C07FFFC, 0x7C07E0FC, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7E0FC07C, 0x7FFFC07C, 0x7FFFC07C, 0x7FFFC07C, 0x3FFF8038, 0x00000000}, // 5
    {0x00000000, 0x3FFFFFF8, 0x7FFFFFFC, 0x7FFFFFFC, 0x7FFFFFFC, 0x7FFFE0FC, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7E0FC07C, 0x7FFFC07C, 0x7FFFC07C, 0x7FFFC07C, 0x3FFF8038, 0x00000000}, // 6
    {0x00000000, 0x00000000, 0x00000038, 0x0000007C, 0x0000007C, 0x0000007C, 0x0000607C, 0x0000F07C, 0x0000F07C, 0x0000F07C, 0x0000F07C, 0x3FFFFFFC, 0x7FFFFFFC, 0x7FFFFFFC, 0x3FFFFFF8, 0x00000000}, // 7
    {0x00000000, 0x3FFFFFF8, 0x7FFFFFFC, 0x7FFFFFFC, 0x7FFFFFFC, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7FFFFFFC, 0x7FFFFFFC, 0x7FFFFFFC, 0x3FFFFFF8, 0x00000000}, // 8
    {0x00000000, 0x3803FFF8, 0x7C07FFFC, 0x7C07FFFC, 0x7C07FFFC, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7C07C07C, 0x7E0FC07C, 0x7FFFFFFC, 0x7FFFFFFC, 0x7FFFFFFC, 0x3FFFFFF8, 0x00000000}, // 9
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x1F81F800, 0x3FC3FC00, 0x3FC3FC00, 0x3FC3FC00, 0x3FC3FC00, 0x3FC3FC00, 0x1F81F800, 0x00000000, 0x00000000, 0x00000000, 0x00000000} // :
};
const  uint32_t  (* pFontMegaPtr)[16] = FontMega;
#endif

#ifdef NOKIA5110_FONT_LCD7
/*!
 ASCII font file : Mega 16 by 32 
 Define the ASCII table as Data array
 cols left to right, 0x00 is off, 0xFF is all on
 Each character is 16 bits wide 4 byte height. 
 Numbers only + : . /
*/

const PROGMEM  uint32_t FontLCD7[13][16] = {
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x30000000, 0x78000000, 0x30000000, 0x00000000, 0x00000000, 0x00000000}, // .
    {0x00000000, 0x00000000, 0x00000000, 0x1E000000, 0x07800000, 0x01E00000, 0x00780000, 0x001E0000, 0x00078000, 0x0001E000, 0x00007800, 0x00001E00, 0x00000780, 0x000001E0, 0x00000078, 0x00000000}, // / 
    {0x00000000, 0x3fff7ffc, 0x1ffe3ff8, 0x4ffc1ff2, 0x60000006, 0x7000000e, 0x7000000e, 0x7000000e, 0x7000000e, 0x7000000e, 0x7000000e, 0x7000000e, 0x60000006, 0x4ffc1ff2, 0x1ffe3ff8, 0x3fff7ffc}, // 0
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0ffc1ff0, 0x1ffe3ff8, 0x3fff7ffc}, // 1
    {0x00000000, 0x3fff0000, 0x1ffe0000, 0x4ffc8002, 0x6001c006, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x6001c006, 0x40009ff2, 0x00003ff8, 0x00007ffc}, // 2
    {0x00000000, 0x00000000, 0x40008002, 0x6000c006, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x6000c006, 0x4ffe9ff2, 0x1fff3ff8, 0x3fff7ffc}, // 3
    {0x00000000, 0x00007ffc, 0x00003ff8, 0x00009ff0, 0x0001c000, 0x0001c000, 0x0001c000, 0x0001c000, 0x0001c000, 0x0001c000, 0x0001c000, 0x0001c000, 0x0001c000, 0x0ffc9ff0, 0x1ffe3ff8, 0x3fff7ffc}, // 4
    {0x00000000, 0x00007ffc, 0x00003ff8, 0x40009ff2, 0x6001c006, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x6001c006, 0x4ffc8002, 0x1ffe0000, 0x3fff0000}, // 5
    {0x00000000, 0x3fff7ffc, 0x1ffe3ff8, 0x4ffc9ff2, 0x6001c006, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x6001c006, 0x4ffc8002, 0x1ffe0000, 0x3fff0000}, // 6
    {0x00000000, 0x00000000, 0x00000002, 0x00000006, 0x0000000e, 0x0000000e, 0x0000000e, 0x0000000e, 0x0000000e, 0x0000000e, 0x0000000e, 0x0000000e, 0x00000006, 0x0ffc1ff2, 0x1ffe3ff8, 0x3fff7ffc}, // 7
    {0x00000000, 0x3fff7ffc, 0x1ffe3ff8, 0x4ffc9ff2, 0x6001c006, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x6001c006, 0x4ffc9ff2, 0x1ffe3ff8, 0x3fff7ffc}, // 8
    {0x00000000, 0x00007ffc, 0x00003ff8, 0x40009ff2, 0x6001c006, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x7001c00e, 0x6001c006, 0x4ffc9ff2, 0x1ffe3ff8, 0x3fff7ffc}, // 9
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x1F81F800, 0x3FC3FC00, 0x3FC3FC00, 0x3FC3FC00, 0x3FC3FC00, 0x3FC3FC00, 0x1F81F800, 0x00000000, 0x00000000, 0x00000000, 0x00000000} // :
};

const  uint32_t  (* pFontLCD7Ptr)[16] = FontLCD7;
#endif

// ** EOF **
