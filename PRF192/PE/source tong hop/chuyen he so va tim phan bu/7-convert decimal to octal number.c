//Enter any decimal number: 20
//Decimal number = 20
//Octal number = 24
#include <stdio.h>

int main()
{
    long long decimal, tempDecimal, octal;
    int i, rem, place = 1;

    octal = 0;

    /* Input decimal number from user */
    printf("Enter any decimal number: ");
    scanf("%lld", &decimal);

    tempDecimal = decimal;

    /* Decimal to octal conversion */
    while(tempDecimal > 0)
    {
        rem = tempDecimal % 8;

        octal = (rem * place) + octal;

        tempDecimal /= 8;

        place *= 10;
    }

    printf("\nDecimal number = %lld\n", decimal);
    printf("Octal number = %lld", octal);

    return 0;
}
