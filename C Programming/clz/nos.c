#include <stdio.h>

int main()
{
    char input[100]; // Assuming a maximum input size of 100 characters
    int i, count = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == 'I' || input[i] == 'i')
        {
            count++;
        }
    }

    printf("The character 'I' occurs %d times.\n", count);

    return 0;
}