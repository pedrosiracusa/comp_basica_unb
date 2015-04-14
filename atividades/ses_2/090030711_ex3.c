/*
    Arquivo: 090030711_ex3.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: 
*/

#include <stdio.h>
#include <math.h>

/* Variables for storing user input */
float input1, input2, input3;

int getQuadraticRoots(float a, float b, float c){
    float delta, root1, root2;
    //TODO
    delta = (pow(b,2))-(4 * a * c);
    if(delta >=0){
        root1 = ((0 - b) - sqrt(delta)) / (2 * a);
        root2 = ((0 - b) + sqrt(delta)) / (2 * a);
        printf("The roots for the equation %.2fx² + %.2fx + %.2f are:\n\troot 1: %.2f;\n\troot 2: %.2f\n", a, b, c, root1, root2);
    }
    else{
        printf("\nThe input coefficients do not provide real roots! Try again\n");
    }

     return 0;
}

int main(){
    printf("Please enter first coefficient (a): ");
    scanf("%f", &input1);

    printf("Please enter second coefficient (b): ");
    scanf("%f", &input2);

    printf("Please enter thrid coefficient (c): ");
    scanf("%f", &input3);

    getQuadraticRoots(input1, input2, input3);
    return 0;   
}
