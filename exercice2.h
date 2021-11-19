#ifndef EXERCICE2_H_INCLUDED
#define EXERCICE2_H_INCLUDED

int E2()
{int n1,n2,x;
 printf("veuillez entrer la valeur de n1 \n");
 scanf ("%d",&n1);
 printf("veuillez entrer la valeur de n2 \n");
 scanf ("%d",&n2);
 x=n1;
 n1=n2;
 n2=x;
 printf("la nouvelle valeur de n1 %d\n",n1);
 printf("la nouvelle valeur de n1 %d\n",n2);
 getch();
 }
#endif // EXERCICE2_H_INCLUDED
