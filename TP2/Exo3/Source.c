#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 0;
	printf("Entrez une annee : ");
	scanf_s("%d", &n);
	while (n > 10000) {
		printf("Entrez une autre annee plus petite : ");
		scanf_s("%d", &n);
	}

	if (n % 4 == 0) {
		printf("\n%d est une annee bisextile", n);
	}
	else {
		printf("\n%d n'est pas une annee bisextile", n);
	}



}
