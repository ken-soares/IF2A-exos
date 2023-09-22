//
// Created by Kenneth on 22/09/2023.
//

#include "decla_exos.h"

void sept_deux_exo(){
    int a,b;

    printf("entrer un a");
    scanf("%d",&a);

    printf("entrer un b");
    scanf("%d",&b);

    if(a == b) printf("a = b\n"); else printf("a != b\n");
    if(a > b) printf("a > b\n"); else if(a < b && a != b) printf("a < b\n");
}
