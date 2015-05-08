/*
    Arquivo: 090030711_ex6.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Calcula a média aritmética das idades de um grupo de pessoas, valores introduzidos pelo usuário
*/

#include <stdio.h>

int main(){
    int inputValue;  
    int counter=0;    
    int sum=0;
  
    printf("Please enter values to calculate a group of people's age mean\n");
    scanf("%i", &inputValue);
    while(inputValue != 0){
        if (inputValue > 0){
            sum += inputValue;
            counter++;
            scanf("%i", &inputValue);
        }
        else if(inputValue < 0){
            printf("Invalid age input! Must be bigger than zero\n");
            scanf("%i", &inputValue);
        }
    }

    if (counter!=0){
        float mean = (float)sum/counter;
        printf("\n\tmean is: %f\n", mean);
    }

    else
        printf("Escaped program before calculating mean\n");
    return 0;
}
