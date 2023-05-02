#include <stdio.h>

main () {
    int vetor [5];
    int menor, maior = 0, posicao, posicao2;
    for (int i = 0; i < 5; i++) {
        printf ("Digite um numero: ");
        scanf ("%d", &vetor[i]);
    }
    for (int i = 0; i <5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        } else if (vetor[i] < menor) {
            menor = vetor[i];
            posicao2 = i;
        }
    }
    printf ("\nMaior numero: %d --> Posicao no vetor [%d]", maior, posicao);
    printf ("\nMenor numero: %d -- Posicao no vetor [%d]", menor, posicao2);
}