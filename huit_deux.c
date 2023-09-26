//
// Created by Kenneth on 26/09/2023.
//

#include "decla_exos.h"
void huit_deux_exo(){
    int v;
    do {
        printf("\nentrer un v ");
        scanf("%d", &v);
    }
    while(v >= 5 && v <= 15 && v != 20);
    fprintf(stderr,"[ERREUR]: sorti de la boucle, v = %d\n", v);
}