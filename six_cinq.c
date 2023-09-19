//
// Created by Kenneth on 19/09/2023.
//

#include "decla_exos.h"

void six_cinq_exo(){
    const double PI = 3.14159;
    float rayon;
    printf("entrer le rayon:");
    scanf("%f", &rayon);
    double surface = 4 * PI * pow(rayon, 2);
    double volume = (surface * rayon)/3;

    printf("surface:%.4f m^2\nvolume:%.4f m^3\n", surface,volume);
}
