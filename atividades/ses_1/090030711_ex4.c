/*
    Arquivo: 090030711_ex4.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Realiza o cálculo do volume de um cilindro circular, a partir de valores de entrada para o raio e a altura.
*/


#include <stdio.h>
#define M_PI 3.14159265358979323846	/* pi */


float getCylinderVolume(float r, float h){
    float volume=M_PI*(r*r)*h;
    return volume;
}

int main(){  
    float inputRadius;
    float inputHeight;
    float outputVolume;

    printf("Welcome! Let's calculate the volume of a circular cylinder.\n");
  
    printf("  First give me the radius of the cylinder\n");
    scanf("%f",&inputRadius);

    printf("  Now the height of the cylinder\n");
    scanf("%f",&inputHeight);

    outputVolume=getCylinderVolume(inputRadius, inputHeight);
    
    printf("\t------------------------------------\n");
    printf("\tYour cylinder has a radius of %.2f\n", inputRadius);
    printf("\tYour cylinder has a height of %.2f\n", inputHeight);
    printf("\tYour cylinder has a volume of %.4f\n", outputVolume);
    printf("\t------------------------------------\n");
}
