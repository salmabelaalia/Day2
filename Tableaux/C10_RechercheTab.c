#include <stdio.h>

int main() {
    int n, x, trouve = 0;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);

    printf("Entrez l'element a rechercher : ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (tab[i] == x) {
            trouve = 1;
            break;
        }
    }

    if (trouve)
        printf("Element trouve !\n");
    else
        printf("Element non trouve.\n");

    return 0;
}

