#include <stdio.h>
#include <math.h>

int main()
{
    double result, binary;
    int number;
    printf("\n\tGiven a natural number in binary base, transform it to decimal base");
    printf("\nType a natural number in binary base: ");
    scanf("%i", &number); // 10010

    for (double i = 0; number != 0; i++) {
        binary = (number % 10); 
        binary = binary * pow(2, i);
        result += binary;
        number = number / 10;
    }
    
    printf("The result is %.1f", result);

    return 0;
}