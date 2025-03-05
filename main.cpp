#include <iostream>
#include "primerGrado.h"
#include "segundoGrado.h"
#include "lista.h"
<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> 14caf5c (commit)


int main()
{

   int a=2;
<<<<<<< HEAD
    int b=-3;
    int c=-2;
    PrimerGrado primerGrado1;
    crearPrimerGrado(a,b, primerGrado1);
    mostrarPrimerGrado(primerGrado1);
    printf("\n");
    PrimerGrado primerGrado2;
    crearPrimerGrado(8,0,primerGrado2);
    mostrarPrimerGrado(primerGrado2);
    printf("\n");
    PrimerGrado primerGrado3;
    crearPrimerGrado(8,-4,primerGrado3);
    mostrarPrimerGrado(primerGrado3);
    printf("\n");
    setTerminoLineal(primerGrado1,5);
    mostrarPrimerGrado(primerGrado1);
    printf("\n");
    SegundoGrado SegundoGrado1;
    crearSegundoGrado(a,b,c,SegundoGrado1);
    mostrarSegundoGrado(SegundoGrado1);

=======
    int b=3;
    PrimerGrado primerGrado1;
    crearPrimerGrado(a,b, primerGrado1);
    mostrarPrimerGrado(primerGrado1);

    PrimerGrado primerGrado2;
    crearPrimerGrado(8,0,primerGrado2);
    mostrarPrimerGrado(primerGrado2);

    PrimerGrado primerGrado3;
    crearPrimerGrado(8,-4,primerGrado3);
    mostrarPrimerGrado(primerGrado3);

    setTerminoLineal(primerGrado1,5);
    mostrarPrimerGrado(primerGrado1);

    SegundoGrado segundoGrado1;
    crearSegundoGrado(8,3,8,segundoGrado1);
    mostrarSegundoGrado(segundoGrado1);
>>>>>>> 14caf5c (commit)
    return 0;
}
