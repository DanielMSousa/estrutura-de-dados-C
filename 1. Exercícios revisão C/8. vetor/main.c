#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho, *v, i;
    //v é o ponteiro vetor
    printf("insira o tamanho da array que deseja criar");
    scanf("%d", &tamanho);
    (int *) malloc(sizeof(int) * tamanho);
    
    for (i = 0; i < tamanho; i++){
        printf("\nInsira o valor na posicao %d: ", i+1);
        scanf("%d",&v[i]);
    }
    
    printf("os valores selecionados foram:\n");
    printf("[");
    for (i = 0; i < tamanho; i++){
        printf(" %d", v[i]);
        if(i != tamanho - 1){
            printf(",");
        }
    }
    printf("]");
    return 0;
}
