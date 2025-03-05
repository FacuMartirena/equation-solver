#ifndef SEGUNDOGRADO_H_INCLUDED
#define SEGUNDOGRADO_H_INCLUDED
#include <stdio.h>
#include "boolean.h"
#include <iostream>
#include <cmath>
typedef struct {
    int terminoCuadratico;
    int terminoLineal;
    int terminoIndependiente;

}SegundoGrado;

void crearSegundoGrado(int terminoCuadratico, int terminoLineal, int independiente,SegundoGrado &nuevo); // idem a primer Grado (procedimiento por referencia)
void mostrarSegundoGrado(SegundoGrado ecuacion);
void setTerminoCuadratico(SegundoGrado &ecuacion, int terminoCuadratico);
int getTerminoCuadratico(SegundoGrado ecuacion);
void setSegundoCoeficiente(SegundoGrado &ecuacion, int a);
int getSegundoCoeficiente(SegundoGrado ecuacion);
void setIndependiente(SegundoGrado &ecuacion, int independiente);
int getIndependiente(SegundoGrado ecuacion);
boolean existeRaiz(SegundoGrado ecuacion);

//Precondición: existeRaiz(ecuacion)
void resolverEcuacionSegundo(SegundoGrado ecuacion, float &raiz1, float &raiz2);
float discriminante(SegundoGrado ecuacion);
void guardarSegundoGrado(SegundoGrado ecuacion, FILE* archivo);
void cargarSegundoGrado(SegundoGrado &ecuacion, FILE* archivo);
<<<<<<< HEAD
void sumaSegunda(SegundoGrado ecuacion1, SegundoGrado ecuacion2,SegundoGrado &resultado);
=======
void sumaSegunda(SegundoGrado ecuacion1, SegundoGrado ecuacion2,SegundoGrado &total);
>>>>>>> 14caf5c (commit)

#endif // SEGUNDOGRADO_H_INCLUDED
