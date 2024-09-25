#include <stdio.h>

int main()
{
    int n, div = 0;
    printf("\n\tVerificador de numeros primos\n");
    printf("\nDigite um numero 'n' natural: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            div++;
        }
    }
    
    if (div == 2)
    {
        printf("O numero %i e' primo!", n);
    } else
    {
        printf("O numero %i nao e' primo!", n);
    }
    
    return 0;
}