/*
    Arquivo: 090030711_ex2.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê seis números do usuário, armazena-os em um vetor e informa quantos são pares e quantos são ímpares
*/

#include <stdio.h>

int isEven(int num){
    if(num%2==0)
        return 1;
    return 0;
}

int myArray[6];
int evenNumbers=0;

int main(){
    printf("Please insert 6 integer values:\n");
    for(int i=0; i<6; i++){
        scanf("%i", &myArray[i]);
        if(isEven(myArray[i])==1)
            evenNumbers++;
    }

    printf("\tThe number of even numbers is %i\n", evenNumbers);
    printf("\tThe number of odd numbers is %i\n", 6-evenNumbers);
    return 0;
}
