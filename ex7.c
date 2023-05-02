#include <stdio.h>

main () {
    int vetor [10];
    int maior= 0, posicao = 0;
    
    for (int i=0; i<10; i++) { 
        printf ("Digite um numero: ");
        scanf ("%d", &vetor[i]);
    }
    for (int i=0; i<10; i++) { 
        if (vetor[i]>maior) {
            maior= vetor[i];
            posicao = i;
        }
    }
    printf ("Maior numero ---> %d", maior);
    printf ("\nPosicao ---> vetor [%d]", posicao);
}