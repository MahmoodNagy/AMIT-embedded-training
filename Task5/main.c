#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%i",&rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
