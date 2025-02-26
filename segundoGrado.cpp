#include "segundoGrado.h"
#include <stdio.h>


void crearSegundoGrado(int terminoCuadratico, int terminoLineal, int independiente,SegundoGrado &nuevo){

    nuevo.terminoCuadratico=terminoCuadratico;
    nuevo.terminoLineal=terminoLineal;
    nuevo.terminoIndependiente=independiente;

}

void mostrarSegundoGrado(SegundoGrado ecuacion){
    printf("%dx^2", ecuacion.terminoCuadratico);
    if(ecuacion.terminoLineal>0)
        printf("+%dx", ecuacion.terminoLineal);
    else
        if(ecuacion.terminoLineal<0)
            printf("%dx", ecuacion.terminoLineal);
    if(ecuacion.terminoIndependiente>0)
        printf("+%d =0", ecuacion.terminoIndependiente);
        /*print("%dx + %d=0",ecuacion.terminoLineal,ecuacion.terminoIndependiente);*/
    else
        if(ecuacion.terminoIndependiente==0)
            printf("= 0");
          /*  print("%dx =0",ecuacion.terminoLineal);*/
        else
            printf("%d =0", ecuacion.terminoIndependiente);
          /*  print("%dx %d=0",ecuacion.terminoLineal,ecuacion.terminoIndependiente)*/
}
//Precondicion: terminoCuadratico!=0
void setTerminoCuadratico(SegundoGrado &ecuacion, int terminoCuadratico)
{
    ecuacion.terminoCuadratico=terminoCuadratico;

}
int getTerminoCuadratico(SegundoGrado ecuacion){
    return ecuacion.terminoCuadratico;

}
void setTerminoLineal(SegundoGrado &ecuacion, int terminoLineal)
{
    ecuacion.terminoLineal=terminoLineal;
}
int getSegundoCoeficiente(SegundoGrado ecuacion)
{
    return ecuacion.terminoCuadratico;
}

void setIndependiente(SegundoGrado &ecuacion, int terminoIndependiente)
{
    ecuacion.terminoIndependiente=terminoIndependiente;
}
int getIndependiente(SegundoGrado ecuacion)
{
    return ecuacion.terminoIndependiente;
}
boolean existeRaiz(SegundoGrado ecuacion)
{
    if(((ecuacion.terminoLineal*ecuacion.terminoLineal)-(4*ecuacion.terminoCuadratico*ecuacion.terminoIndependiente))>=0)
        return TRUE;
    else
        return FALSE;

}

//Precondición: existeRaiz(ecuacion)
void resolverEcuacionSegundo(SegundoGrado ecuacion, float &raiz1, float &raiz2){

    if (discriminante(ecuacion)==0)
    {
        raiz1=ecuacion.terminoLineal/(2*ecuacion.terminoCuadratico);
        raiz2=raiz1;

    }
    else{
        raiz1=(ecuacion.terminoLineal+(sqrt(discriminante(ecuacion))))/(2*ecuacion.terminoCuadratico);
        raiz2=(ecuacion.terminoLineal-(sqrt(discriminante(ecuacion))))/(2*ecuacion.terminoCuadratico);
    }

}
float discriminante(SegundoGrado ecuacion)
{

    return ((ecuacion.terminoLineal*ecuacion.terminoLineal)-(4*ecuacion.terminoCuadratico*ecuacion.terminoIndependiente));
}/*
void guardarSegundoGrado(SegundoGrado ecuacion, FILE* archivo);
void cargarSegundoGrado(SegundoGrado &ecuacion, FILE* archivo);*/
void sumaSegunda(SegundoGrado ecuacion1, SegundoGrado ecuacion2,SegundoGrado &resultado){
    resultado.terminoCuadratico=ecuacion1.terminoCuadratico+ecuacion2.terminoCuadratico;
    resultado.terminoLineal=ecuacion1.terminoCuadratico+ecuacion2.terminoLineal;
    resultado.terminoIndependiente=ecuacion1.terminoIndependiente+ecuacion2.terminoIndependiente;
}
