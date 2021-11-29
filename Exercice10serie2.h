#ifndef EXERCICE10SERIE2_H_INCLUDED
#define EXERCICE10SERIE2_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
int E10(){
	int b, s;
	printf("Entrer s: ");
	scanf("%d", &s);
	b = s / 200;
	s = s % 200;
	if(b > 0){
    if(b == 1)
    printf("%d repartition billet de 200\n",b);
    else
    printf("%d repartition billets de 200\n",b);
	}

	b = s / 100;
	s = s % 100;
	if(b > 0){
    if(b == 1)
    printf("%d repartition billet de 100\n",b);
    else
    printf("%d repartition billets de 100\n",b);
	}
	b = s / 50;
	s = s % 50;
	if(b > 0){
    if(b == 1)
    printf("%d repartition billet de 50\n",b);
    else
    printf("%d repartition billets de 50\n",b);
	}

	b = s / 20;
	s = s % 20;
	if(b > 0){
	if(b == 1)
	printf("%d repartition billet de 20\n",b);
	else
    printf("%d repartition billets de 20\n",b);
	}

	b = s / 10;
	s = s % 10;
	if(b > 0){
    if(b == 1)
	printf("%d repartition piece de 10\n",b);
    else
    printf("%d repartition pieces de 10\n",b);
	}

	if(s > 0){
    if(s == 1)
    printf("%d repartition piece de 1\n",s);
    else
    printf("%d repartition pieces de 1\n",s);
	}
}


#endif // EXERCICE10SERIE2_H_INCLUDED
