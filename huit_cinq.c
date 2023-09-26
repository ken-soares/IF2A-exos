//
// Created by Kenneth on 26/09/2023.
//

#include "decla_exos.h"

/* /!\ CODE QUI NE MARCHE PAS */

void huit_cinq_exo(){
    int N, check = 1;
    printf("entrer un N: ");
    scanf("%d", &N);

    if(N <= 5 || N >= 100)
        return;

    for(int i = 1; i < N; i++){
        check = 1;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0) {
                check = 0;
            }
        }
        if(check) {
            printf("%d est premier\n", i);
        }
    }

}