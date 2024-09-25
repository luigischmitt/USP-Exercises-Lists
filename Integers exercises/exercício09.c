#include <stdio.h>

int main()
{
    int Tn, aux;
    printf("\n\tIdentificador de numeros triangulares\n");
    printf("\nDigite um numero n (nao negativo): ");
    scanf("%i", &Tn);

    for (int n = 1; n <= 200; n++)
    {
        aux = (n*(n+1))/2;
        if (Tn == aux)
        {
            printf("O numero %i e' triangular!", Tn);
        }   else
        {
            printf("O numero %i nao e' triangular!", Tn);
            break;
        }
         
    }
    

    return 0;
}