//convert centimeter to meter and kilometer
/////////
//Output
//Enter length in centimeter: 1000
//Length in Meter = 10.00 m
//Length in Kilometer = 0.01 km
#include <stdio.h>

int main()
{
    float cm, meter, km;

    /* Input length in centimeter from user */
    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    /* Convert centimeter into meter and kilometer */
    meter = cm / 100.0;
    km    = cm / 100000.0;

    printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Kilometer = %.2f km", km);

    return 0;
}
