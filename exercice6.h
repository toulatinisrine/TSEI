#ifndef EXERCICE6_H_INCLUDED
#define EXERCICE6_H_INCLUDED


int E6()
{ float prix_unitaire,Montant;
  int Q ;
  float MB=Q *prix_unitaire ;
    printf("veuillez entrer le prix unitaire\n");
    scanf ("%f",&prix_unitaire);
    printf("veuillez entrer la quantité \n");
    scanf ("%d",&Q);
    if (MB<200);
    Montant=MB+25;
    printf("le prix final est \n%.2f\n",Montant);
    if (MB>200);
    Montant=MB;
    printf("le prix final est \n%.2f\n",Montant);

    getch ();
}
#endif // EXERCICE6_H_INCLUDED
