/*
    Arquivo: 090030711_ex7.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê informações básicas sobre alunos e imprime sua matrícula, nome e média ponderada de 3 avaliações
*/

#include <stdio.h>
#include <string.h>

float getAverage(float firstNum, float secondNum, float thirdNum){
    float average;
    average=((firstNum*2)+(secondNum*4)+(thirdNum*4))/10;
    return average;
}

int main(){
    char stdntId[20];
    char stdntName[50];
    int firstGrade, secondGrade, thirdGrade;
    int counter = 0;

    printf("Student %i:\n\tEnter student id:\n", counter);
    scanf("%s", stdntId);
    getchar();
    while(strcmp("0", stdntId) != 0){ /* Continue while stdnt id is not zero */
        printf("\tEnter student name:\n");
        scanf("%[^\n]s", stdntName);
        getchar();
        printf("\tEnter grade from first exam:\n");
        scanf("%i", &firstGrade);
        while (firstGrade<0 || firstGrade>10){
            printf("Invalid grade input. Must be between 0 and 10\n");
            scanf("%i", &firstGrade);
        }
           
        printf("\tEnter grade from second exam:\n");
        scanf("%i", &secondGrade);
        while (secondGrade<0 || secondGrade>10){
            printf("Invalid grade input. Must be between 0 and 10\n");
            scanf("%i", &secondGrade);
        }
            
        printf("\tEnter grade from third exam:\n");
        scanf("%i", &thirdGrade);
        while (thirdGrade<0 || thirdGrade>10){
            printf("Invalid grade input. Must be between 0 and 10\n");
            scanf("%i", &thirdGrade);
        }
           
        
        printf("\n\tStudent %i\n", counter);
        printf("\t=====================\n");
        printf("\tStudent ID: %s\n", stdntId);
        printf("\tStudent Name: %s\n", stdntName);
        printf("\tStudent Average Grade: %.2f\n", getAverage(firstGrade, secondGrade, thirdGrade));
        printf("\t=====================\n\n");

        /* New student id */
        counter++;
        printf("Student %i:\n\t Enter student id:\n", counter);
        scanf("%s",stdntId);
        getchar();
    }
    
    return 0;
}
