#include <stdio.h>
#define pi 3.14
void main()
{
    float radius, area;
    printf("enter radius of circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf(" area of circle:%.2f ", area);
}
