/*
    Arquivo: 090030711_ex4.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Calcula a soma de 1 + 1/2 + 1/4 + 1/6 + ... + 1/200. Não há entrada de usuário
*/

#include <stdio.h>


float inverseSumTo(int finalDenom){
    int denom=2;
    float sum=1;
    while(denom <= finalDenom){
        sum += (1.0/(denom));
        denom += 2;
    }
    return sum;
}


int main(){
    printf("Answer is %f\n", inverseSumTo(200));
    return 0;
}
