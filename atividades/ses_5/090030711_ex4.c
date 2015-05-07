/*
    Arquivo: 090030711_ex4.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê continuamente valores inseridos pelo usuário, até que seja inserido o valor -1. Estes valores são armazenados em um vetor e então o programa fornece o número de valores pares e ímpares.
*/

#include <stdio.h>

int isEven(int num){
    if(num%2==0)
        return 1;
    return 0;
}

int myArray[20];
int evenNumbers=0;
int currentNum;

int main(){
    int cntr=0;

    printf("Please insert some integer values. When done insert -1\n");
    scanf("%i", &currentNum);

    while(currentNum!=-1){
        myArray[cntr]=currentNum;
        cntr++;

        printf("Next input:\n");
        scanf("%i", &currentNum);
    }

    for(int i=0; i<cntr; i++){
        if(isEven(myArray[i])==1)
            evenNumbers++;
    }

    printf("\tThe number of even numbers is %i\n", evenNumbers);
    printf("\tThe number of odd numbers is %i\n", cntr-evenNumbers);
    return 0;
}
