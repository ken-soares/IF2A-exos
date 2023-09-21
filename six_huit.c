//
// Created by Kenneth on 19/09/2023.
//

#include "decla_exos.h"

void six_huit_exo(){

    double r1 = 2,r2 = 3,r3 = 5,res;
    char branchement = 's'; // on peut le demander en entrée (/!\ attention, ne pas utiliser scanf)
    if(branchement == 's'){
        res = r1+r2+r3;
    }else{
        res = (r1*r2*r3)/(r1*r2)+(r1*r3)+(r3*r2);
    }

    printf("%.4f\n", res);
}