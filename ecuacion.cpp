#include "ecuacion.h"

void mostrarEcuacion(Ecuacion ecuacion)
{
    if(ecuacion.discriminante==PRIMER_GRADO)
    {

        mostrarPrimerGrado(ecuacion.dato1);
    }
    else{
        mostrarSegundoGrado(ecuacion.dato2);
    }

}

void suma(Ecuacion ecuacion1, Ecuacion ecuacion2, string identificador,Ecuacion &resultado)
{
    //strcrear(resultado.id);                                     <---------------------------------
    strcop(resultado.id,identificador);        //pasar a dinamico <---------------------------------
    if(ecuacion1.discriminante==ecuacion2.discriminante)
    {
        resultado.discriminante=ecuacion1.discriminante;
        if(resultado.discriminante==PRIMER_GRADO)
        {
            sumaPrimera(ecuacion1.dato1,ecuacion2.dato1,resultado.dato1);

        }
        else{
            sumaSegunda(ecuacion1.dato2,ecuacion2.dato2,resultado.dato2);
        }

    }
    else{
            resultado.discriminante=SEGUNDO_GRADO;
        if(ecuacion1.discriminante==PRIMER_GRADO)
        {

            sumaDiferenteGrado(ecuacion1.dato1,ecuacion2.dato2,resultado.dato2);
        }
    else{
        sumaDiferenteGrado(ecuacion1.dato2,ecuacion2.dato1,resultado.dato2);
        }
    }
}
SegundoGrado sumaDiferenteGrado(PrimerGrado primer, SegundoGrado segundo);
