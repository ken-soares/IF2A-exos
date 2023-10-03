//
// Created by Kenneth on 03/10/2023.
//

#include "decla_exos.h"

void add(int a);

void dix_six(){
    int a = 0;
    printf("1: pairs, 2: impairs, 0: quitter ");
    scanf("%d", &a);
    if(a == 0)
        exit(0);
    add(a);
}


void add(int a){
    int N, result = 0;
    printf("entrer un N:");
    scanf("%d", &N);
    if(N <= 2 || N >= 100){
       printf("N default to 3");
    }

    if(a == 1){
        for(int i = 0; i <= N; i += 2){
            result += i;
        }
    }else{
        for(int i = 1; i <= N; i += 2){
            result += i;
        }
    }
    printf("result: %d\n", result);

}