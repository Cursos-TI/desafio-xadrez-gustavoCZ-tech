#include <stdio.h>

char cavalo1[] = "baixo", cavalo2[] = "esquerda";
int i = 1, j;

void movimentotorre(){
    printf("torre : ");
    printf("5 casas para a direita\n");
}

void movimentobispo(){

    printf("bispo : ");
    printf("5 casas na diagonal direita para cima\n");
    
}


void movimentorainha(){
    printf("rainha : ");
    printf(" 8 casas para a esquerda\n");
}


void movimentocavalo(){
    printf("\ncavalo :\n");
    for(i = 1; i <= 1; i++){
        printf("%s\n",cavalo1);
        j = 1;
        while(j <= 2){
            printf("%s\n", cavalo2);
            j++;
        }
        printf("\n");
    }
}

int main() {

    printf("simulação de movimento de peças de chadez\n");
    
    movimentotorre();
    movimentobispo();
    movimentorainha();
    movimentocavalo();



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
