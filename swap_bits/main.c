#include "swap_bits.h"

int	main(void)
{
	uint8_t	byte;

	byte = 0x2A;
	printf("%#X -> %#X\n", byte, swap_bits(byte));
}
