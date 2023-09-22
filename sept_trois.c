//
// Created by Kenneth on 22/09/2023.
//

#include "decla_exos.h"

void sept_trois_exo(){
    int tmp, maxi;


    for(int i = 0; i < 4; i++) {
        tmp = 0;
        maxi = 0;
        printf("entrer une valeur");
        scanf("%d", &tmp);
        if (tmp >= maxi) {
            maxi = tmp;
        }
    }
    printf("le maximum est %d\n", maxi);
}