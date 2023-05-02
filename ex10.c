#include <stdio.h>

main () {
    float vetor [10]; 
    float soma;
    for (int i = 0; i < 10; i++) {
        printf ("Digite um numero: ");
        scanf ("%f", &vetor[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            printf ("\nNumero negativo: %.2f", vetor[i]);
        }
        else {
            soma = vetor[i] + vetor [i];
            printf ("\nResultado das somas:%0.2f\n", soma);
        }
    }
}