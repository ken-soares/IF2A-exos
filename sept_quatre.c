//
// Created by Kenneth on 22/09/2023.
//

#include "decla_exos.h"


void sept_quatre_exo(){
    int note;

    printf("entrer une note:");
    scanf("%d",&note);

    switch(note){
        case INT_MIN ... 0:
            printf("pas bien\n");
            break;
        case 1 ... 9:
            printf("il faut travailler\n");
            break;
        case 10:
            printf("un peu juste\n");
            break;
        case 11 ... 19:
            printf("bien\n");
            break;
        case 20 ... INT_MAX:
            printf("tres bien\n");
            break;
        default:
            printf("cas default juste pour éviter que CLion me crie dessus\n");
    }
}

