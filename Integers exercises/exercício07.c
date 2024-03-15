#include <stdio.h>

int main() 
{
    int n, soma = 0;
    printf("\n\t(Dados n e uma sequencia de n numeros inteiros, determina a soma dos numeros pares)\n");
    printf("\nEscreva o numero n: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
    }
    
    printf("A soma dos pares ate %i eh igual a: %i", n, soma);

    return 0;
}