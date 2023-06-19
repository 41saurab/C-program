#include <stdio.h>
int main()
{
    int i = 0, n, s = 0;
    printf("enter range : ");
    scanf("%d", &n);
    while (i <= n)
    {
        s = s + (i * i);
        i++;
        /* code */
    }
    printf("sum of squares : %d ", s);

    return 0;
}