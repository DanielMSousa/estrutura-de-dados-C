#include <stdio.h>
#include <stdlib.h>

void exibe_vetor(int v[], int tamanho){
    int i;
    printf("[");
    for (i = 0; i < tamanho; i++){
        printf(" %d", v[i]);
        if(i != tamanho - 1){
            printf(",");
        }
    }
    printf(" ]");
}

int main(){
    int tamanho, *v, i, j, maior, menor;
    //v é o ponteiro vetor
    printf("insira o tamanho da array que deseja criar: ");
    scanf("%d", &tamanho);
    (int *) malloc(sizeof(int) * tamanho);
    
    for (i = 0; i < tamanho; i++){
        printf("Insira o valor na posicao %d: ", i+1);
        scanf("%d",&v[i]);
    }
    
    maior = v[0];
    for (j = 0; j < tamanho; j++){
        if(maior < v[j]){
            maior = v[j];
        }
    }
    
    menor = v[0];
    for (j = 0; j < tamanho; j++){
        if(menor > v[j]){
            menor = v[j];
        }
    }
    
    printf("O maior valor em ");
    exibe_vetor(v, tamanho);
    printf(" e %d ", maior);
    printf("enquanto o menor valor e %d", menor);
    
    return 0;
}