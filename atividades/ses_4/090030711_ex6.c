/*
    Arquivo: 090030711_ex6.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Realiza quatro exponenciações com base e expoente inseridos pelo usuário. Esta versão aceita valores negativos para expoente e base.
*/

#include <stdio.h>
#include <stdlib.h>

float numToPowerOf(float number, int power){
    float result=1;   
    for(int i=1; i<=abs(power); i++)
        result=number*result;  
    if(power<0)
        return (1.0/result);
    else
        return result;
}


int main(){
    float x;
    int k;

    printf("\nLet's calculate the value of x^k\n");
    for(int i=1;i<=4;i++){
        printf("Enter any pair of values (x k)\n");
        scanf("%f %i", &x, &k);
        printf("%.2f to the power of %i equals %.2f\n", x, k, numToPowerOf(x,k));
        
    }
    printf("Performed 4 operations. Program is quitting now\n");

    
    return 0;
}

