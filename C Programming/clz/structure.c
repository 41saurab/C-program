#include <stdio.h>
struct employee
{
    int id;
    char n[10];
    float s;
} e[5];
int main()
{
    int i;

    printf("enter id, name and salary:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d %s %f", &e[i].id, e[i].n, &e[i].s);
    }

    printf("Data:\n");
    for (i = 0; i < 5; i++)
    {
        printf("id. %d name. %s salary: %.2f \n", e[i].id, e[i].n, e[i].s);
    }

    return 0;
}