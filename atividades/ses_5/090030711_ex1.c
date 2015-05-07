/*
    Arquivo: 090030711_ex1.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê cinco valores do tipo inteiro, armazena em um vetor W e imprime o vetor. 
    Entrada: cinco valores inteiros;
    Saída: cinco valores inteiros armazenados no vetor
*/

#include <stdio.h>

int main(){
    int i, W[5];

    /* le os valores e armazena numa variavel do tipo vetor */

    for(i=0; i<5; i++){
        printf("Digite o %do numero: \n", i+1);
        scanf("%d",&W[i]);
    }

    /* imprime na tela os valores armazenados no vetor W */

    for (i=0; i<5; i++){
        printf("O valor armazenado em W[%d] = %d \n", i, W[i]);
    }
    return 0;
}
