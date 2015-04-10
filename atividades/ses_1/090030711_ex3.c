/*
    Arquivo: 090030711_ex3.c
    Computação Básica - Turma G
    Nome: Pedro Correia de Siracusa
    Matrícula: 09/0030711
    Descrição: Possui três funcionalidades: 1) Ler e escrever os dados do usuário na tela; 2) Permutar variáveis(int) cujos valores são definidos pelo usuário; 3) Fornecer a média aritmética entre duas variáveis(int) definidas pelo usuário
*/

#include <stdio.h>

/* Define program variables */
char myName[100];
char myAddr[100];
int myAge;
int firstInteger;
int secondInteger;


int getUserData(){ /* Reads and then writes user data*/
    printf("\n  ---User Data Reading---\n");
    printf("First, I need to know your name\n");
    scanf("%[^\n]s", myName);
    printf("Now, please enter your address\n");
    getchar();
    scanf("%[^\n]s", myAddr);
    printf("Almost there! Now I need to know how old you are\n");
    scanf("%i", &myAge);

    printf("\n  ---User Data Printing---\n");
    printf("    So, your name is %s", myName);
    printf(",\n    your address is %s", myAddr);
    printf(",\n    and you are %i years old.\n", myAge);

    return 0;
}

int swapIntegers(int a, int b){
    printf("  Before swapping, first integer was %i and second integer %i\n", a, b);

    /* swapping work goes here */
    int x=a;
    a=b;
    b=x;

    printf("  After swapping, first integer became %i and second integer %i\n", a, b);
    return 0;
}

float avgIntegers(float a, float b){
    return((a+b)/2);
}


int main(){
    
    /* First item of the programming assignment */
    printf("-> Hello! Let's play with user data\n");
    getUserData();

    /* Second item of the programming assignment */
    printf("\n-> Now let's swap two integers. Choose first integer:\n");
    scanf("%i", &firstInteger);  
    printf("and now the second integer:\n");
    scanf("%i", &secondInteger);  
    swapIntegers(firstInteger, secondInteger);
    
    /* Third item of the programming assignment */
    printf("\n-> Last but not least, let's now play with some number averaging \n");
    printf("Enter first number - must be an integer!\n");
    scanf("%i", &firstInteger);
    printf("Enter second number - must be an integer!\n");
    scanf("%i", &secondInteger);
    printf("The result is %.2f\n", avgIntegers(firstInteger, secondInteger));


    return 0;
}
