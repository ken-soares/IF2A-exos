//
// Created by Kenneth on 26/09/2023.
//

#include "decla_exos.h"

void petit_un(){
    int n, sum = 0;
    printf("entrer un n");
    scanf("%d", &n);
    while(n > 0){
        sum += n;
        n--;
    }
    printf("somme: %d\n", sum);
}

void petit_deux(){
    int f, d, sum = 0;
    printf("entrer un d");
    scanf("%d", &d);

    printf("entrer un f");
    scanf("%d", &f);

    while(f >= d){
        sum += f;
        f--;
    }

    printf("somme: %d\n", sum);
}

void petit_trois(){
    int f, d, vabs, sum = 0;
    printf("entrer un d");
    scanf("%d", &d);

    printf("entrer un f");
    scanf("%d", &f);

    while(f >= d){
        if(f < 0){
            vabs = -f;
        }else{
            vabs = f;
        }
        sum += vabs;
        f--;
    }

    printf("somme: %d\n", sum);
}

void petit_quatre(){
    int f, d, vabs, sum = 0;
    printf("entrer un d");
    scanf("%d", &d);

    printf("entrer un f");
    scanf("%d", &f);

    while(f > d){
        if(f < 0){
            vabs = -f;
        }else{
            vabs = f;
        }

        if(vabs%2 != 0){
            vabs++;
        }

        sum += vabs;
        f--;
    }

    printf("somme: %d\n", sum);
}

void huit_trois_exo(){
    petit_un();
    petit_deux();
    petit_trois();
    petit_quatre();
}