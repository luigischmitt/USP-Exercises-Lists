// Dado um inteiro positivo n, determinar todos os inteiros entre 1 e n que são comprimento da hipotenusa de um triângulo retângulo com catetos inteiros.

#include <stdio.h>

int main() {

    int n;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    for (int c = 1; c <= n; c++) {
        for (int a = 1; a <= n; a++) {
            for (int b = a; b <= n; b++) {
                if (c*c == a*a + b*b){
                    printf("%d\n", c);
                }
            }
        }
    }
    
    return 0;
}
