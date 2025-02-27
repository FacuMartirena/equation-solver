#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <stdio.h>
#include "boolean.h"

const int MAX = 80;
typedef char* string;

int strlar (string s);
/* devuelve el largo del string s */
void print (string s);
/* imprime el string s por pantalla */
void scan (string &s);
/* lee el string s desde teclado */
void strmay(string s);
/* convierte el string a maysucula */
boolean strmen (string s1, string s2);
/* determina si s1 es alfabéticamente menor que s2 */
boolean streq (const string s1,const string s2);
/* determina si los strings s1 y s2 son iguales */
void strcrear (string &s);
/*crea una cadena dinámica vacía */
void strcop (string &s1, string s2);
/* copia el contenido del string s2 en s1 */
void strcon (string &s1, string s2);
/* concatena el contenido de s2 al final de s1 */
void strswp (string &s1, string &s2);
/* intercambia los contenidos de s1 y s2 */


// Función para verificar si una cadena es alfabética
boolean esAlfabetico(string s);
// Función para convertir un número en formato string a entero
int stringAEntero(string s);


#endif // STRING_H_INCLUDED
