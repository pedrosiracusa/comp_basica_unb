/*
    Arquivo: 090030711_ex2.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Pede ao usuário 2 números. Caso sejam equivalentes, isso será informado por uma mensagem adequada. Caso não seja, o programa indica o número com maior valor
*/

#include <stdio.h>

int main(){
    int a, b;
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    if (a==b){
        printf("Os números inseridos são iguais: %d\n", a);
    }
    else if (a>b){
        printf("O maior número é %d\n", a);
    }
    else{ /* case where b is greater than a */
        printf("O maior número é %d\n", b);
    }
    return(0);
}
