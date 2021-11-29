#ifdef EXERCICE1-SERIE2_H_INCLUDED
#define EXERCICE1-SERIE2_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

 int E1()
{
 float  PA,CA,Fr,FV,HT,TVA,TTC,x,y,z;
 char Type;
 system ("color 4A");
 printf("Donner le type de produit \n");
 Type=getchar();
 printf("Donner le prix d'achat \n");
 scanf("%f",&PA);
 if (PA>9000)
 {
     {
     Fr=PA*4/100;
     }
 if  (PA>2000)
 {
     Fr=PA*0.1;
 }
 else
   {
       Fr=0.0;
   }
 }
 CA=PA+Fr;
 FV=CA*0.1;
 switch (Type) {
case 'x':
  TVA= 30./100.;

 break;
case 'y':
  TVA= 38./100.;;
 break;
case 'z':
 TVA= 43./100.; ;
 break;
 }
HT=CA+FV;
TTC=HT+HT*TVA;
printf("\nle prix d achat est %f",PA);
printf("\nle prix de vente est %f",Fr);
printf("\nle tva est %f,TVA");
printf("\nle prix de vente est %f",HT);
printf("\nles frais est %f",Fr);
printf("\nle prix ttle est %f",TTC);
return 0;



}




