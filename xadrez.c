#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverBispo(int casas) {

   if(casas > 0){  // testa se o numero ded casas é maior do que zero
	 int numero = 1; // variavel para controle dos loops

	 while(numero > 0){ // loop externo - vertical
	     printf("BISPO - ACIMA/");

		do { // loop interno - horizontal
		  printf("DIREITA\n");	
		} while( numero < 1);

	    numero--; 
	 }

	 moverBispo(casas - 1);
   }
}


void moverTorre(int casas) {
    if(casas > 0){
        printf("TORRE - DIREITA\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if(casas > 0){
        printf("RAINHA - ESQUERDA\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int movimentoBispo = 1;
    printf("*** MOVIMENTO DO BISPO (5 casas na diagonal para cima a direita) ***\n");
    while(movimentoBispo <= 5){
        printf("BISPO - CIMA/DIREITA\n");
        movimentoBispo++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int movimentoTorre = 1;
    printf("\n*** MOVIMENTO DA TORRE (5 casas para direita) ***\n");
    do {
        printf("TORRE - DIREITA\n");
        movimentoTorre++;
    }while(movimentoTorre <= 5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
     printf("\n*** MOVIMENTO DA RAINHA (8 casas para esquerda) ***\n");
     for(int movimentoRainha = 1; movimentoRainha <= 8; movimentoRainha++) {
         printf("RAINHA - ESQUERDA\n");
     }


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int movimentoCavalo = 1;
    printf("\n*** MOVIMENTO DA CAVALO (2 casas para baixo e uma casa  para esquerda) ***\n");
    while(movimentoCavalo == 1) {

        for(int i = 1; i <= 2; i++){
            printf("CAVALO - BAIXO\n"); 
        }

        printf("CAVALO - ESQUERDA\n");
        ++movimentoCavalo;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    printf("\n*** MOVIMENTO DA BISPO - recursividade) ***\n");
    moverBispo(5);

    printf("\n*** MOVIMENTO DA TORRE - recursividade) ***\n");
    moverTorre(5);

    printf("\n*** MOVIMENTO DA RAINHA - recursividade) ***\n");
    moverRainha(8);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\n*** MOVIMENTO DA CAVALO (variaveis multiplas e condições avançadas) ***\n");

    for(int i = 0 , j = 0; i < 5 && j < 5; i++, j++){
        
        if( (i + j) < 4 ) {
            printf("CAVALO - CIMA\n");
           continue;
        } else {
            printf("CAVALO - DIREITA\n");
            break;
        }
    }

    return 0;
}
