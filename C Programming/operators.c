#include <stdio.h>
void main()
{
    int a = 5, b = 6, c = 7, d = 8, e = 9;
    // increment
    printf("number = %d\n", ++a);
    printf("number = %d\t", a++);
    printf("number = %d\n", a++);
    // decrement
    printf("number = %d\n", --b);
    printf("number = %d\t", b--);
    printf("number = %d\n", b--);
    // assignment
    printf("number = %d\n", c += 1);
    printf("number = %d\n", c -= 1);
    // relational
    if (d > e)
    {
        printf("greatest= %d", d);
    }
    else
    {
        printf("greatest= %d", e);
    }
    // logical
    if (d != e)
    {
        printf("\nnot equal");
    }
    else
    {
        printf("equal");
    }
}