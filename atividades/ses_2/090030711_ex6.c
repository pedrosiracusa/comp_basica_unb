/*
    Arquivo: 090030711_ex6.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: A partir de três medidas informadas pelo usuário, o programa decide se tais medidas podem compor os lados de um triângulo, e caso positivo, se este triângulo é retângulo
*/

#include <stdio.h>

float a, b, c; /* These variables store input values */

int isATriangle(float side1, float side2, float side3){
    /* 
       Returns 0 if argument sides do not make a triangle,
       Returns 1 if argument sides make a non-right triangle,
       Returns 2 if argument sides make a right triangle
    */   
 
    if( side1 < (side2 + side3) && \
        side2 < (side1 + side3) && \
        side3 < (side1 + side2)){
        
        if( (side1*side1) == ((side2*side2) + (side3*side3)) || \
            (side2*side2) == ((side1*side1) + (side3*side3)) || \
            (side3*side3) == ((side1*side1) + (side2*side2))) 
            return(2);

        else
            return(1);     
    }   
    else
        return(0);
}


int main(){
  
    printf("\nInsert 3 length values, and I'll check whether they make a triangle\n");

    printf("Enter length value for the first side: \n");
    scanf("%f", &a);
    
    printf("Enter length value for the second side: \n");
    scanf("%f", &b);

    printf("Enter length value for the third side: \n");
    scanf("%f", &c);

    switch (isATriangle(a,b,c)){
        case 0:
            printf("\tThe input values do not make a triangle at all\n");
            break;

        case 1:
            printf("\tThe input values make a non-right triangle\n");     
            break;

        case 2:
            printf("\tThe input values make a right triangle!\n");
            break;

    }

    return(0);

}
