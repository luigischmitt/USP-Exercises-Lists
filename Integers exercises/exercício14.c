#include <stdio.h>

int main()
{
    int n, i, j, m;
    printf("\n\tVerificador de numeros congruentes modulo\n");
    printf("\nDigite o valor de 'm': ");
    scanf("%i", &m);
    printf("Digite o valor de 'j': ");
    scanf("%i", &j);
    printf("Digite o valor de 'n' :");
    scanf("%i", &n);

    printf ("Os %d primeiros naturais congruentes a %d modulo %d sao: ",n, j, m);
    for (i = 0; n != 0; i++)
    {
        if (i % m == j % m) {
            printf("%i ", i);
             n--;
        }
    }   
    printf("\n");
    
    return 0;
}