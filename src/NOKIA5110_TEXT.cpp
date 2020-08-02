/*
* Project Name: Nokia 5110
* File: NOKIA5110_TEXT.cpp
* Description: Nokia library cpp file
* Author: Gavin Lyons.
* IC: ATmega328P 
* IDE:  Arduino 1.8.5
* Created March 2019
* Description: See URL for full details.
* URL: https://github.com/gavinlyonsrepo/NOKIA5110_TEXT
*/

#include "NOKIA5110_TEXT.h"


NOKIA5110_TEXT::NOKIA5110_TEXT(uint8_t LCD_RST, uint8_t LCD_CE, uint8_t LCD_DC, uint8_t LCD_DIN, uint8_t LCD_CLK) {
	
	_LCD_RST = LCD_RST;
	_LCD_CE = LCD_CE;
	_LCD_DC  = LCD_DC;
	_LCD_DIN  = LCD_DIN;
	_LCD_CLK  = LCD_CLK;
	
}

void NOKIA5110_TEXT::LCDInit(bool Inverse, uint8_t Contrast,uint8_t Bias) {
	
	pinMode(_LCD_RST,OUTPUT);
	pinMode(_LCD_CE,OUTPUT);
	pinMode(_LCD_DC,OUTPUT);
	pinMode(_LCD_DIN,OUTPUT);
	pinMode(_LCD_CLK,OUTPUT);
	_inverse = Inverse;
	_contrast = Contrast;
	//Configure control pins
	_LCD_DIN_SetLow;
	_LCD_CLK_SetLow;
	_LCD_DC_SetLow;
	//Reset the LCD to a known state
	_LCD_RST_SetLow;
	_LCD_RST_SetHigh;
	LCDWrite(LCD_COMMAND, LCD_COMMAND_MODE); //Tell LCD that extended commands follow
	LCDWrite(LCD_COMMAND, _contrast); //Set LCD Vop (Contrast): Try 0xB1(good @ 3.3V) or 0xBF if your display is too dark
	LCDWrite(LCD_COMMAND, LCD_TEMP_COEF); //Set Temp coefficent
	LCDWrite(LCD_COMMAND, Bias); //LCD bias mode 1:48: Try 0x13 or 0x14
	LCDWrite(LCD_COMMAND, LCD_FUNCTIONSET ); //We must send 0x20 before modifying the display control mode
	if (_inverse  == false)
		LCDWrite(LCD_COMMAND, LCD_DISPLAYCONTROL); //Set display control, normal mode. 0x0D for inverse
	else
		LCDWrite(LCD_COMMAND, LCD_DISPLAYCONTROL_INVERSE); //Set display control, normal mode. 0x0D for inverse
}

void NOKIA5110_TEXT::LCDgotoXY(uint8_t  x, uint8_t  y) {
	LCDWrite(LCD_COMMAND, 0x80 | x); // Column. (result 0x80 to 0xD3)
	LCDWrite(LCD_COMMAND, 0x40 | y); // Row.
	_Block= y;
	_Col = x;
}

void NOKIA5110_TEXT::LCDClear(uint8_t  FillData) {
	for (uint16_t index = 0 ; index < (LCD_X * LCD_Y / 8) ; index++)
	{
		LCDWrite(LCD_DATA, FillData);
	}
	LCDgotoXY(0, 0); //After we clear the display, return to the home position
	}

void NOKIA5110_TEXT::LCDClearBlock(uint8_t RowBlockNum) {
	LCDgotoXY(0, RowBlockNum);
	for (uint8_t index = 0 ; index < (LCD_X) ; index++)
		{
			LCDWrite(LCD_DATA, 0x00);
		}
	}

void NOKIA5110_TEXT::LCDFont(uint8_t  FontNumber)
{
	_FontNumber = FontNumber;
}

void NOKIA5110_TEXT::LCDWrite(unsigned char data_or_command, unsigned char data) {
	unsigned char i,d;
	d=data;
	if(data_or_command==0)_LCD_DC_SetLow;
	else _LCD_DC_SetHigh;
	//data_or_command; 
	//Tell the LCD that we are writing either to data or a command
	//Send the data
	_LCD_CE_SetLow;
	for(i=0;i<8;i++)
	{
		_LCD_DIN_SetLow;
		if(d&0x80)_LCD_DIN_SetHigh; // b1000000 Mask with 0 & all zeros out.
		_LCD_CLK_SetHigh;
		d<<=1;
		_LCD_CLK_SetLow;
	}
   _LCD_CE_SetHigh;
}

