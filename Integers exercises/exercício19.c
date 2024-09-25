#include <stdio.h>
#include <math.h>

int main()
{
    int p1, p2, num;
    printf("\n\tIt prints all thousands (4 digits) whose square root is equal to the sum of the tens formed:\n");
    // For example: 9801 <=> 98 + 01 = 99 = sqrt(9801)

    for (num = 1000; num <= 9999; num++) 
    {
        p1 = num / 100;
        p2 = num % 100;
        if (num == (p1+p2) * (p1+p2))
            printf("%d ", num);
    }

    return 0;
}