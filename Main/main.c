#include <stdio.h>

int main()
{
  int valeur = 42;
  int *pointeur = &valeur;

  printf("Debut programme\n");

  printf("Valeur via le pointeur : %d\n", *pointeur);

  return 0;
}
