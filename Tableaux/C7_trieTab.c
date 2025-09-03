#include <stdio.h>

int main() {
    int n, temp;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (tab[i] > tab[j]) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }

    printf("Tableau trie :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}

