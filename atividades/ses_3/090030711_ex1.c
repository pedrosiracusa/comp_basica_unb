/*
    Arquivo: 090030711_ex1.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Programa para imprimir os numeros de 1 a 10.
	Entrada: Não tem
        Saída: 1, 2, 3, ..., 10
*/

#include <stdio.h>

int b_1(){
    int i;
    printf("Os numeros de 1 a 10 sao: ");
    i = 0;
    while (i<10){
        i++;
        printf("%d ", i);
    }
    getchar();
    return 0;  
}

int b_2(){
    int i;
    printf("Os numeros de 1 a 10 sao:\n");
    i=0;
    while(i<10){
        i++;
        printf("%d\n", i);
    }
    return 0;
}

int b_3(){
    int i;
    printf("Os numeros de 1 a 10 sao:\n");
    i=0;
    while(i<10){
        i++;
        printf("%d", i);
        getchar();
    }
    return 0;
}

int b_4(){
    int i;
    printf("Os numeros de 1 a 10 sao:\n");
    i=1;
    while(i<11){
        printf("%d", i);
        i++;
        getchar();
    }
    return 0;
}

int main(){
    b_4();
    return 0;
}
