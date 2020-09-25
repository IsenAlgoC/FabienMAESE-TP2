#include <stdio.h>
#include <stdlib.h>

int main() {
	
										// La valeur maximale pour un unsigned short int est 65,535 (car short int est codé sur 16 bits)
										// Donc la valeur maximale de n est 361
	unsigned short int n = 0;
	unsigned short int k = 0;
	unsigned short int sum = 0;

	//int j = 0;
	//int sum2 = 0;
	//do {										// avec une boucle do...while
	//	sum2 += j;
	//	j += 1;
	//} while (j <= n);

	//while (k <= n) {							// avec une boucle while
	//	if (65535 - sum <= k) {
	//		printf("\nCapacite de calcul depassee, entrer un entier moins grand\n");
	//		break;
	//	}
	//	sum += k;
	//	k += 1;
	//}
	//int A = 65536 - sum;
	//if (A >= 0) {
	//	printf("\nLa somme des %d premiers entiers est %d\n", n, sum);
	//}

		
	printf("entrez un entier: ");
	scanf_s("%hu", &n);
	while (n > 361) {											// recommencer la saisie tant que n est trop grand 
		printf("entrez un autre entier plus petit: ");
		scanf_s("%hu", &n);
	}

	for (k; k <= n; ++k) {						// Au-delà des valeurs n permises, la somme est négative
		sum += k;
	}
	printf("\nLa somme des %d premiers entiers est %d\n", n, sum);
	
}