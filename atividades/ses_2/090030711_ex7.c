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

    
    /* Check if test point is outside the rectangle */
    if ( (testPoint[0] < srcPoint[0] || testPoint[0] > (srcPoint[0] + width)) || \
         (testPoint[1] < srcPoint[1] || testPoint[1] > (srcPoint[1] + height)) ){

            printf("The given point is outside the rectangle\n");
        
    }
    
    /* if testPoint is inside the rectangle */
    else if  ( testPoint[0] < (srcPoint[0]+width) && testPoint[0] > (srcPoint[0]) ){ 
        if ( testPoint[1] < (srcPoint[1]+height) && testPoint[1] > (srcPoint[1]) )
            printf("The point is inside the rectangle\n");

        else
            printf("The point is on the border of the rectangle 2\n");
        
    }

    else /* The test point is on the borders of the rectangle*/
        printf("The point is on the border of the rectangle\n");
    
    
    return 0;
}

int main(){

    float testPoint[2]={2, 10};
    float srcPoint[2]={0, 0};
    float height = 10;
    float width = 5;

    isInRectangle(testPoint, srcPoint, height, width);
    return(0);
}
