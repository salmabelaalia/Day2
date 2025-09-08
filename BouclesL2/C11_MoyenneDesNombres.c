#include <stdio.h>

int main() {
    int nombre, compteur = 0, somme = 0;

    printf("Entrez des nombres positifs (0 pour arrêter) : \n");

    while (1) {
        scanf("%d", &nombre);
        if (nombre == 0) break;
        somme += nombre;
        compteur++;
    }

    if (compteur > 0)
        printf("Moyenne = %.2f\n", (float)somme / compteur);
    else
        printf("Aucun nombre entré.\n");

    return 0;
}
