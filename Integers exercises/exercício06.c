#include <stdio.h>

int main()
{
    int n, nota, maior = 0, menor = 0;

    printf("\n\tNota dos alunos em Introducao aos Automatos a Pilha (MAC 414)\n");
    printf("\nQual a quantidade de alunos na turma? ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Qual a nota do %io. aluno: ", i);
        scanf("%i", &nota);
        if (nota > maior)
        {
            maior = nota;
        }
        menor = nota;
        if (nota < menor)
        {
            menor = nota;
        }
    }
    
    printf("A maior nota da turma foi %i e a menor foi %i", maior, menor);

    return 0;
}