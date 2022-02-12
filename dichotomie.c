
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

float function (float x) {
{ x=cos(x)/sqrt(1+sqrt(x));
 }
    return x;
    }
void zero (float a, float b){
system("color D1");
 float a0=a;
 float an=a0;
 float b0=b;
float bn=b0;
float x0=(a+b)/2;
float xn=x0;
 int n=0;

   while(xn>an && xn<bn){
printf("le nombre d'iteration de xn est = %.2f  %d \n",xn,n );
     if( function(an)*function(bn)>0)
   { an=xn;
    xn=(xn+bn)/2;
    n++;
    printf("le nombre d'iteration de xn est=%.2f%d\n",xn,n);
    }
    else
        {
    bn=xn;
    xn=(xn+an)/2;
   n++;
    printf("le nombre d'iteration de xn est=%.2f %d\n",xn,n);
       }
       }
        printf("le nombre d'iteration de xn est=%.2f%d\n",xn,n);
        }
  int main()
  {
    zero(0.0,10.0);
    printf("le zero du fonction est : %.2f\n",function(0));
    return 0;
}


