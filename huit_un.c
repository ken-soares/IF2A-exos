//
// Created by Kenneth on 26/09/2023.
//

#include "decla_exos.h"

void huit_un_exo(){
    int v;
    do {
        printf("\nentrer un v");
        scanf("%d", &v);
    }
    while(v >= -10 && v <= 10 && v != 0);
    printf("sorti de la boucle\n");
}
