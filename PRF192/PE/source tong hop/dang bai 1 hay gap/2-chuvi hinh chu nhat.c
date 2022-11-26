//perimeter of a rectangle
/////////////
//Enter length of the rectangle: 5
//Enter width of the rectangle: 10
//Perimeter of rectangle = 30.000000
#include <stdio.h>

int main()
{
    float length, width, perimeter;

    /*
     * Input length and width of rectangle from user
     */
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    /* Calculate perimeter of rectangle */
    perimeter = 2 * (length + width);

    /* Print perimeter of rectangle */
    printf("Perimeter of rectangle = %f units ", perimeter);

    return 0;
}
