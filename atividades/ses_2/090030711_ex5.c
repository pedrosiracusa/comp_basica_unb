/*
    Arquivo: 090030711_ex5.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê o Índice de Poluição (IP) fornecido pelo usuário e produz um pequeno relatório sobre a situação apresentada
*/

#include <stdio.h>

float polIndex;

int main(){
    printf("Please provide the Index of Pollution (IP)\n");
    scanf("%f", &polIndex);

    if (polIndex < 0.05){
        printf("\tLevels of Pollution are Below Normal\n");
    }

    else if (polIndex < 0.25){
        printf("\tLevels of Pollution are Normal\n");
    }

    else if (polIndex < 0.30){
        printf("\tState of Alert!\n");
    }

    else if (polIndex < 0.40){
        printf("\tIndustries of List A: Suspended Activities\n");
    }

    else if (polIndex <= 0.50){
        printf("\tIndustries of List A: Suspended Activities\n"
               "\tIndustries of List B: Suspended Activities\n");
    }

    else{
        printf("\tIndustries of List A: Suspended Activities\n"
               "\tIndustries of List B: Suspended Activities\n"
               "\tIndustries of List C: Suspended Activities\n");
    }
    return (0);
}

