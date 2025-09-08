#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, suivant;

    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);

    printf("Suite de Fibonacci : ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            suivant = i; // F(0)=0, F(1)=1
        } else {
            suivant = a + b;
            a = b;
            b = suivant;
        }
        printf("%d ", suivant);
    }
    printf("\n");
    return 0;
}
