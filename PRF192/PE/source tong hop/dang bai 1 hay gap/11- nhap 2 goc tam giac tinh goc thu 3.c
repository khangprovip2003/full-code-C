// find angles of triangle if two angles are given
// //////////////
// Enter two angles of triangle: 60 30
//Third angle of the triangle = 90
#include <stdio.h>

int main()
{
    int a, b, c;

    /* Input two angles of the triangle */
    printf("Enter two angles of triangle: ");
    scanf("%d%d", &a, &b);

    /* Compute third angle */
    c = 180 - (a + b);

    /* Print value of the third angle */
    printf("Third angle of the triangle = %d", c);

    return 0;
}
