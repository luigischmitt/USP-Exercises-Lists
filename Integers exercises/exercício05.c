#include <stdio.h>

int main() {
    int vendas_marco[31]; // Array para armazenar as vendas em cada dia de março
    int max_vendas = 0; // Variável para armazenar a quantidade máxima de vendas
    int dia_max_vendas = 0; // Variável para armazenar o dia com a maior venda
    int dia;

    // Preencher o array com as vendas em cada dia de março
    printf("\n\tDigite a quantidade de discos vendidos em cada dia de marco:\n");
    for (dia = 1; dia <= 31; dia++) {
        printf("Dia %d: ", dia);
        scanf("%d", &vendas_marco[dia - 1]);

        // Verificar se a venda atual é maior que a venda máxima até agora
        if (vendas_marco[dia - 1] > max_vendas) {
            max_vendas = vendas_marco[dia - 1];
            dia_max_vendas = dia;
        }
    }

    // Exibir o dia com a maior venda e a quantidade de discos vendida nesse dia
    printf("\nO dia com maior venda em marco foi o dia %d, com %d discos vendidos.\n", dia_max_vendas, max_vendas);

    return 0;
}
