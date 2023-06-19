#include <stdio.h>
void main()
{
    float p, t, r, SI;
    printf("enter p, t and r:\n");
    scanf("%f%f%f", &p, &t, &r);
    SI = (p * t * r) / 100;
    printf("Simple-Interest=%.2f", SI);
}