#include "NimGame.hpp"

/*
 * f(3) = f(2) = f(1) = 1;
 * f(4) = 0;
 * f(5) = f(1+4) = f(1) = 1;
 * f(6) = f(2+4) = f(2) = 1;
 * f(7) = f(3+4) = f(3) = 1;
 * f(8) = f(4*2) = f(4) = 0;
 * f(9) = f(1+4*2) = f(1) = 1;;
 * when n % 4 != 0,
 * we can always pick up  x stones to make n = x + 4 * y;
 * then if the other one pick m stones, we pick (4 - m) stones,
 * we can then make sure we can win.
 */
bool canWinNim(int n)
{
	return (n % 4);
}
