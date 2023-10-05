//
// Created by Kenneth on 21/09/2023.
//

#include "decla_exos.h"

int* tableau();

void partie_un(){
    srand(time(NULL));
    int n;
    printf("entrer un n:");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("i:%d val:%d\n",i, rand() % 49 + 1);
    }
}

void partie_deux(){
    int a, b;
    printf("entrer un a:");
    scanf("%d", &a);
    printf("entrer un b:");
    scanf("%d", &b);

    if(a < 0 || b < 0){
        printf("a: %d, b: %d,signe du produit negatif.\n",a,b);
    }else{
        printf("a: %d, b: %d,signe du produit positif.\n",a,b);
    }
}

void partie_trois(){
    int N, sum = 0, produit = 1;
    printf("entrer un N:");
    scanf("%d", &N);
    for(int i = 1; i < N+1; i++){
        int tmp  = 0;
        printf("\nentrer un nombre");
        scanf("%d", &tmp);
        sum += tmp;
        produit *= tmp;
    }

    printf("somme:%d, produit: %d, moyenne:%.4f", sum, produit, (float)sum/(float)N);
}

void cm_deux_exo() {

    // partie 1
    //partie_un();
    // partie 2
    //partie_deux();

    // partie 3
    //partie_trois();
    printf("%p", tableau());
}

int* tableau(){
    int N[100];
    for(int i = 0; i < 100; i++){
        N[i] = 0;
    }
    return N;
}