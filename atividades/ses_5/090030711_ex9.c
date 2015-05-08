/*
    Arquivo: 090030711_ex9.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê as notas de duas provas de sete alunos e as armazena em vetores. A seguir, calcula a média aritmética das notas e as armazena em um novo vetor.
*/

#include <stdio.h>
#define NUM_OF_STUDS 7

int firstExam[NUM_OF_STUDS];
int secondExam[NUM_OF_STUDS];
float avg[NUM_OF_STUDS];

int main(){
    for(int i=0; i<NUM_OF_STUDS; i++){
        printf("Student %i:\n", i+1);
    
        /* Input first grade */
        printf("\tPlease insert grade on first exam:\n");
        scanf("%i", &firstExam[i]);
    
        /* Input second grade */
        printf("\tPlease insert grade on second exam:\n");
        scanf("%i", &secondExam[i]);
        
        /* Calculates average grade */
        avg[i]=(firstExam[i]+secondExam[i])/2.0;
        
    }
    
    for(int i=0; i<NUM_OF_STUDS; i++){
        printf("Student %i:\t", i+1);
        printf("%i\t", firstExam[i]);
        printf("%i\t", secondExam[i]);
        printf("%.2f\n", avg[i]);        
        
    }
    
    
    return 0;
}
