#include <stdio.h>
void main()
{
    int x = 5, y;
    // pre-increment
    y = ++x;
    printf("x=%d, y=%d\n", x, y);

    // post-increment
    x = 5; // reset x to 5
    y = x++;
    printf("x=%d, y=%d\n", x, y);

    // pre-decrement
    x = 5; // reset x to 5
    y = --x;
    printf("x=%d, y=%d\n", x, y);

    // post-decrement
    x = 5; // reset x to 5
    y = x--;
    printf("x=%d, y=%d\n", x, y);
}