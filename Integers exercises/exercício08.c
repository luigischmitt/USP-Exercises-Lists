#include <stdio.h>

int main() {

    int fatorial = 1, n;

    printf("\nDado um inteiro não-negativo n, determinar n!\n");
    printf("Digite o valor de n: ");
    scanf("%i", &n);

    for (; 1 <= n; n--) {
        fatorial *= n;
    }
    
    printf("O fatorial de n vale: %i\n", fatorial);

    return 0;
}
