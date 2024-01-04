#include<stdio.h>

//Area of Square (side^2)
int main(){
    int side;
    printf("Enter the side ");
    scanf("%d", &side);

    int area = side * side;
    printf("Area of Squre is : %d",  area);
    return 0;
}