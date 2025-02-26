#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "string.h"

typedef struct nodoLis{
	string info;
	nodoLis* sig;
	}nodoL;

typedef nodoL * lista_string;


void crear(lista_string &lStr);
void destruir(lista_string &lStr);
void mostrar(lista_string lStr);
void insBack(lista_string &lista, string s);
int largo(lista_string lStr);

// REQUERIMIENTOS
void comandoALista(string original, lista_string &lStr);

#endif // LISTA_H_INCLUDED
