//
// Created by Kenneth on 21/09/2023.
//

#include "decla_exos.h"

// prototypes de fonctions
int* tableau();
int recherche(int* N, int size_N, int valeur_r);
void min_max_tbl(int *N, int size_N);

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
    printf("%p\n", tableau());

    int N[5] = {1,2,3,4,1};
    printf("%d\n",recherche(N, 5, 1));
    min_max_tbl(N, 5);
}

int* tableau(){
    int N[100];
    for(int i = 0; i < 100; i++){
        N[i] = 0;
    }
    return N;
}

int recherche(int* N, int size_N, int valeur_r){
    int count = 0;
    for(int i = 0; i < size_N, i++){
        if(N[i] == valeur_r){
            count++;
        }
    }
    return count;
}

void min_max_tbl(int *N, int size_N){
    int min = 0, max = 0;
    for(int i = 0; i < size_N; i++) {
        if(N[i] >= max){
            max = N[i];
        }
        if(N[i] <= min){
            min = N[i];
        }
    }
    printf("%d %d\n", min, max);
}