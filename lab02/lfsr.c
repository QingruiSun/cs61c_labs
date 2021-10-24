#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
  uint16_t reg0 = *reg & 0x1;
  uint16_t reg1 = (*reg >> 2) & 0x1;
  uint16_t reg2 = (*reg >> 3) & 0x1;
  uint16_t reg3 = (*reg >> 5) & 0x1;
  uint16_t t = ((reg0 ^ reg1) ^ reg2) ^ reg3;
  t = t << 15;
  *reg = *reg >> 1;
  *reg = *reg | t;
}

