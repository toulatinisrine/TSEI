#ifndef EXERCICE7SERIE2_H_INCLUDED
#define EXERCICE7SERIE2_H_INCLUDED

int E7(){
printf("hello" \n ");
  int S=0, nbr, i;
  printf(" Entrez un nombre: ");
  scanf("%d",&nbr);

  for(i = 1; i < nbr; ++i){
    if(nbr%i == 0){
       S= S+i;}
  }
  if( S== nbr){
  printf(" Nombre parfait");
  }
  else  {
  printf(" n'est pas un Nombre parfait");
  }
  return 0;
}

#endif // EXERCICE7SERIE2_H_INCLUDED
