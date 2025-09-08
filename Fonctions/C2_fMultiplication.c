#include <stdio.h>

int multiplication(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &x, &y);
    printf("Le produit est : %d\n", multiplication(x, y));
    return 0;
}



