#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template <class T>
void invierte (Lista<T> *lis,Lista<T> *list){
    if (list->esVacia())
        return;
    lis->insetarPrimero(list->getDato(0));
    list->remover(0);
    invierte(lis, list);
}


template <class T>
void fnInvierte (Lista<T> *lis){
    Lista<T> list(*lis);
    lis->vaciar();
    invierte(list, &list);
}


#endif //FNINVIERTE_H
