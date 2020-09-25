#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n = 100;
	int i = 0;
	int sum1 = 0;

	for (i; i <= n; ++i) {						// avec une boucle for
		sum1 += i;
	}
	printf("\nLa somme des %d premiers entiers est %d\n", n, sum1);

	int j = 0;
	int sum2 = 0;

	do {										// avec une boucle do...while
		sum2 += j;
		j += 1;
	} while (j <= n);

	printf("\nLa somme des %d premiers entiers est %d\n", n, sum2);


	int k = 0;
	int sum3 = 0;

	while (k <= n) {							// avec une boucle while
		sum3 += k;
		k += 1;
	}
	printf("\nLa somme des %d premiers entiers est %d\n", n, sum3);
}