#include <stdio.h>

int main() {
    int base, exp;
    long resultat = 1;

    printf("Entrez la base (positive) : ");
    scanf("%d", &base);

    printf("Entrez l'exposant (non négatif) : ");
    scanf("%d", &exp);

    while (exp > 0) {
        resultat *= base;
        exp--;
    }

    printf("Résultat = %ld\n", resultat);
    return 0;
}
