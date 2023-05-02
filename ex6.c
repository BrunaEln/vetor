#include <stdio.h>

main () {
    int vetor [10];
    int menor, maior=0;
        for (int indice=0; indice < 10; indice++) {
            printf ("Digite um numero: ");
            scanf ("%d", &vetor[indice]);
        }
        for (int indice=0; indice < 10; indice++) {
            if (vetor[indice]>maior) {
                maior = vetor[indice];
            }
            else if (vetor[indice]<menor) {
                menor = vetor[indice];
            }
        }
          printf ("Maior numero:%d", maior);
          printf ("\nMenor numero: %d", menor);
}