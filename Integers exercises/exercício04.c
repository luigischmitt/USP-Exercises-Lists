#include <stdio.h>
#include <math.h>

int main()
{
    double x, n, result;

    printf("\n\tCalcula o resultado de x^n:\n");
    printf("\nDigite um numero para o valor de x: ");
    scanf("%lf", &x);
    printf("Digite um numero para o valor de n: ");
    scanf("%lf", &n);    

    if (n != 0)
    {
        result = pow(x, n);
        printf("\nO resultado de %.1lf elevado a %.1lf = %.1f", x, n, result);
    }

    return 0;
}