//
// Created by kowoala on 19/09/2023.
//

#include "decla_exos.h"

void six_quatre_exo(){
    int secondes, sec_res = 0, h_res = 0, min_res = 0;

    printf("entrer le nombre de secondes:");
    scanf("%d", &secondes);

    for(int i = 0; i < secondes; i++){

        sec_res += 1;
        if(sec_res == 60){
            min_res += 1;
            sec_res = 0;
        }

        if(min_res == 60){
            h_res += 1;
            min_res = 0;
        }
    }

    printf("%d:%d:%d\n",h_res,min_res,sec_res);
}