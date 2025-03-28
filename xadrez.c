#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    char torre[]= "direita", bispo1[] = "cima", bispo2[] = "Direita", rainha[] = "esquerda", cavalo1[] = "baixo", cavalo2[] = "esquerda";
    int i, j;

    printf("simulação de movimento de peças de chadez\n");

    i = 1;
    printf("torre : \n");
    do{
        printf("%s\n", torre);
        i++;
    }while(i <= 5);

    printf("\nbispo :\n");
    i = 1;
    while(i <= 5){
        printf("%s, %s\n", bispo1,bispo2);
        i++;
    }

    printf("\nrainha : \n");
    for(i = 1;i <= 8; i++ ){
        printf("%s\n", rainha);
    }

    printf("\ncavalo :\n");
    for(i = 1; i <= 1; i++){
        printf("%s\n",cavalo1);
        j = 1;
        while(j <= 2){
            printf("%s\n", cavalo2);
            j++;
        }
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
