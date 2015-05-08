/*
    Arquivo: 090030711_ex8.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Cria e popula dois vetores (X e Y) a partir das entradas do usuário. Em seguida, constrói um vetor U que armazena a união entre X e Y e um vetor I que armazena a interseção entre X e Y.
*/

#include <stdio.h>
#define SIZE_OF_ARRAY 10

int existsInArray(int element, int *myArray){
    for(int i=0; i<SIZE_OF_ARRAY; i++)
        if(myArray[i]==element)
            return 1;
    
    return 0;
}

int main(){
    int X[SIZE_OF_ARRAY];
    int Y[SIZE_OF_ARRAY];

    /* Build up first array */
    printf("Please insert %i values for first array:\n", SIZE_OF_ARRAY);
    for(int i=0; i < SIZE_OF_ARRAY; i++){
        scanf("%i", &X[i]);
    }

    /* Build up second array */
    printf("Please insert %i values for second array:\n", SIZE_OF_ARRAY);
    for(int i=0; i < SIZE_OF_ARRAY; i++){
        scanf("%i", &Y[i]);
    }


    /* Build union array */
    int U[SIZE_OF_ARRAY * 2]; 
    int i =0;
    for(int j=0; j<SIZE_OF_ARRAY; j++){
        U[i]=X[j];
        i++;
    }

    for(int j=0; j<SIZE_OF_ARRAY; j++){
        U[i]=Y[j];
        i++;
    }
           

    /* Build intersection array */
    int I[SIZE_OF_ARRAY]; /* Intersection array */
    int iCntr=0; /* Counts how many elements are signifficative in this array */

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){/* Searches a match in the second array */
            if(X[i]==Y[j] && existsInArray(X[i], I)==0){ /* Checks if element already exists in I array */
                I[iCntr]=X[i];
                iCntr++;
            }
        }
    }
    
    /* Prints first array */
    printf("\nThis is the first array:\n");
    for(int i=0; i<SIZE_OF_ARRAY; i++){
        printf("\tX[%i] = %i\n", i, X[i]);
    }

    /* Prints second array */
    printf("\nThis is the second array:\n");
    for(int i=0; i<SIZE_OF_ARRAY; i++){
        printf("\tY[%i] = %i\n", i, Y[i]);
    }

    /* Prints Union array */
    printf("\nThis is the Union array:\n");
    for(int i=0; i<SIZE_OF_ARRAY*2; i++){
        printf("\tU[%i] = %i\n", i, U[i]);
    }
     
    /* Prints Intersection array */
    printf("\nThis is the Intersection array:\n");
    for(int i=0; i<iCntr; i++)
        printf("\tI[%i] = %i\n", i, I[i]);
    
      
    
    return 0;
}
