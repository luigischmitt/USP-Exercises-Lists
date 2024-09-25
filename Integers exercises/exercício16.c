#include <stdio.h>

int main()
{
    int result = 0, pot = 1, binary, number;
    printf("\n\tGiven a natural number in decimal base, transform it to binary base");
    printf("\nType a natural number in decimal base: ");
    scanf("%i", &number);

    while (number >= 1) {
        binary = number % 2;
        number = number / 2;
        result = result + binary * pot;
        pot = pot * 10;
    }

    printf("This number in binary base is %i", result);
    
    return 0;
} 