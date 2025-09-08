#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;
    char password[100]; // limite max = 100
    char caracteres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

    printf("Entrez la longueur du mot de passe : ");
    scanf("%d", &n);

    srand(time(NULL)); // initialiser le générateur aléatoire

    for (i = 0; i < n; i++) {
        int index = rand() % (sizeof(caracteres) - 1);
        password[i] = caracteres[index];
    }
    password[n] = '\0';

    printf("Mot de passe généré : %s\n", password);
    return 0;
}
