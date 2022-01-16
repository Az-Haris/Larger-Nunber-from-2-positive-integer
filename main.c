#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1, num2;
    printf("Please Enter 2 Positive Integer Number : ");
    scanf("%d%d",&num1,&num2);
    if((num1>0)&&(num2>0))
    {
        if(num1>num2)
        {
            printf("%d is the Largest Number",num1);
        }
        else if(num2>num1)
        {
            printf("%d is the Largest Number",num2);
        }
        else
        {
            printf("You've Entered two or more Same Value");
        }
    }
    else
    {
        printf("Input Error");
    }

    getch();
    return 0;
}
