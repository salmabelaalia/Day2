#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i+1);
        scanf("%d", &tab[i]);
    }

    printf("Les elements sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}

