#include <stdio.h>
struct student
{
    int m;
} s[5];

int main()
{
    int i, sum = 0;

    printf("enter marks in 5 subjs:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &s[i].m);
        sum = sum + s[i].m;
    }
    printf("sum = %d\n", sum);

    return 0;
}