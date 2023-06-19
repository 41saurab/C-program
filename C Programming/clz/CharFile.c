#include <stdio.h>
void main()
{
    FILE *fp;
    char c;

    fp = fopen("char.txt", "w");

    printf("enter character:\n");
    scanf("%c", &c);

    fputc(c, fp);

    fclose(fp);

    fp = fopen("char.txt", "r");

    c = fgetc(fp);

    printf("character=%c\n", c);

    fclose(fp);
}