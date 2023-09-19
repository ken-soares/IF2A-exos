//
// Created by Kenneth on 19/09/2023.
//

#include "decla_exos.h"

void six_six_exo(){
    int k = 10, h = 0, m = 20, l = 5;

    float conso = ((float)l/(float)k) * 100;
    float v_moyenne = (float)k/(((float)m/60)+(float)h);

    printf("%.2f L/100km\n", conso);
    printf("%.2f km/h\n", v_moyenne);
}