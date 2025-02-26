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
        print("%c",s[i]);
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
        return false;
    }
    else
    {
        if(aux2[i]=='\0')
        {
            return true;
        }
        else
        {
            if(aux2[i]=='\0')
            {
                return false;
            }
            else
            {
                return aux1[i]<aux2[i];
            }
        }
    }
}
/*------------------------------------------*/
boolean streq (string s1, string s2)
{
    int i=0;
    strcop(aux1, s1):
    strcop(aux2, s2);

    strmay(aux1);
    strmay(aux2);
    while(s[i]!='\0' && aux2[i]!='\0' && s1[i]==s2[i])
    {
        i++;
    }
    return (s1[i]=='\0' && s2[i]=='\0');
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
void strcop(string &s1, string s2)
{
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
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
    int i=strlen(s1);
    int j=0;
    while(i+j<MAX-1 && S2[j]!='\0')
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
    boolean seguir=true;
    while(s[i]!='\0' && seguir)
    {
        if(!((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90))
        {
            seguir=false;
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
