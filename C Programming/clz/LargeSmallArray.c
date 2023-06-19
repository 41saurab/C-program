#include <stdio.h>

void main()
{
	int a[10], n, big, small, i;

	printf("enter range of numbers: ");
	scanf("%d", &n);

	printf("enter numbers:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	big = a[0];
	small = a[0];

	for (i = 1; i < n; i++)
	{
		if (big < a[i])
		{
			big = a[i];
		}
		if (small > a[i])
		{
			small = a[i];
		}
	}

	printf("\nbig number = %d", big);
	printf("\nsmall number = %d", small);
}