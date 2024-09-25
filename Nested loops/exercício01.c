// Dados um inteiro positivo n e n sequências de números inteiros, cada qual terminada por 0, calcular a soma dos números pares de cada sequência.

#include <stdio.h>

int main() {

    int x, n, somaPar = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            scanf("%d", &x);
            if (x % 2 == 0){
                somaPar += x;
            }
        }
    }

    printf("Soma dos pares vale: %d\n", somaPar);
    
    return 0;
}
