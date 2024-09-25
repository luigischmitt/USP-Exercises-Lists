#include <stdio.h>

int main() {
    int count = 0, num = 0, n, i, j;

    printf("\tDados n e dois números naturais i e j, imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j ou de ambos.\n");
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    printf("Digite o valor de j: ");
    scanf("%d", &j);

    while (count < n) {
        if (num % i == 0 || num % j == 0) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    puts("");

    return 0;
}
