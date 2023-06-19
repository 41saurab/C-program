#include <stdio.h>
void main()
{
    int a = 0, b = 1, c, n, i;
    printf("enter range: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);
    for (i = 2; i <5 n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}