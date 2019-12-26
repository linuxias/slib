#include <stdio.h>
#include "s_bit.h"

int main()
{
    s_bit_t bits = 0;

    S_BIT_SET_ALL(bits);
    S_BIT_CLR_ALL(bits);
    S_BIT_SET(bits, 4);
    S_BIT_SET(bits, 8);

    printf("%d\n", S_BIT_IS_SET(bits, 7));
    printf("%d\n", S_BIT_IS_SET(bits, 4));
    printf("%d\n", S_BIT_IS_CLR(bits, 4));
    printf("%d\n", S_BIT_IS_CLR(bits, 7));

    return 0;
}
