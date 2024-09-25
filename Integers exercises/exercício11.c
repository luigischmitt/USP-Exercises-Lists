#include <stdio.h>

int main()
{
    int resto, a, b;
    printf("\n\tLet's find out the Greatest Common Divisor (GCD):\n");
    printf("\nType the 1st number: ");
    scanf("%i", &a);
    printf("Type the 2nd number: ");
    scanf("%i", &b);

    resto = a % b;         
    while (resto != 0)  // ESSE LOOP É GENIAL!
    {
        resto = b % a;
        b = a;
        a = resto;
    }
    
    printf("The Greatest Commom Divisor is %d\n", b); 

    return 0;
}