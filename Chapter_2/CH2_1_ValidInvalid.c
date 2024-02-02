#include <stdio.h>

int main()
{

    // Valid ( First declare than use )
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e;
    e = 6;
    printf("A is : %d", a);
    printf("\nB is : %d", b);
    printf("\nC is : %d", c);
    printf("\nD is : %d", d);
    printf("\nE is : %d", e);

    int x, y, z; // First declare than use
    x = y = z = 7;
    printf("\nX is : %d", x);
    printf("\nY is : %d", y);
    printf("\nZ is : %d", z);

    // Invalid
    /*
    int oldAge = 22;
    int newAge = oldAge + years;
    int years = 2;

    int p = q = r = 4; //undefined
    */

    return 0;
}