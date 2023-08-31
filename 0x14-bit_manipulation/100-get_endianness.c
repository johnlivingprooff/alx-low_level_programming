#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 * void content
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	size_t val = 0x67;
	char *ptr = (char *)&val;

	return (*ptr == 0x67);
}
