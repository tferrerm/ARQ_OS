#include <stdint.h>

void timeToString(char *);

static char getFirstDigit(uint8_t num);

static char getSecondDigit(uint8_t num);

extern uint8_t get_sec();

extern uint8_t get_min();

extern uint8_t get_hr();