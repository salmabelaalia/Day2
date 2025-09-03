#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    printf("Elements pairs : ");
    for (int i = 0; i < n; i++) {
        if (tab[i] % 2 == 0)
            printf("%d ", tab[i]);
    }
    return 0;
}

