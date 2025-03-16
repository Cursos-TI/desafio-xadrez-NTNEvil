#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0){
        printf("Cima e Direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {    

    // movimento da torre
    printf("Torre\n");
    // andando 5 casas para direita
    int movTorre = 5; // definindo o número de casas que a torre pode andar
    moverTorre(movTorre);

    printf("\n");

    // movimento do bispo
    printf("Bispo\n");
    // andando 5 casas na diagonal cima e direita
    int movBispo = 5; // definindo o número de casas que o bispo pode andar
    moverBispo(movBispo);

    printf("\n");

    // movimento da rainha
    printf("Rainha\n");
    // andando oito casas para esquerda
    int movRainha = 8; // definindo o número de casas que a rainha pode andar
    moverRainha(movRainha);

    // movimento do cavalo
    printf("\nCavalo\n");
    // andando 2 casas para cima e 1 para direita
    int movCavaloCima = 2; // definindo o número de casas que o cavalo pode andar para cima
    int movCavaloDireita = 1; // definindo o número de casas que o cavalo pode andar para direita
    for (int i = 0; i < movCavaloDireita; i++) {
        for (int j = 0; j < movCavaloCima; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    return 0;
}
