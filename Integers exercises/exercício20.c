#include <stdio.h>

int main()
{
    int anterior , atual, cont, n;
    printf("\t\nEnter the quantity of numbers in the sequence: ");
    scanf("%d", &n);

    printf("\nType the %d numbers of the sequence:\n", n);
    
    scanf("%d", &anterior);   
    cont = 1;                 

    for (int i = 2; i <= n; i++) {
        scanf("%d", &atual);    
        if (atual != anterior) {  
            cont = cont + 1;     
            anterior = atual;
        }
    }

    printf("There are %d segments of equal numbers!", cont);

    return 0;
}