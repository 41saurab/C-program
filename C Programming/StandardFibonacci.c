#include <stdio.h>
void main()
{
    int a = 0, b = 1, c, n, i;
    printf("enter range: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d ", a);
        }
        else if (i == 1)
        {
            printf("%d ", b);
        }

        else
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
}