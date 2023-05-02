#include <stdio.h>

main () {
    float vet [15];
    float media, notageral = 0;

    for (int i= 0; i < 10; i++) {
        printf ("Digite a nota do aluno: ");
        scanf ("%f", &vet[i]);
    }
    for (int i= 0; i < 10; i++) {
        notageral = notageral + vet [i];
        media = notageral/15; 
    }
    printf ("A media da turma e de %.2f.", media);

}