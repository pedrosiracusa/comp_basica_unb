/*
    Arquivo: 090030711_ex10.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê a matrícula, as notas de duas provas de sete alunos e as armazena em vetores. A seguir, calcula a média aritmética das notas e as armazena em um novo vetor. Ao final, imprime um relatório sobre cada aluno, com suas notas e média.
*/


#include <stdio.h>
#define NUM_OF_STUDS 7

int firstExam[NUM_OF_STUDS];
int secondExam[NUM_OF_STUDS];
float avg[NUM_OF_STUDS];
char ids[NUM_OF_STUDS][8];

int main(){
    for(int i=0; i<NUM_OF_STUDS; i++){
        printf("Student %i:\n", i+1);

        
        /* Input student id */
        printf("\tPlease insert student %i id:\n", i+1);
        scanf("%[^\n]", ids[i]);
        printf("Stud id: %s\n", ids[i]);
        
    
        /* Input first grade */
        printf("\tPlease insert grade on first exam:\n");
        scanf("%i", &firstExam[i]);
    
        /* Input second grade */
        printf("\tPlease insert grade on second exam:\n");
        scanf("%i", &secondExam[i]);
        getchar();
        
        /* Calculates average grade */
        avg[i]=(firstExam[i]+secondExam[i])/2.0;
        
    }
    
    /* Prints report */
    for(int i=0; i<NUM_OF_STUDS; i++){
        for(int j=0; j<8; j++)
            printf("%c", ids[i][j]);
            
        printf(":\t");
        printf("%i\t", firstExam[i]);
        printf("%i\t", secondExam[i]);
        printf("%.2f\n", avg[i]);        
        
    }
    
    
    return 0;
}
