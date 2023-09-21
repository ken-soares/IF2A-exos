//
// Created by Kenneth on 21/09/2023.
//

#include "decla_exos.h"
void cm_deux_exo() {
    srand(time(NULL));
    int n,a,b;
    printf("entrer un n:");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("i:%d val:%d\n",i, rand() % 49 + 1);
    }

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
