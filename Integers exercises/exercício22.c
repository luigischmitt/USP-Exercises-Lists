#include <stdio.h>

int main()
{
    int reverse = 0, a, b, n;
    printf("\t\nVerifying palindromes!\n");
    printf("\nType a number 'n' with (n >= 10): ");
    scanf("%d",&n);

    b = n;

    for (int i = 0; n != 0; i++)
    {
        a = n % 10;
        reverse = reverse * 10 + a;     // Preciso decorar esse conceito, muito inteligente!
        n /= 10;                        // mesma coisa que (n = n/ 10)
    }
    
    // Verificando se é um palíndromo
    if (b == reverse) {
        printf("%d is a palindrome!\n", b);
    } else {
        printf("%d is not a palindrome!\n", b);
    }

    return 0;
}