#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("table of: ");
    scanf("%d", &n);
    printf("table of %d\n", n);
    while (i <= 10)
    {
        printf("%d * %d =%d\n", n, i, n * i);
        i++;
    }
}