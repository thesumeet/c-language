#include <stdio.h>

int main()
{
    float principle, rate, years;
    
    printf("Enter the principle");
    scanf("%f", &principle);

    printf("Enter the rate");
    scanf("%f", &rate);

    printf("Enter the years");
    scanf("%f", &years);

    float simpleInterest = (principle * rate * years)/100;
    
    printf("The simple interest is = %f", simpleInterest);

}