//
// Created by Kenneth on 29/09/2023.
//

#include "decla_exos.h"

int dix_deux_exo(int a, int b, char op){
    int result;
    switch(op){
        case '+':
            result = a+b;
            break;
        case'-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
    }
    printf("%d\n", result);
    return result;
}

float conversion(int far){
    float cel = (float)(far - 32) * 5/9;
    printf("%f\n", cel);
    return cel;
}

int control_acquisition(){
    int a;
    printf("entrer un entier:");
    scanf("%d", &a);
    if(a > 9 && a < 10000)
        return a;
    return 10;
}

void decomp_base(){
    int nb = control_acquisition();
    int i = 0;

    while(nb != 0){
        printf("%d * 10^ %d\n",nb % 10,i);
        nb /= 10;
        i++;
    }
}