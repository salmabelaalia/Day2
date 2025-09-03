#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab1[n], tab2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);
        tab2[i] = tab1[i];  // copie
    }

    printf("Tableau original : ");
    for (int i = 0; i < n; i++)
        printf("%d ", tab1[i]);

    printf("\nTableau copie : ");
    for (int i = 0; i < n; i++)
        printf("%d ", tab2[i]);

    return 0;
}

