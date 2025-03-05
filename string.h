#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
<<<<<<< HEAD
#include <stdio.h>
#include "boolean.h"

const int MAX = 80;
typedef char* string;
=======

#include "boolean.h"

const int MAX = 80;
typedef char string[MAX];
>>>>>>> 14caf5c (commit)

int strlar (string s);
/* devuelve el largo del string s */
void print (string s);
/* imprime el string s por pantalla */
void scan (string &s);
/* lee el string s desde teclado */
void strmay(string s);
/* convierte el string a maysucula */
boolean strmen (string s1, string s2);
/* determina si s1 es alfab�ticamente menor que s2 */
<<<<<<< HEAD
boolean streq (const string s1,const string s2);
/* determina si los strings s1 y s2 son iguales */
void strcrear (string &s);
/*crea una cadena din�mica vac�a */
=======
boolean streq (string s1, string s2);
/* determina si los strings s1 y s2 son iguales */
>>>>>>> 14caf5c (commit)
void strcop (string &s1, string s2);
/* copia el contenido del string s2 en s1 */
void strcon (string &s1, string s2);
/* concatena el contenido de s2 al final de s1 */
void strswp (string &s1, string &s2);
/* intercambia los contenidos de s1 y s2 */


// Funci�n para verificar si una cadena es alfab�tica
boolean esAlfabetico(string s);
// Funci�n para convertir un n�mero en formato string a entero
int stringAEntero(string s);


#endif // STRING_H_INCLUDED
