#include <stdio.h>


void calculTest() // fonction
{
	int nb1;
	int nb2;
	printf(" --> Choisi un nombre ==> ");
	scanf("%d", &nb1);
	printf("~~> Choisis un deuxieme nombre ==> ");
	scanf("%d", &nb2);
	
	printf("%d\n", nb1 + nb2);
}

int main(void)
{
	/* 
		+ Addition
		- Soustraction
		* Multiplication
		/ Division -> 5 / 2 = 2
		% Modulo -> 5 % 2 = 1
	*/
	
	calculTest();
	return main();
}