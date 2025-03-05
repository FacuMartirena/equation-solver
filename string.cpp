#include "string.h"

/*------------------------------------------*/
int strlar (string s)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}
/*------------------------------------------*/
void print (string s)
{
    int i=0;
    while(s[i]!='\0')
    {
<<<<<<< HEAD
        printf("%c",s[i]);
=======
        print("%c",s[i]);
>>>>>>> 14caf5c (commit)
        i++;
    }
}
/*------------------------------------------*/
void scan(string &s)
{
    char letra;
    scanf("%c",&letra);
    int i=0;
    while(i<MAX-1 && letra!='\n')
    {
        s[i]=letra;
        i++;
    }
    s[i]='\0';
}
/*------------------------------------------*/
boolean strmen(string s1, string s2)
{
    int i=0;
    string aux1;
    string aux2;
    strcop(aux1, s1);
    strcop(aux2, s2);

    strmay(aux1);
    strmay(aux2);
    while(aux1[i]=='\0' && aux2[i]!='\0' &&s1[i]==s2[i])
    {
        i++;
    }
    if(aux1[i]=='\0' && aux2[i]=='\0')
    {
<<<<<<< HEAD
        return FALSE;
=======
        return false;
>>>>>>> 14caf5c (commit)
    }
    else
    {
        if(aux2[i]=='\0')
        {
<<<<<<< HEAD
            return TRUE;
=======
            return true;
>>>>>>> 14caf5c (commit)
        }
        else
        {
            if(aux2[i]=='\0')
            {
<<<<<<< HEAD
                return FALSE;
            }
            else
            {
                if(aux1[i]<aux2[i])
                    return TRUE;
                else
                    return FALSE;
=======
                return false;
            }
            else
            {
                return aux1[i]<aux2[i];
>>>>>>> 14caf5c (commit)
            }
        }
    }
}
/*------------------------------------------*/
<<<<<<< HEAD
boolean streq (const string s1,const string s2)
{
    string aux1;
    string aux2;
    int i=0;
    strcop(aux1, s1);
=======
boolean streq (string s1, string s2)
{
    int i=0;
    strcop(aux1, s1):
>>>>>>> 14caf5c (commit)
    strcop(aux2, s2);

    strmay(aux1);
    strmay(aux2);
<<<<<<< HEAD
    while(aux1[i]!='\0' && aux2[i]!='\0' && aux1[i]==aux2[i])
    {
        i++;
    }
    return (boolean)(aux1[i]=='\0' && aux2[i]=='\0');
=======
    while(s[i]!='\0' && aux2[i]!='\0' && s1[i]==s2[i])
    {
        i++;
    }
    return (s1[i]=='\0' && s2[i]=='\0');
>>>>>>> 14caf5c (commit)
}
/*------------------------------------------*/
void strmay(string s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }
    }
}
/*------------------------------------------*/
<<<<<<< HEAD
void strcrear (string &s){
    s = new char [1];
    s[0]='\0';
}
/*------------------------------------------*/
/*void strcop(string &s1, string s2)
=======
void strcop(string &s1, string s2)
>>>>>>> 14caf5c (commit)
{
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
<<<<<<< HEAD
} */

void strcop(string &s1, const string s2) {
    // Liberar la memoria previa de s1 si ya estaba asignada
    if (s1 != NULL) {
        delete[] s1;
    }
    // Asignar memoria dinámica para s1
    s1 = new char[strlar(s2) + 1]; // +1 para el carácter nulo '\0'
    // Copiar el contenido de s2 a s1
    int i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0'; // Asegurarse de que s1 esté terminado con '\0'
=======
>>>>>>> 14caf5c (commit)
}
/*------------------------------------------*/
void strswp(string &s1, string &s2)
{
    string aux;
    strcop(aux,s1);
    strcop(s1,s2);
    strcop(s2,aux);
}
/*------------------------------------------*/
void strcon(string &s1, string s2)
{
<<<<<<< HEAD
    int i=strlar(s1);
    int j=0;
    while(i+j<MAX-1 && s2[j]!='\0')
=======
    int i=strlen(s1);
    int j=0;
    while(i+j<MAX-1 && S2[j]!='\0')
>>>>>>> 14caf5c (commit)
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
}


// Función para verificar si una cadena es alfabética
boolean esAlfabetico(string s){
    int i=0;
<<<<<<< HEAD
    boolean seguir=TRUE;
    while(s[i]!='\0' && seguir)
    {
        if(!((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90)))
        {
            seguir=FALSE;
=======
    boolean seguir=true;
    while(s[i]!='\0' && seguir)
    {
        if(!((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90))
        {
            seguir=false;
>>>>>>> 14caf5c (commit)
        }
        i++;
    }
    return seguir;
}
// Función para convertir un número en formato string a entero
int stringAEntero(string s){
    int largo=strlar(s);
    int total=0;
    int potencia=1;
    for(int i=largo-1;i>=0;i--)
    {
        int numero=s[i]-48;
        total=total+numero*potencia;
        potencia=potencia*10;
    }
    return total;
}
