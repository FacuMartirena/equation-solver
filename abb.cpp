#include "abb.h"
<<<<<<< HEAD

void crear(arbol &root){
    root=NULL;

}
void destruir(arbol &root)
{
    if(root!=NULL)
    {
        destruir(root->izq);
        destruir(root->der);
        delete root;
    }

}
boolean esVacio(arbol root)
{

    if(root==NULL)
        return TRUE;
    else
        return FALSE;
}
void mostrar(arbol root){
    if(root!=NULL)
    {
        mostrar(root->izq);
        mostrarEcuacion(root->info);
        mostrar(root->der);
    }

}
arbol getRaiz(arbol root){
    return root;
}
arbol getHijoIzq(arbol root){
    return root->izq;
}
arbol getHijoDer(arbol root){
    return root->der;
}
Ecuacion getInfo(arbol root){
    return root->info;
}
=======
>>>>>>> 14caf5c (commit)
