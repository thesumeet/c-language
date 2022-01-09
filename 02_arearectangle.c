#include <stdio.h>

int main()
{
    int length, breadth;
    int area = length*breadth;

    printf("Enter the length of reactangle");
    scanf("%d", &length);

    printf("Enter the breadth of reactangle");
    scanf("%d", &breadth);

    printf("The area of reactangle is %d", length*breadth);


    return 0;
}