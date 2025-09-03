#include <stdio.h>

int main() {
    int n1, n2;
    printf("Entrez le nombre d'elements du premier tableau : ");
    scanf("%d", &n1);
    printf("Entrez le nombre d'elements du deuxieme tableau : ");
    scanf("%d", &n2);

    int tab1[n1], tab2[n2], fusion[n1+n2];

    printf("Entrez les elements du premier tableau :\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &tab1[i]);

    printf("Entrez les elements du deuxieme tableau :\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &tab2[i]);

    for (int i = 0; i < n1; i++)
        fusion[i] = tab1[i];
    for (int i = 0; i < n2; i++)
        fusion[n1+i] = tab2[i];

    printf("Tableau fusionne :\n");
    for (int i = 0; i < n1+n2; i++)
        printf("%d ", fusion[i]);

    return 0;
}

