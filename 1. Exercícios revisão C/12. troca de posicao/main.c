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

    int aux;
    exibe_vetor(v, tamanho);
    printf("\n");
    for(j = 0; j < tamanho-1; j++){
        aux = v[tamanho-2-j];
        v[tamanho-2-j] = v[tamanho-1-j];
        v[tamanho-1-j] = aux;
        exibe_vetor(v, tamanho);
        printf("\n");
    }
    
    return 0;
}