#include <stdio.h>

int main()
{   
    int n;
    int impar = 1;

    printf("\n\tImprimir os 'n' primeiros numeros naturais impares\n");
    printf("Digite um numero 'n': ");
    scanf("%i", &n);

    
    printf("Os %i primeiros impares sao:\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%i\n", impar);
        impar = impar + 2;
    }

    return 0;
}