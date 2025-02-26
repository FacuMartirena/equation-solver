#ifndef ABB_H_INCLUDED
#define ABB_H_INCLUDED

#include "ecuacion.h"

typedef struct nodoAB{
	Ecuacion info;
	nodoAB* izq;
	nodoAB* der;
}nodo;

typedef nodo * arbol;



void crear(arbol &root);
void destruir(arbol &root);
boolean esVacio(arbol root);
void mostrar(arbol root);
arbol getRaiz(arbol root);
arbol getHijoIzq(arbol root);
arbol getHijoDer(arbol root);
Ecuacion getInfo(arbol root);

#endif // ABB_H_INCLUDED
