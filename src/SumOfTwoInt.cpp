#include "SumOfTwoInt.hpp"

int getSum2(int a, int b) {
    int adder = 0;
    int sum = 0;
    int i = 0;

    for (; i < 32; i++) {
        bool ai = (a & (0x1 << i)) ? 1 : 0;
        bool bi = (b & (0x1 << i)) ? 1 : 0;

        if ((ai & bi) == 1) {
            sum |= (adder << i);
            adder = 1;
        } else if ((ai | bi) == 1) {
            if (adder == 0)
                sum |= (0x1 << i);
        } else {
            sum |= (adder << i);
            adder = 0;
        }
    }

    return sum;
}

int getSum(int a, int b) {
    int sum = a;

    while (b != 0)
    {
        sum = a ^ b;//calculate sum of a and b without thinking the carry
        b = (a & b) << 1;//calculate the carry
        a = sum;//add sum(without carry) and carry
    }

    return sum;
}
