#include <stdio.h>

int main() 
{
  int number, square; 
  
  printf("\n\tCalculo dos quadrados de uma sequencia de numeros\n");
  printf("\nEntre com uma sequencia de numeros inteiros nao-nulos, seguida por 0:\n");
  scanf("%d", &number);
  
  while (number != 0) {
    square = number * number;
    printf("O quadrado do numero %d eh %d\n", number, square);
    scanf("%d", &number);
  }

  return 0;
}