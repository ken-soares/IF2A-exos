//
// Created by kowoala on 19/09/2023.
//

#include "decla_exos.h"

void six_trois_exo() {
    int nb = 48, multiple = 9;
    int result = nb % multiple;

    if(result != 0){
        printf("le nombre %d n'est pas multiple de %d, car %d modulo %d vaut %d\n", nb, multiple, nb, multiple, result);
    }
}
