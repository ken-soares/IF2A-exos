//
// Created by Kenneth on 22/09/2023.
//

#include "decla_exos.h"

void sept_un_exo(){
    int a,b;

    printf("entrer un a");
    scanf("%d", &a);
    printf("entrer un b");
    scanf("%d", &b);

    if(a == 0){
        printf("peut pas diviser par 0\n");
    }else{
        printf("%.4f\n", (float)b/(float)a);
    }

    if(b == 0){
        printf("peut pas diviser par 0\n");
    }else{
        printf("%.4f\n", (float)a/(float)b);
    }

}
