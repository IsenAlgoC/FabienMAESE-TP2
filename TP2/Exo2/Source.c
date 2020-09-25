#include <stdio.h>
#include <stdlib.h>


int maxi(float A, float B, float C)           // détermine le maximum entre les 3 variables entrées
{

    if (A <= B) {
        if (B <= C) {
            return(C);
        }

        else {
            return(B);
        }
    }


    if (A >= B) {
        if (A >= C) {
            return(A);
        }
        else {
            return(C);
        }


    }

}

void permute(float* A, float* B) {      //fonction qui permet de permuter 2 variables
    float tmp = *A;
    *A = *B;
    *B = tmp;

}
                // fonction qui va mettre les 3 mesures dans l'ordre, de la plus grande à la plus petite




int main() {

    float A = 1;
    float B = 1;
    float C = 1;
    int i = 1;

    while (i==1) {

        printf("\n entrer la premiere mesure : ");
        scanf_s("%f", &A);

        while (A > 150) {											// recommencer la saisie tant que la mesure est trop grande
            printf("entrez une autre mesure plus petite: ");
            scanf_s("%f", &A);
        }
        printf("\n entrer la deuxieme mesure : ");
        scanf_s("%f", &B);

        while (B > 150) {											// recommencer la saisie tant que la mesure est trop grande
            printf("entrez une autre mesure plus petite: ");
            scanf_s("%f", &B);
        }

        printf("\n entrer la troisieme mesure : ");
        scanf_s("%f", &C);

        while (C > 150) {											// recommencer la saisie tant que la mesure est trop grande
            printf("entrez une autre mesure plus petite: ");
            scanf_s("%f", &C);

        }


        if (maxi(A, B, C) == C) {                           // Ces 3 if vont mettre les valeurs dans l'ordre décroissant 
            permute(&A, &C);
            if (C >= B) {
                permute(&C, &B);
            }

        }

        if (maxi(A, B, C) == B) {
            permute(&B, &A);
            if (C >= B) {
                permute(&C, &B);
            }
        }

        if (maxi(A, B, C) == A) {
            if (C >= B) {
                permute(&C, &B);
            }
        }

        if (A <= 55 && B <= 35 && C <= 25) {
            printf("VALIDE");
        }
        else {
            printf("NON VALIDE");
        }


        printf("\n Voulez-vous traiter un autre colis? Entrez 1 si oui, 0 sinon ");
        scanf_s("%d", &i);

    }
}
