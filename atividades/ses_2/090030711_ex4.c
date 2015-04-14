/*
    Arquivo: 090030711_ex4.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Permite ao usuário realizar verificações a partir de um número escolhido
*/

#include <stdio.h>

int myInt, menuItem; /* Variables to store user input */

int checkEven(int testNumber){
    if ((testNumber%2)==0){
        printf("\tYes, number %i is even\n", testNumber);
        return 1;
    }
    
    else{
        printf("\tNo, number %i is not even!\n", testNumber);
        return 0;
    }
}

int checkOdd(int testNumber){
    if ((testNumber%2)==0){
        printf("\tNo, number %i is not odd!\n", testNumber); 
        return 0;
    }
    else{ 
        printf("\tYes, number %i is odd\n", testNumber); 
        return 1;
    }
}

int checkMultipleOf(int testNumber, int multiplier){
    if ((testNumber%multiplier)==0){
        printf("\tYes, %i is a multiple of %i\n", testNumber, multiplier);
        return 1;
    }
    else{
        printf("\tNo, %i is not a multiple of %i\n", testNumber, multiplier);
        return 0;
    }
}

int main(){
    printf("Please choose some integer number\n");
    scanf("%i", &myInt);
    printf("Now choose one of the operations to perform:\n");
    printf("\t1. Check if number is even\n\t2. Check if number is odd\n\t3. Check if number is a multiple of 3\n\t4. Check if number is multiple of 5\n\t5. Check if number is multiple of 7\n\t6. Perform all tests\n");
    scanf("%i", &menuItem);

    switch(menuItem){
        case (6): /* Case option 6, all tests below will be performed */
        case (1):
            checkEven(myInt);
            if (menuItem!=6)
                break;

        case (2):
            checkOdd(myInt);
            if (menuItem!=6)
                break;

        case (3):
            checkMultipleOf(myInt, 3);
            if (menuItem!=6)
                break;

        case (4):
            checkMultipleOf(myInt, 5);
            if (menuItem!=6)
                break;

        case (5):
            checkMultipleOf(myInt, 7);
            break;

        default:
            printf("This item does not exist in menu! Try again\n");
    }



}
