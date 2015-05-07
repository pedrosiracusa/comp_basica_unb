/*
    Arquivo: 090030711_ex7.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê um vetor e retira os valores iguais a zero, fornecendo ao final um vetor compactado.
*/

#include <stdio.h>
#define SIZE_OF_ARRAY 100

int originArray[SIZE_OF_ARRAY];
int main(){
    int cntr=-1;
    int zerosCount=0;
    /* Populates origin array and counts how many zeros */
    do{
        cntr++;
        scanf("%i", &originArray[cntr]);
        if(originArray[cntr]==0)
            zerosCount++;
    }while(originArray[cntr]!=-1 && cntr < SIZE_OF_ARRAY+1);

    /* Processing compacted array */
    int compactArraySize = cntr-zerosCount;
    int compactArray[compactArraySize];/* Compacted array without zeros */
    int j=0; /* index of originArray for iteration */
    for(int i=0; i < compactArraySize; i++){
        while(originArray[j]==0){/* skips zero values on origin array */
            j++;
        }
        compactArray[i] = originArray[j]; /* non-zero values are inserted */      
        j++;
    }

    /* prints compacted array */
    for(int i=0; i<compactArraySize; i++)
        printf("array[%i] = %i\n", i, compactArray[i]);

    return 0;
}
