#ifndef EXERCICE7_H_INCLUDED
#define EXERCICE7_H_INCLUDED
int E7()
{int x,y,z,max;
 printf("veuillez entrer la valeur de x \n");
 scanf ("%d",&x);
 printf("veuillez entrer la valeur de y \n");
 scanf ("%d",&y);
 printf("veuillez entrer la valeur de z \n");
 scanf ("%d",&z);
 max=(x>y)? x:y ;
 max=(max>z)? max:z;
printf("maximum valeur est %d\n",max);

 getch();
 }


#endif // EXERCICE7_H_INCLUDED
