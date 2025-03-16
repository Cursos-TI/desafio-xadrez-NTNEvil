#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // movimento da torre
    printf("Torre\n");
    // andando 5 casas para direita
    int movTorre = 5; // definindo o número de casas que a torre pode andar
    for (int i = 0; i < movTorre; i++){
        printf("Direita\n");
    }

    printf("\n");

    // movimento do bispo
    printf("Bispo\n");
    // andando 5 casas na diagonal cima e direita
    int movBispo = 5; // definindo o número de casas que o bispo pode andar
    int iBispo = 0;
    do {
        printf("Cima e Direita\n");
        iBispo++;
    } while (iBispo < movBispo);

    printf("\n");

    // movimento da rainha
    printf("Rainha\n");
    // andando oito casas para esquerda
    int movRainha = 8; // definindo o número de casas que a rainha pode andar
    int iRainha = 0;
    while (iRainha < movRainha) {
        printf("Esquerda\n");
        iRainha++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // movimento do cavalo
    printf("\nCavalo\n");
    // andando 2 casas para baixo e 1 para esquerda
    int movCavaloBaixo = 2; // definindo o número de casas que o cavalo pode andar para baixo
    int movCavaloEsquerda = 1; // definindo o número de casas que o cavalo pode andar para esquerda
    for (int i = 0; i < movCavaloEsquerda; i++) {
        for (int j = 0; j < movCavaloBaixo; j++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
