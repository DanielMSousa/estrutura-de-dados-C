#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "lista.c"

int main(){
    no * node;

    no ** lhead;
    no * new_node;

    node = ll_create_no(4);

    ll_insert_last(node, 20);

    ll_insert_last(node, 65);

    ll_insert_last(node, 50);

    //vou inserir um 15 no comeco
    lhead = &node;
    ll_create_no(15)


    ll_print(node);

    printf("size of the list: %d", ll_size(node));

    return 0;
}
