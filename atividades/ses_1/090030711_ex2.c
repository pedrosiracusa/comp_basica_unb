/*
    Arquivo: 090030711_ex2.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Imprime na tela valores pré-definidos das constantes. Em seguida captura valores para as variáveis inseridas pelo usuário e finalmente as imprime na tela.
*/

#include <stdio.h>

/*Define constants*/
const int CONST_I=5;
const float CONST_R=3.14;
const char CONST_C='a';
const char CONST_S[6]="Abaco";

/*Define variables*/
int myInt;
float myFloat;
char myChar;
char myCharArray[100];


int main(){

    printf("constant of type int: %i \n", CONST_I);
    printf("constant of type float: %f \n", CONST_R);
    printf("constant of type char: %c \n", CONST_C);
    printf("constant of type char Array: %s \n\n", CONST_S);

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
