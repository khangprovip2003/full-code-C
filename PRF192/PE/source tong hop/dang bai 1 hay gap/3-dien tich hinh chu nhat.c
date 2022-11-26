//area of a rectangle
//////////
//Enter length of rectangle: 5
//Enter width of rectangle: 10
//Area of rectangle = 50.000000 sq. units
#include <stdio.h>

int main()
{
    float length, width, area;

    /*
     * Input length and width of rectangle
     */
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    /* Calculate area of rectangle */
    area = length * width;

    /* Print area of rectangle */
    printf("Area of rectangle = %f sq. units ", area);

    return 0;
}
