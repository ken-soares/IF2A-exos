//
// Created by Kenneth on 26/09/2023.
//

#include "decla_exos.h"

void huit_quatre_exo(){
    int N, tmp, max = 0;
    printf("entrer un N ");
    scanf("%d", &N);
    if(N <= 2 || N >= 11)
        return;

    for(int i = 0; i < N; i++){
        printf("entrer un nombre:");
        scanf("%d", &tmp);
        if(tmp > max)
            max = tmp;
    }
    printf("max %d", max);
}