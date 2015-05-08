/*
    Arquivo: 090030711.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Implementação do jogo Batalha Naval
    VERSÃO: 2.0
*/

#include <stdio.h>
#include <stdlib.h>

/* Size of the game table */
#define NUM_ROWS 5
#define NUM_COLS 5

/* Program Variables */
int myShipTable[NUM_ROWS][NUM_COLS];
int enemyShipTable[NUM_ROWS][NUM_COLS];


void printMainMenu(){
    system("clear");
    printf("============================\n");
    printf("Escolha uma opcao do menu:\n");
    printf("\t1 - Jogar\n\t2 - Configuracoes\n\t3 - Ranking\n\t0 - Sair do Jogo\n");
    printf("============================\n");
    return;
}

void printTable(int id){
    /* Prints user table (id=0) or enemy table (id=1)to screen */
    int i, j;
    switch(id){
        case 0:
            printf("=====>>My Table<<=====\n");
                for(i=0; i<NUM_ROWS; i++){
                    for(j=0; j<NUM_COLS; j++){
                        printf("[%i] ",  myShipTable[i][j]);
                    }
                printf("\n");
                }
            break;

        case 1:
            printf("=====>>Enemy Table<<=====\n");
                for(i=0; i<NUM_ROWS; i++){
                    for(j=0; j<NUM_COLS; j++){
                        printf("[%i] ",  enemyShipTable[i][j]);
                    }
                printf("\n");
                }
            break;
    }
    return;
}

int isAHit(int coordX, int coordY){
    /* Returns 1 if user guess is a hit and 0 if not */
    if(enemyShipTable[(coordX-1)][(coordY-1)] == 1)
        return 1;
    
    else
        return 0;  
}

int removeShip(int coordX, int coordY){
    /* Removes enemy sunk ship */
    enemyShipTable[(coordX-1)][(coordY-1)] = 0;
    return 0;
}

int gameIsOver(){
    /* Returns 1 if game is over and 0 if not */
    int i, j;
    for(i=0; i<NUM_ROWS; i++){
        for(j=0; j<NUM_COLS; j++){
            if(enemyShipTable[i][j]==1)
                return 0;
        }
    }
    return 1;
}

int coordIsValid(int coordX, int coordY){
    /* Returns 1 if input coordinates are inside the ship table or (-1 -1) and 0 if not */
    if(((coordX>0 && coordX<=NUM_ROWS) && (coordY>0 && coordY<=NUM_COLS)) || (coordX==-1 && coordY==-1))
        return 1;

    else
        return 0;
}




int startGame(){
    int posX, posY; /* User coordinates input */
    system("clear");

    /* Initialize some positions for enemy ships */
    enemyShipTable[0][0]=1;
    enemyShipTable[1][1]=1;
    enemyShipTable[2][2]=1;
    enemyShipTable[3][3]=1;
    enemyShipTable[4][4]=1;

    do{
        printf("Digite a posicao que deseja atirar (x y):\n");
        printf("*Para sair digite (-1 -1)\n");
        scanf("%i %i", &posX, &posY);
        while(!coordIsValid(posX, posY)){
            printf("Coordenadas invalidas! Tente novamente\n");
            scanf("%i" "%i", &posX, &posY);
        }
        system("clear");
        
        if(posX!=-1 && posY!=-1){
            if(isAHit(posX, posY)==1){
                removeShip(posX, posY);
                printf("Acertou um navio!\n");
            }

            else
                printf("Errou! Tente novamente\n");

            if(gameIsOver())
                printf("Acertou todos os navios\nParabens voce venceu!\n");
        }
        else /* Back to main menu if (-1 -1)*/
            return 0;

    }while((posX!=-1 && posY!=-1) && gameIsOver()==0);

    printf("\n[Pressione ENTER para voltar ao menu]\n");
    getchar();
    getchar();

    return 0;
}

int configureGame(){

    int posX, posY;

    system("clear");
    printf("Escolha as coordenadas do seu navio:\nFormato: (x y)\n");
    scanf("%i" "%i", &posX, &posY);
    while(!coordIsValid(posX, posY)){
        printf("Coordenadas invalidas! Tente novamente\n");
        scanf("%i" "%i", &posX, &posY);
    }
    printf("Seu navio foi adicionado à posição %i %i:\n", posX, posY);
    myShipTable[(posX-1)][(posY-1)]=1;
    printTable(0);

    
    printf("\n[Pressione ENTER para voltar ao menu]\n");
    getchar();
    getchar();

    return 0;
}

int getRanking(){
    /* This will be developed in later versions TODO */
    system("clear");
    printf("Ranking ainda nao disponivel na versao 1.0\n");
    printf("\n[Pressione ENTER para voltar ao menu]\n");
    getchar();
    getchar();
    return 0;
}


void mainMenu(){
    /* Prints main menu screen and gets user choice */
    int userOption; /* Stores user chosen menu option */
    
    /* Initial message */
    system("clear");
    printf("Bem vindo ao jogo: Batalha Naval\n\n[Pressione ENTER para ir ao menu principal]\n");
    getchar(); /* Waits for ENTER keypress */
    
    /* Menu Loop */
    do{
        printMainMenu(); /* Prints menu options */
        scanf("%i", &userOption); /* Listens to user input */
        switch(userOption){  /* Executes input */
            case 1:
                startGame();
                break;

            case 2:
                configureGame();
                break;

            case 3:
                getRanking();
                break;

            case 0:
                break;

            default:
                printf("Por favor escolha uma entrada valida!\n");
                printf("\n[Pressione ENTER para continuar]");
                getchar();
                getchar();
        }
    
    
    }while(userOption != 0);
        
    return;
}


int main(){
    mainMenu();
    return 0;
}
