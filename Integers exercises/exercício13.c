#include <stdio.h>

int main()
{
    int a = 1, b = 1, c, n;
    printf("\n\tLet's find out the Fibonacci Sequence!\n");
    printf("\nType a number 'n' and we will find 'Fn': ");
    scanf("%d", &n);

    for (int i = 0; i < (n-2); i++) // (n - 2) because: 1,1,2,3,5.. and we start the sequence with at '2'
    {
        c = a + b;
        a = b;
        b = c;
    }
    
    printf("F%i = %i", n, c);

    return 0;
}