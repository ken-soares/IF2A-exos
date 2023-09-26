//
// Created by Kenneth on 26/09/2023.
//

#include "decla_exos.h"

void huit_cinq_exo(){
    int N, tmp;
    printf("entrer un N: ");
    scanf("%d", &N);

    if(N <= 5 || N >= 100)
        return;

    for(int i = 1; i < N; i++){
        printf("entrer une valeur");
        scanf("%d", &tmp);

        if(tmp == 1)
            printf("1 est premier\n");

        for(int j = 2; j <= sqrt(tmp); j++){
            if(tmp % j != 0) {
                printf("%d est premier\n", tmp);
            }
        }
    }

}