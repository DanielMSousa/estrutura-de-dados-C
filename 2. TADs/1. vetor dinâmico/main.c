#include <stdio.h>
#include <stdlib.h>
#include "tad_vetor.h"
#include "tad_vetor.c"

int main(){
    int n;
    printf("Quantos elementos tera seu vetor?");
    scanf("%d", &n);
    VetorDin vetor = cria_vetord(n);

    mostravetor(vetor);

    printf("\ntamanho do vetor: ");
    printf("%d", tamanho_vetord(vetor));

    libera_vetord(&vetor);

    return 0;
}
