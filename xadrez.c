#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

// Movimentação recursiva da Torre (somente na vertical)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorre(casas - 1);
}

// Movimentação recursiva do Bispo (diagonal)
void moverBispo(int x, int y) {
    if (x == 0 || y == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(x - 1, y - 1);
}

// Movimentação recursiva da Rainha (vertical)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverRainha(casas - 1);
}

// Movimentação complexa do Cavalo (usando loops aninhados)
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

int main() {
    printf("Movimentos das peças:\n\n");

    // Torre move 3 casas para cima
    printf("Movimento da Torre:\n");
    moverTorre(3);
    printf("\n");

    // Bispo move 2 casas na diagonal
    printf("Movimento do Bispo:\n");
    moverBispo(2, 2);
    printf("\n");

    // Rainha move 4 casas para cima
    printf("Movimento da Rainha:\n");
    moverRainha(4);
    printf("\n");

    // Cavalo se move em "L"
    moverCavalo();

    return 0;
}