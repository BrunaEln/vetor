#include <stdio.h>

main () {
    int vet [6];

        for (int i = 0; i < 6; i++) {
            printf ("Digite um numero: ");
            scanf ("%d", &vet[i]);
        }
        for (int i = 0; i < 6; i++) {
            printf ("%d, ", vet[i]);
        }
}