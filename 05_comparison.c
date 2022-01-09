#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Enter the number 01");
    scanf("%d", &num1);

    printf("Enter the number 02");
    scanf("%d", &num2);

    if ((num1 == num2) || (num1 > num2))
    {
        if (num1 == num2)
        {
            printf("The numbers are equal");
        }
        else{
            printf("The number %d is greater than number %d", num1,num2);

        }
    }
    else
    {
        printf("The number %d is greater than number %d", num2, num1 );
    }

    return 0;
}