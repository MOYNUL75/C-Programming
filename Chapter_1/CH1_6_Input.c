#include<stdio.h>

int main(){
    
    int a,b;
    
    printf("Enter number1 : ");
    scanf("%d", &a);

    printf("\nEnter number2 : ");
    scanf("%d", &b);

    int x = a + b;
    printf("\nSum of the two number is  %d : " , x);
    return 0;
}