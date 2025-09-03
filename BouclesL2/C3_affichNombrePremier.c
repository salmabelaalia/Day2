#include <stdio.h>

int main() {
    int n;
    printf("Entrez une borne : ");
    scanf("%d", &n);

    printf("Nombres premiers de 1 a %d :\n", n);
    for (int i = 2; i <= n; i++) {
        int estPremier = 1;
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                estPremier = 0;
                break;
            }
        }
        if (estPremier) {
            printf("%d ", i);
        }
    }
    return 0;
}

