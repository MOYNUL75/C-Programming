#include<stdio.h>

/*
Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.
Formula: Perimeter = 2 (w + h)
“a” is the length of the rectangle
“b” is the breadth of the rectangle
*/

int main(){
    int a;
    printf("Enter length of the rectangle : ");
    scanf("%d", &a);

    int b;
    printf("\nEnter breadth of the rectangle : ");
    scanf("%d", &b);
    
    int perimeter = 2 * (a+b);
    printf("\nPerimeter of the Rectangle : %d", perimeter);
    return 0;
}