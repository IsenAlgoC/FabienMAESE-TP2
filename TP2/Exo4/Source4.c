#include <stdio.h>
#include <stdlib.h>


int main() {

	
	srand((unsigned)time());
	int n =rand()&1000;
	n = rand() & 1000;					// deuxième initialisation de rand car on n'a pas beaucoup de variations
										// Il est difficile, en se basant sur le temps, d'obtenir des nombres vraiment aléatoires
	int i = 0;							// lorsque l'on exécute le programme plusieurs fois en peu de temps.
	int score = 0;

	while (i != n) {

		printf("\n Entrez un nombre : ");
		scanf_s("%d", &i);

		if (i < n) {
			printf("\nTrop petit");
		}

		if (i > n) {
			printf("\nTrop grand");
		}

		score += 1;

	}

	printf("\nBravo, votre score est de %d", score);
}
