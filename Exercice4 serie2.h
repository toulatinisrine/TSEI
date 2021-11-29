#ifndef EXERCICE4_SERIE2_H_INCLUDED
#define EXERCICE4_SERIE2_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int E4(){
    printf("hello" \n ");
	int i, nbr;
	int s = 0;
	printf("Donner un entier : ");
	scanf("%d",&nbr);

	printf("\La somme des entiers est : S ",s);
	for(i=1;i<=nbr;i++)
	{s = s  + i;
		if(i == 1)
    printf("= %d ", i);
		else
    printf("+ %d ", i);
	}
	printf("= %d\n",s);
}



#endif // EXERCICE4_SERIE2_H_INCLUDED
