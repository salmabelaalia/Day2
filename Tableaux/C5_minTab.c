#include <stdio.h>

int main() {
    int n, min;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min)
            min = tab[i];
    }

    printf("Le minimum = %d\n", min);
    return 0;
}

