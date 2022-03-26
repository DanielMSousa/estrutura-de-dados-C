#include <stdio.h>
#include <stdlib.h>
#include "tad_vetor.h"

//função que cria o vetor dinâmico
VetorDin cria_vetord(int d){
    //definição de variável contadora e vetor
    int i = 0;
    VetorDin v;

    v.tamanho = d;
    v.n = d;
    v.vetor = (float *) malloc(d * sizeof(float));

    //checa por erros
    if(!v.vetor){
        printf("Erro de memória");
        exit(1);
    }

    for (i = 0; i < v.n; i++){
        printf("Insira o primeiro valor do vetor: ");
        scanf("%f", &v.vetor[i]);
    }

    return v;
}

void mostravetor(VetorDin v){
    //depois trocar o d por algo.
    int i = 0;
    printf("[");
    for(i = 0; i < v.n; i++){
        if(i != v.n - 1){
            printf("%f, ", v.vetor[i]);
        }
        else{
            printf("%f", v.vetor[i]);
        }
    }
    printf("]");
}

int tamanho_vetord(VetorDin v){
    return v.tamanho;
}

void libera_vetord(VetorDin * v){
    if(v->vetor){
        free(v->vetor);
    }
}
