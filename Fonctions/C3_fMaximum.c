#include <stdio.h>

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &x, &y);
    printf("Le maximum est : %d\n", maximum(x, y));
    return 0;
}

