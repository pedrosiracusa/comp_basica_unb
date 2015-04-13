
/*
    Arquivo: 090030711_ex1.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Pede que o usuário insira dois números e os compara, para determinar se são iguais ou diferentes
*/

#include <stdio.h>

int main(){
    int a, b;
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    if (a==b){
        printf("Números iguais = %d\n", a);
    }
    else{
        printf("Número diferentes, %d e %d\n", a,b);
    }
    return(0);
}
