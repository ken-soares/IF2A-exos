//
// Created by Kenneth on 21/09/2023.
//

#include "decla_exos.h"
void cm_deux_exo() {
    srand(time(NULL));
    int n;
    printf("entrer un n:");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("i:%d val:%d\n",i, rand() % 49 + 1);
    }
}
