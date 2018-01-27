//
// Created by rooty on 1/27/18.
//
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include "mainMenue.h"

int printMainMenue(){
    int choiceStd  = 0;

    char *mainMenueTitel[9];
        mainMenueTitel[0]  = "show all";
        mainMenueTitel[1]  = "default";
        mainMenueTitel[2]  = "default";
        mainMenueTitel[3]  = "default";
        mainMenueTitel[4]  = "default";
        mainMenueTitel[5]  = "default";
        mainMenueTitel[6]  = "preferences";
        mainMenueTitel[7]  = "Sortieren";
        mainMenueTitel[8]  = "Auflisten";
        mainMenueTitel[9] = "Programm beenden";

            // length of Titel = 66
    choiceStd = stdMenue("|| __--~~+++|||****''''|| C O U N T E D ||''''****|||+++~~--__ ||\n", mainMenueTitel, 9);

    return choiceStd;
}

int stdMenue(char *menuTitle, char **menuPoints, int numberOfPoints){
    int  choice;
    int  check;
    char input[5];

    do{
        printf(menuTitle);

        for(int i = 0; i <= numberOfPoints-1; i++){
            printf("|  %2i. ", i+1);
            printf( *(menuPoints + i));
            printf("\n");
        }
        printf("|\n|| ||| WAHL: ");
        fgets(input, 5, stdin);
        choice = atoi(input);

        if(choice > numberOfPoints || choice <= 0){
            printf("**error**: Ungueltige Eingabe..\n\n");
        }
        else{
            check = 1;
        }
    } while(!check);
    choice = choice - 1;
    return choice;
}
