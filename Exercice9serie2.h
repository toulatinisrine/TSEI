#ifndef EXERCICE9SERIE2_H_INCLUDED
#define EXERCICE9SERIE2_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
int E9()
{
int W0,W1,W,n,i,SV;
W0=0;
W1=1;
W=1;
printf("entrer n\n");
scanf("%d",n);
for ( i=2;i<=n;i++)
    {SV+=(W=5*W1+W0+W);}
    printf("somme des valeurs est %d\n",SV,n);
}

#endif // EXERCICE9SERIE2_H_INCLUDED
