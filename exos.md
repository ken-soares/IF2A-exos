# Exercices à la main


## exo 6.1
x:5.000000,y:10.250000,z:-5.250000

## exo 6.2
a appartient à [0; 200]  
b appartient à [115; 250]  
c appartient a [6.25; 115]

## exo 6.4

Pseudo code
```
entrée secondes

sec_res <- 0
h_res <- 0
min_res <- 0

tant que secondes > 0
    sec_res <- sec_res + 1
    si sec_res == 60
        min_res <- min_res + 1
        sec_res <- 0
    fin si
    
    si min_res == 60
        h_res <- h_res + 1
        min_res <- 0
    fin si
    
    secondes <- secondes - 1
fin tant que
```

## exo 6.5

```
entrée rayon
PI <- 3.14159
surface <- 4 * PI * (rayon)**2
volume <- (surface*rayon)/3

afficher surface, "m^2"
afficher volumne, "m^3"
```

## exo 6.6

```
entrée k, h, m, l

conso <- l/k * 100
v_moyenne <- k/(m/60)+h

afficher conso, "L.100km^-1"
afficher v_moyenne "km/h"
```

## exo 8.1

```
entier v
tant que
    entrée v
    si -10 <= v <= 10 et v != 0
        continuer
    sinon
        quitter la boucle
fin tant que
```

## exo 8.2
trivial car vraiment similaire au 8.2

## exo 8.3
question 1 : <img src="https://latex.codecogs.com/svg.image?\bg{white}\sum_{k=1}^{n}k=\frac{n(n&plus;1)}{2}" title="\sum_{k=1}^{n}k=\frac{n(n+1)}{2}" />