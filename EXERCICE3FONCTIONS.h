#ifndef EXERCICE3FONCTIONS_H_INCLUDED
#define EXERCICE3FONCTIONS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int U(int n)
{
    if (n==0)
    return 1;
    else if (n==1)
    return 2;
    else if (n%2 !=0)
    return U(n-1)+U(n-2);
    else
    return U(n-1)+ 3*U(n-2);

}
int S_U(int n)
{
    for (int i=0;i<=n;i++)
    {
      s=U(i);
      printf("la valeur de n = %d est %d \n ",i,s);
    }
    return s;
    }

int main()
{
    int n;
    printf(" donner une valeur pour n");
    scanf("%d",&n);
    printf(" la somme de n valeur %d est %d  \n ", n,S_U(n));

    return 0;
}


#endif // EXERCICE3FONCTIONS_H_INCLUDED
