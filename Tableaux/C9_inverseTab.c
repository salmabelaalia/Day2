#include <stdio.h>

int main() {
    int n, temp;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < n/2; i++) {
        temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }

    printf("Tableau inverse :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}

