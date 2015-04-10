/*
    Arquivo: 090030711_ex7.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Calcula a média final do aluno baseada em três avaliações. Cada avaliação possui um peso na média.
*/

#include <stdio.h>

float firstGrade, secondGrade, thirdGrade, finalGrade;

int main(){

    printf("\nWelcome! Let's check if you passed this class!\n");
    printf("Please enter your grade in the first exam:\n");
    scanf("%f", &firstGrade);

    printf("Please enter your grade in the second exam:\n");
    scanf("%f", &secondGrade);

    printf("Please enter your grade in the third exam:\n");
    scanf("%f", &thirdGrade);

    finalGrade=((2*firstGrade)+(3*secondGrade)+(3*thirdGrade))/8;

    printf("Your final grade in this class is %.2f\n", finalGrade);
    
    return 0;

}
