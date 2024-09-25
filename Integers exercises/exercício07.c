#include <stdio.h>

int main() {

    int number, i, n, soma = 0;

    printf("\tDados n e uma seqüência de n números inteiros, determina a soma dos números pares.\n");
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o valor do %d o. numero: ", i);
        scanf("%d", &number);
        if (number % 2 == 0)
            soma += number;
    }
    
    printf("A soma dos numeros pares eh: %d\n", soma);

    return 0;
}
