#include <stdio.h>
#include <string.h>

void inverser(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char texte[100];
    printf("Entrez une chaine : ");
    scanf("%s", texte);
    inverser(texte);
    printf("Chaine inversee : %s\n", texte);
    return 0;
}

