#include <stdio.h>
#include <stdlib.h>

int main() {
	
											// La valeur maximale pour un unsigned short int est 65,535 (car int est codé sur 16 bits)
											// Donc la valeur maximale de n est 361
	int n = 361;
	int k = 0;
	int sum = 0;

	while (k <= n) {							// avec une boucle while
		if (65535 - sum <= k) {
			printf("\nCapacite de calcul depassee, entrer un entier moins grand\n");
			break;
		}
		sum += k;
		k += 1;
	}
	int A = 65536 - sum;
	if (A >= 0) {
		printf("\nLa somme des %d premiers entiers est %d\n", n, sum);
	}
	
}