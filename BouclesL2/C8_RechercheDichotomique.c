#include <stdio.h>

int main() {
    int n, i, val, debut, fin, milieu, trouve = 0;

    printf("Entrez le nombre d'éléments du tableau trié : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les éléments triés : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &val);

    debut = 0;
    fin = n - 1;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;
        if (tab[milieu] == val) {
            trouve = 1;
            break;
        } else if (tab[milieu] < val) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    if (trouve)
        printf("Valeur trouvée à l'indice %d\n", milieu);
    else
        printf("Valeur non trouvée.\n");

    return 0;
}
