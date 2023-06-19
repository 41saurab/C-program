#include <stdio.h>

void main()
{

    int A = 10, B = 5;
    /*Using AND Logical Operator to combime
      two relational expressions */
    if ((A > B) && (B > 7))
    {
        printf("Logical Expression  TRUE\n");
    }
    else
    {
        printf("Logical Expression  FALSE\n");
    }

    /*Using OR Logical Operator to combime
      two relational expressions */
    if ((A > B) || (B > 7))
    {
        printf("Logical Expression  TRUE\n");
    }
    else
    {
        printf("Logical Expression  FALSE\n");
    }

    /*Using NOT Logical Operator to combime
      two relational expressions */
    if (!(A > B))
    {
        printf("Logical Expression  TRUE\n");
    }
    else
    {
        printf("Logical Expression  FALSE\n");
    }
}