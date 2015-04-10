/*
    Arquivo: 090030711_ex6.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Calcula a hipotenusa de um triângulo retângulo, com base nas entradas do usuário para cada um dos catetos.
    Observação: Para utilizar funções de math.h, incluir a biblioteca na compilação, por meio do argumento -lm ao final do comando de compilação
*/

#include <stdio.h>
#include <math.h> /* In order to be properly used, compile with -lm argument */

float myLeg1, myLeg2;

float getTriangleHypotenuse(float leg1, float leg2){
    float hypotenuse = sqrt((leg1*leg1)+(leg2*leg2));
    return hypotenuse;
}

int main(){
    printf("\nWelcome! Let's calculate the hypotenuse of a right triangle\n");
    printf("First give-me a value for the first leg\n");
    scanf("%f", &myLeg1);

    printf("Now a value for the second leg\n");
    scanf("%f", &myLeg2);

    printf("\tThe hypotenuse of your triangle has a length of %.2f\n\n", getTriangleHypotenuse(myLeg1, myLeg2));


    return 0;
}
