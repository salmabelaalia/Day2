#include <stdio.h>

int main() {
    int n, reste;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    while (n != 0) {
        reste = reste*10 + n % 10;
        n /= 10;
    }
    printf("Nombre inverse : %d",reste);
    return 0;
}

