#include <stdio.h>
struct book
{
    char name[100];
    int cost;

} b[5];
int main()
{
    int i, total = 0;

    for (i = 0; i < 5; i++)
    {
        printf("enter name, cost:\n");
        scanf("%s%d", b[i].name, &b[i].cost);
    }
    for (i = 0; i < 5; i++)
    {

        printf("name=%s, csot=%d, publisher=XYZ", b[i].name, b[i].cost);
        total = total + b[i].cost;
        printf("\n");
    }
    printf("total=%d", total);
    return 0;
}