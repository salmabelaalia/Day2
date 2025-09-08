#include <stdio.h>

long factorielle(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorielle(n - 1);
}

int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    printf("La factorielle de %d est : %ld\n", n, factorielle(n));
    return 0;
}

