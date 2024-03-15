#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\n\tInput 3 numbers and see them in ascending order!");
    printf("\nType the 3 random numbers: ");
    scanf("%d %d %d", &a,&b, &c);

    if (a < b && a < c) {
        printf("%i ", a);
        if (b < c)
            printf("%i %i", b, c);
        else
            printf("%i %i", c, b);    
    }

    if (b < a && b < c) {
        printf("%i ", b);
        if (a < c)
            printf("%i %i", a, c);
        else
            printf("%i %i", c, a);
    }


    if (c < a && c < b) {
        printf("%i ", c);
        if (a < b)
            printf("%i %i", a, b);
        else
            printf("%i %i", b, a);
    }

    return 0;
}