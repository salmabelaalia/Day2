#include <stdio.h>

int main() {
    int n, max;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    max = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] > max)
            max = tab[i];
    }

    printf("Le maximum = %d\n", max);
    return 0;
}

