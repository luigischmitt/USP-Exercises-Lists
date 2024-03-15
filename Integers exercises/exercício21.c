#include <stdio.h>

int main()
{
    int a = 0, b = 0, cont = 1, n;
    printf("\t\nDetermina o comprimento do segmento crescente em uma sequencia");
    printf("\nQual o tamanho da sua sequencia? ");
    scanf("%d", &n);

    printf("\nDigite os %d numeros da sequencia:\n", n);
    scanf("\n%d", &a);

    for (int i = 1; i < n; i++) {
        scanf("%d", &b);
        if (b > a)
            cont++;
        a = b;
    }

    printf("O comprimento do segmento crescente maximo eh %d", cont);

    return 0;
}