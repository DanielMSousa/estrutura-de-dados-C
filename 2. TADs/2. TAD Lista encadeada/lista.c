#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

no * ll_create_no(int valor){
    no * node = (no *) malloc(sizeof(no));
    if(node){
        node->valor = valor;
        node->prox = NULL;
    }
    return node;
}

void ll_print(no * lhead){
    no * aux = lhead;
    if(aux){
        printf("[");
        while(aux != NULL){
            printf(" %d ", aux->valor);
            aux = aux->prox;
        }
        printf("]");
        printf("\n");
    }
}

int ll_size(no * lhead){
    no * aux = lhead;
    int counter = 0;

    if(aux){
        while(aux != NULL){
            counter++;
            aux = aux->prox;
        }
    }
    return counter;
}

int ll_insert_last(no * lhead, int value){
    no * last = lhead;

    if(last){
        while(last->prox != NULL){
            last = last->prox;
        }

        no * novo = ll_create_no(value);

        last->prox = novo;
    }
    return 0;
}
