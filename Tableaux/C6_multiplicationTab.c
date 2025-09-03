#include <stdio.h>

int main() {
    int n, facteur;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    printf("Entrez le facteur : ");
    scanf("%d", &facteur);

    for (int i = 0; i < n; i++) {
        tab[i] *= facteur;
    }

    printf("Tableau multiplie :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}

