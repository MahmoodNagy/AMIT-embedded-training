#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y;
    printf("Please enter the number: ");
    scanf("%i",&x);
    printf("Please enter the skipped: ");
    scanf("%i",&y);
    for(i=1;i<=x;i++)
    {
        if(i%y==0)
        {
            continue;
        }

        printf("%i\n",i);

    }

    return 0;
}
