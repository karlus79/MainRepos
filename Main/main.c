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
  printf("Caractere suivant : %c\n", *pointeurTexte);

  return 0;
}
