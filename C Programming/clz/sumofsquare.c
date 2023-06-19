#include <stdio.h>
int main()
{
    int n, s, sum, i;
    printf("enter range: ");
    scanf("%d", &n);

    s = 0;
    for (i = 1; i <= n; i++)
    {
        s = s + i * i;
        sum = s;
    }
    printf("sum of square of 1st %d no = %d", n, sum);
    return 0;
}