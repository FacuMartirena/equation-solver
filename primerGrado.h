#ifndef PRIMERGRADO_H_INCLUDED
#define PRIMERGRADO_H_INCLUDED
//Revisar mas adelante el include
#include <stdio.h>
typedef struct {
    int terminoLineal;
    int terminoIndependiente;

}PrimerGrado;

/*PrimerGrado* crearPrimerGrado( int terminoLineal, int terminoIndependiente);*/
void crearPrimerGrado (int terminoLineal, int terminoIndependiente, PrimerGrado &pg);
void mostrarPrimerGrado(PrimerGrado ecuacion);
void setTerminoLineal(PrimerGrado &ecuacion, int terminoLineal);
int getTerminoLineal(PrimerGrado ecuacion);
void setIndependiente(PrimerGrado &ecuacion, int independiente);
int getIndependiente(PrimerGrado ecuacion);
void resolverEcuacionPrimer(PrimerGrado ecuacion, float &raiz);
void guardarPrimerGrado(PrimerGrado ecuacion, FILE* archivo);
void cargarPrimerGrado(PrimerGrado &ecuacion, FILE* archivo);
void sumaPrimera(PrimerGrado ecuacion1, PrimerGrado ecuacion2,PrimerGrado &nuevo);

#endif // PRIMERGRADO_H_INCLUDED
