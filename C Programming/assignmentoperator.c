#include <stdio.h>
void main()
{
    int a = 2, total = 20;
    printf("total=%d\n", total += a);
    printf("total=%d\n", total -= a);
    printf("total=%d\n", total *= a);
    printf("total=%d\n", total /= a);
    printf("total=%d\n", total %= a);
    printf("total=%d\n", total = a);
}