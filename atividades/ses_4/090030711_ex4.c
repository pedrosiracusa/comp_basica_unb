/*
    Arquivo: 090030711_ex4.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Calcula em sequência cálculos fatoriais de números inseridos. Usuário define quantas vezes o cálculo fatorial irá ser realizado.
*/

#include <stdio.h>

int getFactorial(int num){
    int factorial=1;
    if(num==0)
        return factorial;

    for(int i=1; i<=num; i++){
        factorial=factorial*i;
    }

    return factorial;
}

int main(){

    int t; /* number of factorial calculations */
    int n; /* value from which to calculate factorial */

    printf("How many factorial calculations to perform?");
    scanf("%i", &t);
    
    for(int i=0; i<t; i++){
        printf("Please enter a number from which to calculate factorial\n");
        scanf("%i", &n);
        printf("%i! = %i\n", n, getFactorial(n));
    }
    
    printf("All %i calculations performed. Program will now quit\n", t);
    return 0;
}
