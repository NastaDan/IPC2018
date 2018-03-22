#include <stdio.h>
void main(void)
{
    int i, j, n;
    printf("Enter the size of the matrix: ");
    scanf("%i", &n);
    int A[n][n];
    printf("Enter the values: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%i", &A[i][j]);
    }
    printf("The transpose is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
}