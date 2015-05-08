/*
    Arquivo: 090030711_ex1.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Lê valores para as variáveis "ano" e "sexo", e posteriormente as imprime na tela
*/


#include <stdio.h>

int main(){
    int ano;
    char sexo;
  
    printf("\nInforme o sexo:\n");
    scanf("%c", &sexo);
    while ((sexo!='f') && (sexo != 'F') && (sexo != 'm') && (sexo != 'M')){
        printf("Erro!\n");
        printf("Informe o sexo novamente:\n");
        getchar();
        scanf("%c", &sexo);
    }

    printf("\nInforme o ano:\n");
    scanf("%i", &ano);
    printf("Saida - Ano = %d e Sexo = %c\n", ano, sexo);
    return 0;
    

}



