#include <stdio.h>

main () {
    int vetor [5];
    int maior = 0, menor, totvalor = 0;
    float media;
    for (int indice = 0; indice <5; indice++) {
        printf ("Digite um numero: ");
        scanf ("%d", &vetor[indice]);
    } 
    for (int indice = 0; indice <5; indice++) {
        if (vetor[indice] > maior) {
            maior = vetor[indice];
        } else if (vetor[indice] < menor) {
            menor = vetor[indice];
        }
        totvalor = totvalor + vetor [indice];
        media = totvalor/5;
    }
    printf ("\nMaior numero: %d\nMenor numero: %d\nMedia: %.2f", maior, menor, media);
}