void NOKIA5110_TEXT::LCDCharacter(char character) 
{
	uint8_t column = 0;
	if (_FontNumber != 7  && _FontNumber != 8){  // Large fonts no padding 
		LCDWrite(LCD_DATA, 0x00); }//Blank vertical line padding , LHS
	
	switch(_FontNumber)
	{
		case 1:
			#ifdef NOKIA5110_FONT_1
				for (column = 0 ; column < LCD_FONT_WIDTH_1 ; column++){
					LCDWrite(LCD_DATA, (pgm_read_byte(&ASCII[character - LCD_ASCII_OFFSET][column])));
				}
			#endif
		break;
		case 2:
			#ifdef NOKIA5110_FONT_2
				for (column = 0 ; column < LCD_FONT_WIDTH_2 ; column++) {
					LCDWrite(LCD_DATA, (pgm_read_byte(&ASCII_TWO[character - LCD_ASCII_OFFSET][column])));
				}
			#endif
		break;
		case 3:
			#ifdef NOKIA5110_FONT_3
				for (column = 0 ; column < LCD_FONT_WIDTH_3 ; column++) {
					LCDWrite(LCD_DATA, (pgm_read_byte(&ASCII_THREE[character - LCD_ASCII_OFFSET][column])));
				}
			#endif
		break;
		case 4:
			#ifdef NOKIA5110_FONT_4
				for (column = 0 ; column < LCD_FONT_WIDTH_4 ; column++) {
					LCDWrite(LCD_DATA, (pgm_read_byte(&ASCII_FOUR[character - LCD_ASCII_OFFSET][column])));
				}
			#endif
		break;
		case 5:
			#ifdef NOKIA5110_FONT_5
				for (column = 0 ; column < LCD_FONT_WIDTH_5 ; column++){
					LCDWrite(LCD_DATA, (pgm_read_byte(&ASCII_FIVE[character - LCD_ASCII_OFFSET][column])));
				}
			#endif
		break;
		case 6:
			#ifdef NOKIA5110_FONT_6
				for (column = 0 ; column < LCD_FONT_WIDTH_6 ; column++){
					LCDWrite(LCD_DATA, (pgm_read_byte(&ASCII_SIX[character - LCD_ASCII_OFFSET][column])));
				}
			#endif
		break;
		case 7:
		{
			#ifdef NOKIA5110_FONT_7
					uint16_t totalchar = 0;
					uint8_t  topchar =0;
					uint8_t  botchar =0;
					//print upper byte
					for (column = 0 ; column < LCD_FONT_WIDTH_7 ; column++){
							totalchar = (pgm_read_word(&ASCII_SEVEN[character  - LCD_ASCII_OFFSET][column]));
							topchar = totalchar & 0x00FF;
							LCDWrite(LCD_DATA, topchar);
						}
						//Move to next block
						LCDgotoXY(_Col, _Block+1);
						//print lowerbyte
						for (column = 0 ; column < LCD_FONT_WIDTH_7 ; column++){
							totalchar = (pgm_read_word(&ASCII_SEVEN[character  - LCD_ASCII_OFFSET][column]));
							botchar = (totalchar >> 8) & 0xFF;
							LCDWrite(LCD_DATA, botchar);
						}
						//move back to upper block  
						LCDgotoXY(_Col+12 , _Block-1);
			#endif
		
		break;
		}
		case 8:
		{
			#ifdef NOKIA5110_FONT_8
						uint32_t totalchartwo = 0;
						uint8_t  topchartwo =0;
						uint8_t  midchartwo =0;
						uint8_t  botchartwo =0;
						
						//print upper byte
						for (column = 0 ; column < LCD_FONT_WIDTH_8 ; column++)
						{
							totalchartwo =  (pgm_read_dword_near(&ASCII_EIGHT[character - LCD_ASCII_OFFSET_ZERO][column]));
							topchartwo = totalchartwo & 0xFF;
							LCDWrite(LCD_DATA, topchartwo);
						}
						totalchartwo=0;
						//goto next block
						LCDgotoXY(_Col, _Block+1);
						for (column = 0 ; column < LCD_FONT_WIDTH_8 ; column++)
						{
							totalchartwo = (pgm_read_dword_near(&ASCII_EIGHT[character - LCD_ASCII_OFFSET_ZERO][column]));
							midchartwo = (totalchartwo >> 8) & 0xFF;
							LCDWrite(LCD_DATA, midchartwo);
						}
						totalchartwo=0;
						//goto next block
						LCDgotoXY(_Col, _Block+1);
						//print lower byte
						for (column = 0 ; column < LCD_FONT_WIDTH_8 ; column++)
						{
							totalchartwo =  (pgm_read_dword_near(&ASCII_EIGHT[character - LCD_ASCII_OFFSET_ZERO][column]));
							botchartwo = (totalchartwo >> 16) & 0xFF;
							LCDWrite(LCD_DATA, botchartwo);
						}
						//move back for next character 
						LCDgotoXY(_Col + LCD_FONT_WIDTH_8, _Block-2);
			#endif
		   
		break;
		}
	} // end switch
	
	if (_FontNumber != 7 && _FontNumber != 8){  // Large fonts no padding 
		LCDWrite(LCD_DATA, 0x00); }//Blank vertical line padding RHS
}

