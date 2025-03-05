#include "ecuacion.h"

<<<<<<< HEAD
void mostrarEcuacion(Ecuacion ecuacion)
=======
/*void mostrarEcuacion(Ecuacion ecuacion)
>>>>>>> 14caf5c (commit)
{
    if(ecuacion.discriminante==PRIMER_GRADO)
    {

<<<<<<< HEAD
        mostrarPrimerGrado(ecuacion.datos.dato1);
    }
    else{
        mostrarSegundoGrado(ecuacion.datos.dato2);
=======
        mostrarPrimerGrado(ecuacion.dato1);
    }
    else{
        mostrarSegundoGrado(ecuacion.dato2);
>>>>>>> 14caf5c (commit)
    }

}

<<<<<<< HEAD
boolean suma(Ecuacion ecuacion1, Ecuacion ecuacion2, string identificador,Ecuacion &resultado)
{
    boolean valido=TRUE;
    strcrear(resultado.id);
=======
void suma(Ecuacion ecuacion1, Ecuacion ecuacion2, string identificador,Ecuacion &resultado)
{
>>>>>>> 14caf5c (commit)
    strcop(resultado.id,identificador);
    if(ecuacion1.discriminante==ecuacion2.discriminante)
    {
        resultado.discriminante=ecuacion1.discriminante;
        if(resultado.discriminante==PRIMER_GRADO)
        {
<<<<<<< HEAD
            sumaPrimera(ecuacion1.datos.dato1,ecuacion2.datos.dato1,resultado.datos.dato1);
            if(resultado.datos.dato1.terminoLineal==0)
            {

                valido=FALSE;
            }

        }
        else{
            sumaSegunda(ecuacion1.datos.dato2,ecuacion2.datos.dato2,resultado.datos.dato2);

            if(resultado.datos.dato2.terminoLineal==0 && resultado.datos.dato2.terminoCuadratico==0)
            {
                valido=FALSE;

            }
            else{
                if(resultado.datos.dato2.terminoCuadratico==0)
                {
                    resultado.discriminante=PRIMER_GRADO;
                    resultado.datos.dato1.terminoIndependiente=resultado.datos.dato2.terminoIndependiente;
                    resultado.datos.dato1.terminoLineal=resultado.datos.dato2.terminoLineal;

                }
            }
=======
            sumaPrimera(ecuacion1.dato1,ecuacion2.dato1,resultado.dato1);

        }
        else{
            sumaSegunda(ecuacion1.dato2,ecuacion2.dato2,resultado.dato2);
>>>>>>> 14caf5c (commit)
        }

    }
    else{
<<<<<<< HEAD

        if(ecuacion1.discriminante==PRIMER_GRADO)
        {

           // sumaDiferenteGrado(ecuacion1.datos.dato1,ecuacion2.datos.dato2,resultado);
        }
        else{
           // sumaDiferenteGrado(ecuacion2.datos.dato1,ecuacion1.datos.dato2,resultado);
            }
    }
    return valido;
}
void sumaDiferenteGrado(PrimerGrado primer, SegundoGrado segundo,Ecuacion &nuevo)
{
    nuevo.discriminante=SEGUNDO_GRADO;
    nuevo.datos.dato2.terminoLineal=primer.terminoLineal+segundo.terminoLineal;
    nuevo.datos.dato2.terminoIndependiente=primer.terminoIndependiente+segundo.terminoIndependiente;
}
=======
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
SegundoGrado sumaDiferenteGrado(PrimerGrado primer, SegundoGrado segundo);*/
>>>>>>> 14caf5c (commit)
