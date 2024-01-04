#include<stdio.h>

//Area of the Circle (πr^2)
int main(){
    float pi = 3.14;
    int radius;
    printf("Enter Radius ");
    scanf("%d", &radius); //Must use referance operator (&)

    float area = 3.14 * radius * radius;
    printf("\nArea f the Circle is : %f" , area); // Must use format specifier (%d, %f, %c)
    return 0;


}