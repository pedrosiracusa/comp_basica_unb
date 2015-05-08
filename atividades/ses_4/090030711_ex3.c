/*
    Arquivo: 090030711_ex3.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: A partir de um valor de entrada inteiro, computa o valor da soma total de 1 até o número
*/

#include <stdio.h>

int sumTo(int num){
    int sum=0;
    for(int i=1; i<=num; i++){
        sum+=i;
    }
    return sum;
}


int main(){
    int inputNum;
    printf("Please enter an integer. I will perform a sum of all smaller values into and including it:\n");
    scanf("%i", &inputNum); 
    while(inputNum>=0){
        printf("the sum equals to %i\n", sumTo(inputNum));
        printf("\nEnter another number. Enter a negative to quit\n");
        scanf("%i", &inputNum);
    }
    

    return 0;
}
