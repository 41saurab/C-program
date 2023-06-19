#include <stdio.h>
int sum(int, int);

int main()
{
    int a, b, add;
    printf("enter 2 number:\n");
    scanf("%d%d", &a, &b);
    add = sum(a, b);
    printf("sum=%d", add);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}