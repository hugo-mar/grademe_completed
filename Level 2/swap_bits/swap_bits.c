unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	high_nibble;
	unsigned char	low_nibble;

	high_nibble = octet & 0xF0;
	low_nibble = octet & 0x0F;

	high_nibble >>= 4;
	low_nibble <<= 4;

	return (high_nibble | low_nibble);
}

#include<stdio.h>

int main()
{
    unsigned char original = 0x41; // 0100 0001
    unsigned char swapped = swap_bits(original);

    printf("Original: 0x%02X\n", original); // Saída: 0x41
    printf("Trocado: 0x%02X\n", swapped);   // Saída: 0x14

    return 0;
}