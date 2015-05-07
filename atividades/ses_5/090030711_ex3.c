/*
    Arquivo: 090030711_ex3.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Pergunta ao usuário quantos valores devem ser lidos. A partir de então o usuário começa a fornecer estes valores. Ao final imprime o número de valores ímpares e pares.
*/

#include <stdio.h>

int isEven(int num){
    if(num%2==0)
        return 1;
    return 0;
}

int nOfValues;
int myArray[20];
int evenNumbers=0;

int main(){
    printf("How many values to read? Must be less than 20\n");
    scanf("%i", &nOfValues);
    printf("Please insert %i integer values:\n", nOfValues);
    for(int i=0; i<nOfValues; i++){
        scanf("%i", &myArray[i]);
        if(isEven(myArray[i])==1)
            evenNumbers++;
    }

    printf("\tThe number of even numbers is %i\n", evenNumbers);
    printf("\tThe number of odd numbers is %i\n", nOfValues-evenNumbers);
    return 0;
}
