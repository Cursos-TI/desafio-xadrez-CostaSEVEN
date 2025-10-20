#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Movimento da Torre (Utiliza for)
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++)
    {
        printf("Direita\n");
    }
    
    printf("\n");

    //Movimento do Bispo (utiliza while)
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo)
    {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    
    printf("\n");

    //Movimento da Rainha (Utiliza Do-While)
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha:\n");
    do
    {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");
    
    // Movimento do Cavalo (Utiliza for + While)

    int casasParaBaixo = 2;
    int casasParaEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    //Loop para casas de baixo (For)
    for (int i = 1; i <= casasParaBaixo; i++)
    {
        printf("Baixo\n");  
    }
    
    //Loop  para casa da esquerda (While)
    int contadorEsquerda = 1;
    while (contadorEsquerda <= casasParaEsquerda)
    {
        printf("Esquerda\n");
        contadorEsquerda++;
    }
    
    

    return 0;
}
