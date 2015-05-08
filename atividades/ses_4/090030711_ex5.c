/*
    Arquivo: 090030711_ex5.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Realiza quatro exponenciações com base e expoente inseridos pelo usuário. Os números devem ser inteiros e positivos
*/

#include <stdio.h>

int numToPowerOf(int number, int power){
    int result=1;
    for(int i=1; i<=power; i++)
        result=number*result;
      
    return result;
}

int main(){
    int x;
    int k;

    printf("\nLet's calculate the value of x^k\n");
    for(int i=1;i<=4;i++){
        do{
            printf("Enter positive pair of values (x k)\n");
            scanf("%i %i", &x, &k);
        }while(x<0 || k<0);
        printf("%i to the power of %i equals %i\n", x, k, numToPowerOf(x,k));
        

    }
    printf("Performed 4 operations. Program is quitting now\n");

    
    return 0;
}
