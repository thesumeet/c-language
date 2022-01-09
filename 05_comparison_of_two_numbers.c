#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Enter the number 01");
    scanf("%d", &num1);

    printf("Enter the number 02");
    scanf("%d", &num2);

  if(num1==num2){
        printf("The numbers are equal");  
    }
    
    else if(num1>num2){
        printf("The number 1 is greater than number 2");  
    }
    else if( num2>num1){
        printf("The number 2 is greater than number 1");  

    }
    else{
        printf("The numbers are not equal");  

    }
    
    return 0;
}