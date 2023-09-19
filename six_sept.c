//
// Created by Kenneth on 19/09/2023.
//

#include "decla_exos.h"

typedef struct point{
    int x;
    int y;
} point;

void six_sept_exo(){
    point A = {4,3};
    point B = {5,6};

    const double DIST = sqrt(pow((A.x - B.x),2) + pow((A.y - B.y),2));
    printf("%.3f\n", DIST);
}