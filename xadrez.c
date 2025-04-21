#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

    for (int i = 0; i < 5; i++)
    {
        printf("Movimento da Torre: Direita\n"); // Movimento da Torre: cinco casas para a direita
    }

    printf("\n");

    printf("Movimento do bispo: Diagonal\n"); // Movimento do bispo: diagonal
    int b = 1;
    while (b <= 5)
    {
        printf("Cima, Direita\n");
        b++;
    }

    printf("\n");

    // Movimento da Rainha: oito casas para a esquerda (utilizando do-while)
    printf("Movimento da Rainha:\n");
    int k = 1;
    do
    {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimentos do Cavalo:
    printf("\n"); // Linha em Branco (Pular linha)

    printf("Movimento do cavalo: \n"); // Titulo movimento
    for (int c = 1; c <= 2; c++) // Movendo duas casas para baixo (usando um loop for)
    {
        printf("Baixo\n");
    }

    // Movendo uma casa para a esquerda (usando um loop while)
    int j = 0;
    while (j < 1)
    {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
