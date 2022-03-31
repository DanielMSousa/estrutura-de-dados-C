#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct{
    int valor;
    struct no * prox;
} no;

no * ll_create_no(int valor);

void ll_print(no * lhead);

int ll_insert_first(no * lhead, int value);

int ll_insert_last(no * lhead, int value);


#endif // LISTA_H_INCLUDED
