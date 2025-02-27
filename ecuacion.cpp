#include "ecuacion.h"

void mostrarEcuacion(Ecuacion ecuacion)
{
    if(ecuacion.discriminante==PRIMER_GRADO)
    {

        mostrarPrimerGrado(ecuacion.datos.dato1);
    }
    else{
        mostrarSegundoGrado(ecuacion.datos.dato2);
    }

}

boolean suma(Ecuacion ecuacion1, Ecuacion ecuacion2, string identificador,Ecuacion &resultado)
{
    boolean valido=TRUE;
    strcrear(resultado.id);
    strcop(resultado.id,identificador);
    if(ecuacion1.discriminante==ecuacion2.discriminante)
    {
        resultado.discriminante=ecuacion1.discriminante;
        if(resultado.discriminante==PRIMER_GRADO)
        {
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
        }

    }
    else{

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
