#include <stdio.h>

void main()
{
	float p, t, r, i;
	printf("enter p, t and r:\n");
	scanf("%f%f%f", &p, &t, &r);
	i = (p * t * r) / 100;
	printf("interest=%.2f", i);
	getch();
}
