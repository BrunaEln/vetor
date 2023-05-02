#include <stdio.h>

main () {
    //inicializar o vetor

    int a [6] = {1, 0, 5, -2, -5, 7};
    int soma;

    soma = a [0] + a [1] + a [5];

    printf ("Soma = %d\n", soma);

    a [4] = 100;

        for (int indice = 0; indice < 6; indice++) {
            printf ("%d, ", a[indice]);
        }
}