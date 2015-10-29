#include "AddDigits.hpp"

/*
 * https://en.wikipedia.org/wiki/Digital_root
 */
int addDigits(int num)
{
	return 1 + (num - 1) % 9;
}
