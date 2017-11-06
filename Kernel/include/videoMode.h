#include <stdint.h>
#include "font.h"

#define VBEModeInfo 0x0000000000005C00
#define BLUE 0
#define GREEN 1
#define RED 2
#define CHAR_WIDTH 8
#define CHAR_HEIGHT 16


void paintPixel(/*unsigned short, unsigned short*/);

void putPixel(unsigned short, unsigned short);

uint8_t pow(uint8_t num, uint8_t exp);

void paintPix(uint8_t * pos, int charColor);

void setCharColors(uint8_t cb, uint8_t cg, uint8_t cr);

void setBackgroundColors(uint8_t bb, uint8_t bg, uint8_t br);