#ifndef ECUACION_H_INCLUDED
#define ECUACION_H_INCLUDED

#include "string.h"
#include "tipoEcuacion.h"
#include "primerGrado.h"
#include "segundoGrado.h"

typedef struct{
    string id;
	tipoEcuacion discriminante;
	union{
		PrimerGrado dato1;
		SegundoGrado dato2;
          }datos;
} Ecuacion;

/*Ecuacion crearEcuacionPrimerGrado(string id, int a, int independiente);
Ecuacion crearEcuacionSegundoGrado(string id, int a, int b, int independiente); */

void mostrarEcuacion(Ecuacion ecuacion);
tipoEcuacion getDescriminacion(Ecuacion ecuacion);
void setDescriminacion(Ecuacion &ecuacion, tipoEcuacion tipo);
PrimerGrado getEcuacionPrimera(Ecuacion ecuacion);
void setEcuacionPrimera(Ecuacion &ecuacion, PrimerGrado primeraGrado);
SegundoGrado getEcuacionSegunda(Ecuacion ecuacion);
void setEcuacionSegunda(Ecuacion &ecuacion, SegundoGrado segundoGrado);
//string getIdentificador(Ecuacion ecuacion); //no devolvemos strings como funcion void getIdentificador (Ecuacion ecuacion, string &s)
Ecuacion suma(Ecuacion ecuacion1, Ecuacion ecuacion2, string identificador);
void sumaDiferenteGrado(PrimerGrado primer, SegundoGrado segundo,SegundoGrado &ecuacion);
void setIdentificador(Ecuacion &ecuacion, string id);
void guardarEcuacion(Ecuacion ecuacion, FILE* archivo);
void cargarEcuacion(Ecuacion &ecuacion, FILE* archivo);

#endif // ECUACION_H_INCLUDED
