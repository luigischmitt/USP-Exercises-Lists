#include <stdio.h>

int main() 
{
    int n, fatorial = 1;
    printf("\n\tDado um inteiro n nao negativo, determina n!\n");
    printf("\nDigite um numero n (positivo): ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    
    printf("O resultado de %i! = %i", n, fatorial);

    return 0;
}