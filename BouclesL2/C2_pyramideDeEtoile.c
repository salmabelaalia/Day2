#include<stdio.h>

void main()
{
    int n;

    printf("Entrez une taille : ");
    scanf("%d",&n);

    for (int l = 0 ; l <= n ; l++)
    {
        for (int esp = 1 ; esp <= (n-l); esp++)
        {
           printf(" ");
        }

        for( int c = 0 ; c < (2*l-1) ; c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
