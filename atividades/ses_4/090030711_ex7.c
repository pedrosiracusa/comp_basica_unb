/*
    Arquivo: 090030711_ex7.c
    Computação Básica - Turma G
    Nome: Pedro de Siracusa
    Matrícula: 09/0030711
    Descrição: Pede ao usuário dados dos jogadores de um time de volei. Com estas informações calcula o peso médio e idade média de cada um dos times e entre todos os jogadores. Ao final, indica qual o jogador mais alto, seu nome e sua altura.
*/

#include <stdio.h>
#define NAME_LENGTH 250

int main(){
    int const NUM_OF_TEAMS=3;
    int const PLAYERS_PER_TEAM=4;

    char playerName[NAME_LENGTH];
    int playerAge;
    float playerWeight;
    float playerHeight;

    float teamAvgWeight=0;
    float teamAvgAge=0;
    float teamWeightSum=0;
    float teamAgeSum=0;

    char tallestPlayerName[NAME_LENGTH];
    float tallestPlayerHeight=0;
    int tallestPlayerTeam;

    float totalWeightSum=0;
    float totalAgeSum=0;
    float totalAvgWeight;
    float totalAvgAge;
    

    for(int i=1; i <= NUM_OF_TEAMS; i++){/* Iterate through teams */
        printf("Team %i:\n", i);
        for(int j=1; j <= PLAYERS_PER_TEAM; j++){ /* Inside each Team */
            printf("Enter name for player %i\n", j);
            scanf("%[^\n]", playerName);
            getchar();
            printf("\tEnter age for player %i\n", j);
            scanf("%i", &playerAge);
            printf("\tEnter weight for player %i\n", j);
            scanf("%f", &playerWeight);
            printf("\tEnter height for player %i\n", j);
            scanf("%f", &playerHeight);
            getchar();
            teamWeightSum+=playerWeight;
            teamAgeSum += playerAge;
            if(playerHeight > tallestPlayerHeight){
                tallestPlayerHeight=playerHeight;
                // copies string
                for(int i=0; i<NAME_LENGTH; i++)
                    tallestPlayerName[i]=playerName[i];
          

                tallestPlayerTeam=i;
            }
        }

        teamAvgWeight = teamWeightSum/PLAYERS_PER_TEAM;
        teamAvgAge = (float)teamAgeSum/PLAYERS_PER_TEAM;

        totalWeightSum += teamAvgWeight;
        totalAgeSum += teamAvgAge;

        printf("\tTeam %i average weight: %.2f\n", i, teamAvgWeight);
        printf("\tTeam %i average age: %.2f\n", i, teamAvgAge);

        /* Reset team sum values for storing next team data */
        teamWeightSum=0;
        teamAgeSum=0;
    }
    
    totalAvgWeight= totalWeightSum/NUM_OF_TEAMS;
    totalAvgAge = totalAgeSum/NUM_OF_TEAMS;

    printf("\nTotal average weight: %.2f\n", totalAvgWeight);
    printf("\nTotal average age: %.2f\n", totalAvgAge);

    printf("--------------------\n");
    printf("\nTallest Player is %s\n", tallestPlayerName);
    printf("who plays in team %i\n", tallestPlayerTeam);
    printf("and is %.2f m height\n", tallestPlayerHeight);

    return 0;
}
