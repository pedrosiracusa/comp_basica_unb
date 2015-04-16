/*
    Arquivo: 090030711_ex7.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: (xxxx)
*/

#include <stdio.h>


int isInRectangle(float testPoint[], float srcPoint[], float height, float width){
    /* This function considers the source point is located at the left corner of the base of the rectangle 
       Points are represented as a array[x, y] 
    */

    /* Check if point is in rect's border */
    if ( testPoint[0] == srcPoint[0] || \
         testPoint[0] == srcPoint[0] + width || \
         testPoint[1] == srcPoint[1] || \
         testPoint[1] == srcPoint[1] + height ){

        printf("The point is on the rectangle's border\n");
    }
    
    /* if testPoint x is between rect side borders */
    else if  ( testPoint[0] < (srcPoint[0]+width) && \
               testPoint[0] > (srcPoint[0]) ){ 
        
        /*Check if testPoint y is between rect top and bottom*/
        if ( testPoint[1] < (srcPoint[1]+height) && \
             testPoint[1] > (srcPoint[1]) ){

            printf("The point is inside the rectangle\n");
        }
    }

    else 
        printf("The point is outside the rectangle\n");
    
    
    return 0;
}

int main(){

    float testPoint[2]={0, -1};
    float srcPoint[2]={-1, 0};
    float height = 10;
    float width = 5;

    isInRectangle(testPoint, srcPoint, height, width);
    return(0);
}
