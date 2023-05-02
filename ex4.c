#include <stdio.h>

main () {
    int vetX [8];
    int vetY [8];
    int soma;

        for (int indice = 0; indice <8; indice++) {
            printf ("Digite o valor de X: ");
            scanf ("%d", &vetX[indice]);
            printf ("Digite o valor de Y: ");
            scanf ("%d", &vetY[indice]);
        }
        for (int indice = 0; indice <8; indice++) {
            soma = vetX [indice] + vetY [indice];
            printf ("Resultado das somas: %d\n", soma);
        }
}