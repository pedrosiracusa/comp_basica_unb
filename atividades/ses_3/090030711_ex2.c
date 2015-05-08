/*
    Arquivo: 090030711_ex2.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Imprime o valor da soma dos números de 1 a 10. Não há entrada do usuário
*/

#include <stdio.h>

int sumToInt(int myInt){
    /* Returns the sum of all the integers between and including one and the input integer */
    int sum = 0;
    int counter = 1;
    while(counter <= myInt){
        sum += counter;
        counter++;
    }
    return sum;
}

int main(){
    printf("%i\n", sumToInt(10));
    return 0;
}
