/*
    Arquivo: 090030711_ex6.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê a temperatura média de cada mes do ano e imprime a maior e menor temperaturas, bem como os meses em que foram registradas.
*/

#include <stdio.h>

int monthsTemps[12];
int* highestTemp=&monthsTemps[0];
int* lowestTemp=&monthsTemps[0];

int main(){
    printf("Insert average temperatures for 12 months over a year\n");
    scanf("%i", &monthsTemps[0]);
    for(int i=1; i<12; i++){
        scanf("%i", &monthsTemps[i]);
        if(*highestTemp < monthsTemps[i])
            highestTemp = &monthsTemps[i];

        if(*lowestTemp > monthsTemps[i])
            lowestTemp = &monthsTemps[i];
    }
    
    /* Prints highest and lowest temperatures */
    for(int i=0; i<12; i++){
        if(&monthsTemps[i]==lowestTemp)
            printf("\tLowest temperature: %i on month %i\n", *lowestTemp, i+1);
        else if(&monthsTemps[i]==highestTemp)
            printf("\tHighest temperature: %i on month %i\n", *highestTemp, i+1);
    }
    
    
    return 0;
}
