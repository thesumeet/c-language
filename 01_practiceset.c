#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;
    
    printf("enter the radius");
    scanf("%d", &radius);

    float area = radius*radius*pi;

    printf("The area of circle is %f", area);

    return 0;
}