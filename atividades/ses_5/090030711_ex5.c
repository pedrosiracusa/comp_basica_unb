/*
    Arquivo: 090030711_ex5.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê 9 valores inteiros do usuário, armazena-os em um vetor e imprime quais são menores que zero. Também fornece as posições em que estes números estão armazenados.
*/

#include <stdio.h>
#define NUM_OF_VALUES 9

int myArray[NUM_OF_VALUES]; /* Stores input values */
int smallerThanZero[NUM_OF_VALUES]={0}; /* An auxiliary array to store whether numbers at indexes i are positive or negative */


int main(){
    printf("Please insert 9 integer values:\n");

    /* Build up array */
    for(int i=0; i<NUM_OF_VALUES; i++){
        scanf("%i", &myArray[i]);
        /* If number is smaller than zero, update auxiliary array */
        if(myArray[i]<0) 
            smallerThanZero[i]=1;
    }

    /* Retrieve numbers */
    for(int i=0; i<NUM_OF_VALUES; i++){
        if(smallerThanZero[i]==1)
            printf("\tNumber %i @ position %i is smaller than zero\n", myArray[i], i+1);
    }

    return 0;
}
