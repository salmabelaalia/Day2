#include <stdio.h>

int main() {
    int n, somme = 0;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        somme += tab[i];
    }

    printf("La somme = %d\n", somme);
    return 0;
}

