/*
    Arquivo: 090030711_ex3.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Imprime o valor de n!, com o valor de n informado pelo usuário
*/

#include <stdio.h>

int getFactorialOf(int n){
        int counter = 1;
        int factorial = 1;
        if (n>=0){    
            while(counter <= n){
                factorial=factorial*counter;
                counter += 1;
            }
            return factorial;
        }
        return 0; /* Return 0 if n is smaller than zero */
}

int main(){
    int myInteger;

    printf("\n Please enter a positive integer for factorial calculation:\n");
    scanf("%i", &myInteger);
    while(getFactorialOf(myInteger)==0){
        printf("Invalid input. Please choose a positive integer or zero\n");
        scanf("%i", &myInteger);
    }
    printf("The factorial of %i is %i\n", myInteger, getFactorialOf(myInteger));

    return 0;
}
