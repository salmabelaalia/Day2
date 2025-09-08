#include <stdio.h>

int main() {
    char *jours[] = {"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    int choix, i;

    printf("Choisissez un jour (1=Lundi ... 7=Dimanche) : ");
    scanf("%d", &choix);

    if (choix < 1 || choix > 7) {
        printf("Jour invalide.\n");
    } else {
        printf("Jours à partir de %s :\n", jours[choix-1]);
        for (i = choix-1; i < 7; i++) {
            printf("%s\n", jours[i]);
        }
    }

    return 0;
}
