#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j, k, m;

    printf("enter 1st matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter 2nd matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            m = 0;
            for (k = 0; k < 2; k++)
            {
                m = m + a[i][k] * b[k][j];
            }
            c[i][j] = m;
        }
    }

    printf("answer:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}