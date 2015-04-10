/*
    Arquivo: 090030711_ex5.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Recebe os coeficientes de uma equação quadrática (a, b e c) como entrada do usuário e calcula as raízes reais. Caso as entradas não forneçam raízes reais o cálculo não é realizado
    Observação: Para utilizar funções de math.h, incluir a biblioteca na compilação, por meio do argumento -lm
*/

#include <stdio.h>
#include <math.h> /* In order to be properly used, compile with -lm argument */

/* program variables */
float a, b, c, delta; /* variables for coefficients and delta */
float root1, root2;

int main(){

    printf("\nHello! Let's calculate the roots of a quadratic equation, described as ax^2 + bx + c = 0\n\n ");

    printf("Please insert value for the first coefficient (a)\n");
    scanf("%f", &a);

    printf("Now the value for the second coefficient (b)\n");
    scanf("%f", &b);

    printf("Now the value for the third coefficient (c)\n");
    scanf("%f", &c);

    delta = (b * b)-(4 * a * c);

    if(delta>=0){
        root1 = ((0 - b) - sqrt(delta)) / (2 * a);
        root2 = ((0 - b) + sqrt(delta)) / (2 * a);

        printf("\nThe roots for the equation %.2fx^2 + %.2fx + %.2f = 0 are:\n", a, b, c);
        printf("\tx1 = %.2f and \n\tx2 = %.2f\n", root1, root2);
    } 

    else{ /* Escapes in case roots are not real numbers*/
        printf("\nThe input coefficients do not provide real roots! Try again\n");
    }



    return 0;

    

    
}
