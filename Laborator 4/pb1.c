#include <stdio.h>
void main(void)
{
    int n, i, j;
    printf("n= ");
    scanf("%d", &n);
    printf("Secventa a este: ");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%i ", i);
    }
    printf("\nSecventa b este: ");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%i ", j);
    }
}