void NOKIA5110_TEXT::LCDString(const char  *characters) {
	while (*characters)
	LCDCharacter(*characters++);
}

void NOKIA5110_TEXT::LCDSetPixel(uint8_t col,  uint8_t row ) 
{
		uint8_t rowblock = row/8; //0 -5
		LCDgotoXY(col, rowblock);
		LCDWrite(LCD_DATA, 1 << (row-(rowblock*8)));
}

void NOKIA5110_TEXT::LCDsetContrast(uint8_t contrast)
{
	_contrast = contrast;
	LCDWrite(LCD_COMMAND, LCD_COMMAND_MODE); //Tell LCD that extended commands follow
	LCDWrite(LCD_COMMAND, _contrast); //Set LCD Vop (Contrast): 
	LCDWrite(LCD_COMMAND, LCD_FUNCTIONSET ); //We must send 0x20 before modifying the display control mode
}

void NOKIA5110_TEXT::LCDenableSleep()
{
	_sleep = true;
	for (uint16_t index = 0 ; index < (LCD_X * LCD_Y / 8) ; index++)
	{
		LCDWrite(LCD_DATA, 0x00);
	}
	LCDgotoXY(0, 0);
	LCDWrite(LCD_COMMAND, LCD_POWERDOWN);
}

void NOKIA5110_TEXT::LCDdisableSleep()
{
   
	_sleep = false;
	LCDWrite(LCD_COMMAND , LCD_COMMAND_MODE);
	LCDWrite(LCD_COMMAND , _contrast);
	LCDWrite(LCD_COMMAND,  LCD_TEMP_COEF );
	LCDWrite(LCD_COMMAND,  LCD_BIAS );
	LCDWrite(LCD_COMMAND, LCD_FUNCTIONSET );
	if (_inverse  == false)
		LCDWrite(LCD_COMMAND, LCD_DISPLAYCONTROL); //Set display control, normal mode. 0x0D for inverse
	else
		LCDWrite(LCD_COMMAND, LCD_DISPLAYCONTROL_INVERSE); //Set display control, normal mode. 0x0D for inverse
}

void NOKIA5110_TEXT::LCDFillBlock(uint8_t FillData , uint8_t RowBlockNum) {
	LCDgotoXY(0, RowBlockNum);
	for (uint8_t index = 0 ; index < (LCD_X) ; index++)
		{
			LCDWrite(LCD_DATA, FillData);
		}
	}

void NOKIA5110_TEXT::LCDCustomChar(unsigned char character[], uint16_t numChars ,uint8_t padding, bool ProgMemLocale ) 
{

	uint16_t column = 0; // max 504 bytes.
	if (padding == 1 ||  padding == 3)
		{
			LCDWrite(LCD_DATA, 0x00); //Blank vertical line padding , LHS
		}
		
	for (column = 0 ; column < numChars ; column++)
		{
		if (ProgMemLocale  == true)
			LCDWrite(LCD_DATA, pgm_read_byte(&(character[column])));
		else
			LCDWrite(LCD_DATA, character[column]);
		}
		
	if (padding == 2 || padding == 3)
		{
			LCDWrite(LCD_DATA, 0x00); //Blank vertical line padding RHS
		}
}

/* =========== EOF ===========*/
