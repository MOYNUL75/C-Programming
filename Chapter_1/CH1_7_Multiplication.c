#include<stdio.h>

int main(){
    
    int num1;
    printf("Enter number1 : ");
    scanf("%d", &num1);

    int num2;
    printf("\nEnter number2 : ");
    scanf("%d", &num2);

    int Multiplication = num1 * num2;
    printf("\nMultiplication of two number is %d", Multiplication);
    return 0;
}