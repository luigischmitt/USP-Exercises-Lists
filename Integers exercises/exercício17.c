#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\n\tLets check if it forms a Right Triangle!");
    printf("\nType the 3 sides of the triangles: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c && a*a == b*b + c*c)
        printf("It's a right triangle!");
    else if (b > a && b > c && b*b == a*a + c*c) {
        printf("It's a right triangle!"); 
    }
    else if (c > a && c > b && c*c == a*a + b*b)
        printf("It's a right triangle!");
    else
        printf("It's NOT a right triangle!");

    return 0;
}