#include "lista.h"
<<<<<<< HEAD

void crear(lista_string &lStr){
    lStr=NULL;
}
void destruir(lista_string &lStr){
    lista_string aux;
    while(lStr!=NULL)
    {
        aux=lStr;
        lStr=lStr->sig;
        delete aux;
    }

}
void mostrar(lista_string lStr){
    lista_string aux=lStr;
    while(aux!=NULL)
    {
            print(aux->info);

            aux=aux->sig;
    }
}
void insBack(lista_string &lista, string s){
    nodoL* nuevo=new nodoL;
    strcop(nuevo->info,s);
    nuevo->sig=NULL;
    if(lista!=NULL)
    {
        lista_string aux=lista;
        while(aux->sig!=NULL)
        {


                aux=aux->sig;
        }
        aux->sig=nuevo;
    }
    else{
        lista=nuevo;

    }


}
int largo(lista_string lStr){
    int i=0;
    lista_string aux=lStr;
    while(aux!=NULL)
    {
            i++;

            aux=aux->sig;
    }
    return i;
}
=======
>>>>>>> 14caf5c (commit)
