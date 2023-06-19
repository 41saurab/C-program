#include <stdio.h>
void main()
{
    int a = 5, b = 6;
    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a >= b)
    {
        printf("%d is greater than or equal to %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is less than %d\n", a, b);
    }
    else if (a <= b)
    {
        printf("%d is less than or equal to %d\n", a, b);
    }
    else if (a == b)
    {
        printf("%d is equal to %d\n", a, b);
    }
    else
    {
        printf("%d is not equal to %d\n", a, b);
    }
}