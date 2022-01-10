#ifndef EXERCICE2FONCTIONS_H_INCLUDED
#define EXERCICE2FONCTIONS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
float fct1,fct2,fct3,fct4,fct5,fct9;
char fonction;
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{ system("color D0");
 float F1(int x)
 float x;
{
float fct1;
float x;
fct1=arcsin(x)/sqrt(1-x*x);
return fct1;
}
float F2(int x)
{
    system("color D1");
float fct2;
float x;


fct2=1./sqrt(1+exp(2*x));


    return fct_2;
}
float F3(int n)
{
    system("color D2");
float fct3;
float x;


fct3=arcsin(x);


    return fct_3;
}
float F4(int x)
{
    system("color D3");
float fct4;
float x;

fct4=arcos(x);


return fct4;
}
float F5(int x)
{
    system("color D2");
float fct5;
float x;


fct5=1./exp(x)+1;


    return fct5;
}
float F9(int n)
{
    system("color D2");
float fct9;
float x;


fct9=(1+x*x)*exp(x)*cos(x);


    return fct_9;
}
switch(fonction)
{
case 'F1':
   printf("le resultat de la fonction  =%f",F1(x)));
   break;
   case 'F2':
   printf("le resultat de la fonction   =%f",F2(x));
   break;
   case 'F3':
   printf("le resultat de la fonction  =%f",F3(x));
   break;
   case 'F4':
   printf("le resultat de la fonction  =%f",F4(x));
   break
   case 'F5':
   printf("le resultat de la fonction  =%f",F5(x));
   break;
   case 'F9':
   printf("le resultat de la fonction  =%f",F9(x));
   break;

}
}


#endif // EXERCICE2FONCTIONS_H_INCLUDED
