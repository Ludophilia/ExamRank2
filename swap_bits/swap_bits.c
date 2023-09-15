#include "swap_bits.h"

uint8_t	swap_bits(uint8_t byte)
{
	return ((byte << 4) + (byte >> 4));
}
