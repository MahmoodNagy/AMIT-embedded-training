#include <stdio.h>
#include <stdlib.h>

int add(int x, int y){
    return x+y;
}

int sub(int x, int y){
    return x-y;
}

int mult(int x, int y){
    return x*y;
}

void advanced_calculator()
{
    int x,y,a,b,c,i,d,e;

    printf("Please enter (1) to use the simple calculator /\n enter (2) for Cinema Tickets\n OR enter (3) for printing a wanted range of numbers : ");
    scanf("%i",&x);
    printf("\n");

     /* Start the simple calculation */

    if(x==1)
    {
        printf("Please enter the first integer number : ");
        scanf("%i",&a);
        printf("Please enter the second integer number : ");
        scanf("%i",&b);
        printf("Choose :\n 1. For Addition : Enter (1)\n 2. For Subtraction : Enter (2)\n 3. For Multiplication : Enter (3)\n\n");
        scanf("%i",&y);
        if (y==1)
        {
            c=add(a,b);
            printf("The result of : %i + %i = %i",a,b,c);
        }
        else if(y==2)
        {
            c=sub(a,b);
            printf("The result of : %i - %i = %i",a,b,c);
        }
        else if(y==3)
        {
            c=mult(a,b);
            printf("The result of : %i x %i = %i",a,b,c);
        }

    }

    /* End the simple calculation */
    // -------------------------------------------------------------------------

     /* Start the Cinema Tickets */

    else  if(x==2)
    {

        printf("\nChoose :\n 1. For normal ticket : Enter (1)\n 2. For VIP ticket : Enter (2)\n 3. For VIP and pop corn : Enter (3)\n\n");
        scanf("%i",&y);
        if (y==1)
        {
            printf("\nNormal ticket 50 LE\n");
        }
        else if(y==2)
        {
            printf("\nVIP ticket\n");
        }
        else if(y==3)
        {
            printf("\nVIP ticket + pop corn\n");
        }

    }
    /* End the Cinema Tickets */
    // ---------------------------------------------------------------------------------

    /* Start printing a range of numbers */

    else if(x==3)
    {
        printf("Please enter the number: ");
        scanf("%i",&d);
        printf("Please enter the skipped: ");
        scanf("%i",&e);
        for(i=1;i<=d;i++)
        {
            if(i%e==0)
            {
                continue;
            }

            printf("%i\n",i);

        }
    }

     /* End printing a range of numbers */

    else
    {
        printf("Please enter a valid number ( 1 or 2 ) :");
        scanf("%i",x);
    }
}

int main()
{
    printf("*** Welcome to the Advanced Calculator ***");
    printf("\n\n");

    while(1)
    {
        advanced_calculator();
        printf("\n\n");
    }

    return 0;
}
