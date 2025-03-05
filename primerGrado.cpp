#include "primerGrado.h"
#include <iostream>

/*PrimerGrado crearPrimerGrado( int terminoLineal, int terminoIndependiente){
    PrimerGrado primerGrado;
    primerGrado.terminoLineal=terminoLineal;
    primerGrado.terminoIndependiente=terminoIndependiente;
    return primerGrado;
}*/

void crearPrimerGrado (int terminoLineal, int terminoIndependiente, PrimerGrado &pg)
{
    pg.terminoLineal=terminoLineal;
    pg.terminoIndependiente=terminoIndependiente;
}

void mostrarPrimerGrado(PrimerGrado ecuacion){
<<<<<<< HEAD
     if(ecuacion.terminoLineal>0)
        printf("%dx", ecuacion.terminoLineal);
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
    //
=======
    if(ecuacion.terminoIndependiente>0)
        std::cout << ecuacion.terminoLineal << "x + " << ecuacion.terminoIndependiente << " = 0" << std::endl;
        /*("%dx + %d=0",ecuacion.terminoLineal,ecuacion.terminoIndependiente);*/
    else
        if(ecuacion.terminoIndependiente==0)
            std::cout << ecuacion.terminoLineal << "x = 0" << std::endl;
          /*  print("%dx =0",ecuacion.terminoLineal);*/
        else
            std::cout << ecuacion.terminoLineal << "x " << ecuacion.terminoIndependiente << " = 0" << std::endl;
          /*  print("%dx %d=0",ecuacion.terminoLineal,ecuacion.terminoIndependiente)*/
>>>>>>> 14caf5c (commit)
}
void setTerminoLineal(PrimerGrado &ecuacion, int terminoLineal){
    ecuacion.terminoLineal=terminoLineal;
}
int getTerminoLineal(PrimerGrado ecuacion){
    return ecuacion.terminoLineal;
}

void setIndependiente(PrimerGrado &ecuacion, int independiente){
    ecuacion.terminoIndependiente=independiente;
}
int getIndependiente(PrimerGrado ecuacion){
    return ecuacion.terminoIndependiente;
}
void resolverEcuacionPrimer(PrimerGrado ecuacion, float &raiz)
{
    raiz=(ecuacion.terminoIndependiente/ecuacion.terminoLineal)*(-1);
    //raiz=(getTerminoIndependiente(ecuacion)/getTerminoLineal(ecuacion))*(-1)

}
void guardarPrimerGrado(PrimerGrado ecuacion, FILE* archivo){
    fwrite(&ecuacion,sizeof(PrimerGrado),1,archivo);

}
void cargarPrimerGrado(PrimerGrado &ecuacion, FILE* archivo)
{
    fread(&ecuacion,sizeof(PrimerGrado),1,archivo);

}
<<<<<<< HEAD
void sumaPrimera(PrimerGrado ecuacion1, PrimerGrado ecuacion2,PrimerGrado &nuevo){

    nuevo.terminoLineal=ecuacion1.terminoLineal+ecuacion2.terminoLineal;
    //setTerminoLineal(nuevo,getTerminoLineal(ecuacion1)+getTerminoLineal(ecuacion2));
    nuevo.terminoIndependiente=ecuacion1.terminoIndependiente+ecuacion2.terminoIndependiente;

=======
PrimerGrado sumaPrimera(PrimerGrado ecuacion1, PrimerGrado ecuacion2){
    PrimerGrado nuevo;
    nuevo.terminoLineal=ecuacion1.terminoLineal+ecuacion2.terminoLineal;
    //setTerminoLineal(nuevo,getTerminoLineal(ecuacion1)+getTerminoLineal(ecuacion2));
    nuevo.terminoIndependiente=ecuacion1.terminoIndependiente+ecuacion2.terminoIndependiente;
>>>>>>> 14caf5c (commit)
}


