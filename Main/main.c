#include <stdio.h>

int main()
{
  int valeur = 42;
  int *pointeur = &valeur;

  printf("Debut programme\n");

  printf("Valeur via le pointeur : %d\n", *pointeur);

  char texte[] = "Bonjour";
  char *pointeurTexte = texte;
  printf("Premier caractere : %c\n", *pointeurTexte);

  pointeurTexte++;
  printf("Caractere n°2 : %c\n", *pointeurTexte);

  pointeurTexte++;
  printf("Caractere n°3 : %c\n", *pointeurTexte);

  pointeurTexte++;
  printf("Caractere n°4 : %c\n", *pointeurTexte);

  *pointeurTexte = 'B';
  printf("Chaine modifiée : %s\n", texte);

  return 0;
}
