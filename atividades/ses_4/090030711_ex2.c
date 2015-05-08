/*
    Arquivo: 090030711_ex2.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Imprime os números de 1 a 5, cinco vezes.
               Entrada: não tem
               Saída: 1
                      1 2
                      1 2 3
                      1 2 3 4
                      1 2 3 4 5
*/

#include <stdio.h>


int itemB1(){
    int i, j;

    for (j=1; j<=5; j++){
        i=0;
        while (i<j){
            i++;
            printf("%d ", i);
        }
        printf("\n");
    }
    getchar();
    return 0;
}

int itemB2(){
    int i, j;
    i=0;
    for (j=1; j<=5; j++){
        while (i<j){
            i++;
            printf("%d ", i);
        }
        printf("\n");
    }
    getchar();
    return 0;
}

int itemC(){
    int i, j;
    i=0;
    for (j=1; j<=5; j++){
        do{
            i++;
            printf("%d", i);
        }while(i<j);

        printf("\n");
    }
    getchar();
    return 0;
}

int main(){

    itemC();
    return 0;
}
