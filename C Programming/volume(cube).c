#include <stdio.h>
void main()
{
    float l, v;
    printf("enter length:");
    scanf("%f", &l);
    v = l * l * l;
    printf("volume: %.2f", v);
}