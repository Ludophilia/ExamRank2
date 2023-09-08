#include "swap_bits.h"

uint8_t	swap_bits(uint8_t byte)
{
	return (((byte << 4) & 0xFF) + ((byte >> 4) & 0xF));
}
