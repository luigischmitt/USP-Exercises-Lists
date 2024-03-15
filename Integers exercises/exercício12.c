#include <stdio.h>

int main()
{
    int perfect = 0, number;
    printf("\n\tLet's find out if the number is perfect!\n");
    printf("\nType a number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            perfect += i;
        }
    }
    
    if (perfect == number)
        printf("The number %d is a perfect number!", number);   
    else
        printf("The number %d is NOT a perfect number!", number);

    return 0;
}