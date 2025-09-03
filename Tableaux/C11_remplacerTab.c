#include <stdio.h>

int main() {
    int n, oldVal, newVal;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);

    printf("Entrez la valeur a remplacer : ");
    scanf("%d", &oldVal);
    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &newVal);

    for (int i = 0; i < n; i++) {
        if (tab[i] == oldVal)
            tab[i] = newVal;
    }

    printf("Tableau modifie :\n");
    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);

    return 0;
}
