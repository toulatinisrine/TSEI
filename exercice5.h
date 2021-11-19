#ifndef EXERCICE5_H_INCLUDED
#define EXERCICE5_H_INCLUDED
int E5()
{ int b100DH, b50DH, b10DH, b5DH,b1DH ,argent;

    printf("veuillez entrer somme d'argent\n");
    scanf("%d", &argent);
    b100DH = argent/100;
    argent = argent%100;
    printf("la répartition des billets est\%d\n",b100DH);
    b50DH = argent/50;
    argent = argent%50;
    printf("la répartition des billets est \%d\n",b50DH);
    b10DH = argent/10;
    argent = argent%10;
    printf("la répartition des billets est \%d\n",b10DH);
    b5DH = argent/5;
    argent = argent%5;
    printf("la répartition des billets est\%d\n",b5DH);
    b1DH = argent/1;
    argent = argent%1;
    printf("la répartition des billets est\%d\n",b1DH);
    getch ();
}


#endif // EXERCICE5_H_INCLUDED
