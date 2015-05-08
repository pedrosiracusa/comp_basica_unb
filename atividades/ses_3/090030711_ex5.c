/*
    Arquivo: 090030711_ex5.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Calcula a quantidade de casais de coelhos após n meses, em que n é fornecido pelo usuário.
*/

#include <stdio.h>


int fib(int n){
    int i, j, sum, cnt;
    i=0;
    j=1;
    sum=1;
    cnt=1;

    if(n < 2){
        switch(n){
            case 0:
                return 0;

            case 1:
                return 1;

            default:
                return -1; /* Returns -1 if input is a negative number */
        }
    }

    while(cnt < n){
        sum = i+j;
        i = j;
        j = sum;
        cnt++;
    }

    return sum;
}

int main(){
    int numOfMonths;    

    printf("This program will calculate how many rabbit couples there are in a population after the specified number of months.\n");
    printf("Enter the number of months\n");
    scanf("%i", &numOfMonths);

    while(fib(numOfMonths) < 0){
        printf("Invalid input! Number of months cannot be negative. Try again\n");
        scanf("%i", &numOfMonths);
    }
    printf("There are %i couples in this population\n",fib(numOfMonths));

    return 0;
}
