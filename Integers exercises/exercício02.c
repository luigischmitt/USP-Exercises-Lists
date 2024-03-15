#include <stdio.h>

int main() 
{
    int numero = 0;
    int soma = 0;

    printf("\n\tSoma dos primeiros numeros inteiros ate n\n");
    printf("Escreva um numero 'n': ");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++)
    {
        soma += i;
    }
    
    printf("A soma dos %i primeiros inteiros eh %i", numero, soma);

    return 0;
}