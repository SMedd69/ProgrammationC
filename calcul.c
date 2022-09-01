#include <stdio.h>

void main()
{
	int nbr1;
	int nbr2;
	int resultat;
	
	printf(" ~~~~> Etape suivante <~~~~\n");
	printf(" Choisis un chiffre entre 1 et 10 ~~> ");
	scanf("%d", &nbr1);
	printf(" Choisis encore un deuxieme chiffre entre 1 et 10 ~~> ");
	scanf("%d", &nbr2);
	
	
	printf(" ~~~~> Maintenant Combien font %d + %d =  <~~", nbr1, nbr2);
	scanf("%d", &resultat);
	if (resultat == (nbr1 + nbr2))
	{
		printf(" Resultat correct ✓ ");
	}
	else
	{
		printf(" Faux !! ");
		main();
	}
}