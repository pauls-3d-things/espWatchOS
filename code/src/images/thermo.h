#include <Arduino.h>

#define thermo_width 48
#define thermo_height 48
uint8_t thermo_bits[] = {
  0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 
  0x40, 0x00, 0x70, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x38, 0x0E, 0x00, 0x00, 
  0x00, 0x80, 0x32, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x78, 0x1C, 0x00, 0x00, 
  0x00, 0x00, 0x38, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 
  0x00, 0x00, 0x38, 0x0C, 0x00, 0x00, 0x88, 0x00, 0x38, 0x0C, 0x00, 0x00, 
  0x00, 0x00, 0x38, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x78, 0x0C, 0x00, 0x00, 
  0x00, 0x00, 0x30, 0x0E, 0x00, 0x00, 0x00, 0x02, 0x38, 0x0C, 0x00, 0x00, 
  0x00, 0x01, 0x38, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x78, 0x0C, 0x00, 0x00, 
  0x00, 0x00, 0xB0, 0x0D, 0x00, 0x00, 0x80, 0x00, 0xF8, 0x0D, 0x00, 0x00, 
  0x00, 0x00, 0xB8, 0x1F, 0x00, 0x00, 0x08, 0x00, 0xF0, 0x0C, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0x0D, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x1D, 0x00, 0x00, 
  0x00, 0x80, 0xB8, 0x1D, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x0D, 0x00, 0x00, 
  0x00, 0x00, 0xB8, 0x0D, 0x00, 0x00, 0x20, 0x00, 0xF8, 0x1C, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0x0F, 0x00, 0x00, 0x00, 0x02, 0xB8, 0x1C, 0x00, 0x00, 
  0x00, 0x00, 0xB0, 0x0D, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x1D, 0x00, 0x00, 
  0x00, 0x04, 0xFC, 0x3D, 0x00, 0x00, 0x02, 0x00, 0x8E, 0x31, 0x00, 0x00, 
  0x00, 0x00, 0xF6, 0x77, 0x00, 0x00, 0x00, 0x00, 0xF7, 0xEF, 0x00, 0x00, 
  0x00, 0x80, 0xF3, 0xEF, 0x00, 0x00, 0x00, 0x04, 0xFF, 0xDF, 0x00, 0x00, 
  0x40, 0x00, 0xFB, 0xDF, 0x00, 0x00, 0x00, 0x00, 0xFB, 0xCF, 0x01, 0x00, 
  0x08, 0x00, 0xF3, 0xEF, 0x00, 0x00, 0x00, 0x00, 0xF7, 0xE7, 0x00, 0x00, 
  0x00, 0x80, 0xCE, 0x73, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3C, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x02, 0x00, 
  };
