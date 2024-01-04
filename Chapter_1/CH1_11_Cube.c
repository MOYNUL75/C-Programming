#include <stdio.h>

//Take a number(n) from user & output its cube(n*n*n)
int main() {
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    printf("The cube of %.2f is: %.2f\n", number, number * number * number);
   //Specifically, " %.2f " is used to display a floating-point number with exactly two digits after the decimal point.
   //For example, if you have a floating-point number like 3.14159, using %.2f would display it as 3.14 .
    return 0;
}
