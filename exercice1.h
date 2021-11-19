#ifndef EXERCICE1_H_INCLUDED
#define EXERCICE1_H_INCLUDED

int E1()
{ float PHT;
  int Q ;
  float TTC=((Q * PHT) + (Q * PHT) )* 0.2;
    printf("veuillez entrer le prix unitaire hors taxe\n");
    scanf ("%f",&PHT);
    printf("veuillez entrer la quantité du produit\n");
    scanf ("%d",&Q);
    printf("le prix final est \n%.2f\n",TTC );
    getch ();
}

#endif // EXERCICE1_H_INCLUDED
