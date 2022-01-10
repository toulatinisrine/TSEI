#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
float fct_U,fct_W,fct_X,fct_Z;
char fonction;
int main ()
{ system("color D0");
 float U(int n)
 int n;
{
float fct_U;
int i;

 for (i=1;n>=i;i++)
{
fct_U=1./(n*n+i);

 }
    return fct_U;
}
float W(int n)
{
    system("color D1");
float fct_W;
int i;

 for (i=1;n>=i;i++)
{
fct_W=i/sqrt(n+i);

 }
    return fct_W;
}
float X(int n)
{
    system("color D2");
float fct_X;
int i;

 for (i=1;n>=i;i++)
{
fct_X=i/(n+i);

 }
    return fct_X;
}
float Z(int n)
{
    system("color D3");
float fct_Z;
int i;

 for (i=1;n>=i;i++)
{
fct_Z=factoriel(i);

 }
    return fct_Z/factoriel (i);
}
float factoriel(int n)
{
 if (n==0 || n==1)
    return 1;
else

    return n*factoriel(n-1);
}
switch(fonction)
{
case 'U':
   printf("la fonction u =%f",U(n));
   break;
   case 'W':
   printf("la fonction W =%f",W(n));
   break;
   case 'X':
   printf("la fonction X =%f",X(n));
   break;
   case 'Z':
   printf("la fonction Z =%f",Z(n));
   break;
}
}
