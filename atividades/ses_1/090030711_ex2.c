/*
    Arquivo: 090030711_ex2.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Imprime na tela valores pré-definidos das constantes. Em seguida captura valores para as variáveis inseridas pelo usuário e finalmente as imprime na tela.
*/

#include <stdio.h>

/*Define constants*/
const int const_i=5;
const float const_r=3.14;
const char const_c='a';
const char const_s[5]="Abaco";

/*Define variables*/
int myInt;
float myFloat;
char myChar;
char myCharArray[100];


int main(){

    printf("constant of type int: %i \n", const_i);
    printf("constant of type float: %f \n", const_r);
    printf("constant of type char: %c \n", const_c);
    printf("constant of type char Array: %s \n\n", const_s);

    printf("Insert a value for variable of type int:\n");
    scanf("%i", &myInt);

    printf("Insert a value for variable of type float:\n");
    scanf("%f", &myFloat);
    getchar();

    printf("Insert a value for variable of type char:\n");
    scanf("%c", &myChar);

    printf("Insert a value for variable of type string:\n");
    scanf("%s", myCharArray);

    printf("\n");
    printf("You have assigned value \'%i\' to int variable\n", myInt);
    printf("You have assigned value \'%f\' to float variable\n", myFloat);
    printf("You have assigned value \'%c\' to char variable\n", myChar);
    printf("You have assigned value \'%s\' to string variable\n", myCharArray);

    return(0);
}
