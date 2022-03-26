//tad_vetor.h
#ifndef TAD_VETOR_H_INCLUDED
#define TAD_VETOR_H_INCLUDED

typedef struct{
    int n;
    int tamanho;
    float* vetor;
} VetorDin;

VetorDin cria_vetord(int dim);

void mostravetor(VetorDin v);

int tamanho_vetord(VetorDin v);

#endif // TAD_VETOR_H_INCLUDED
