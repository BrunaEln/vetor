#include <stdio.h>
#include <math.h>

main () {
    int vetordados [10];
    int vetorRes [10];

    for (int indice = 0; indice < 10; indice++) {
        printf ("Digite os valores: ");
        scanf ("%d", &vetordados[indice]);
    }
    for (int indice = 0; indice < 10; indice++) {
        //vetorRes [indice] = pow (vetordados [indice], 2)

        vetorRes[indice] = vetordados[indice] * vetordados[indice];
        printf ("%d\n", vetorRes[indice]);
    }
}