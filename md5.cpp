#include <iostream>

using namespace std;

int main()
{
    //All variables are unsigned 32 bit and wrap modulo 2^32 when calculating
    unsigned int[64] s, K;
    unsigned int i;

    //s specifies the per-round shift amounts

    s[0-15] = { 7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22 };
    s[16-31] = { 5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20 };
    s[32-47] = { 4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23 };
    s[48-63] = { 6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21 };
    return 0;
}

