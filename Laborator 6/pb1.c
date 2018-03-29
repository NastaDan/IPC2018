#include <stdio.h>
void main()
{
    int n, i, line, coeffs;
    printf("Input how many lines: ");
    scanf("%d", &n);
    for (line = 1; line <= n; line++)
    {
        coeffs = 1;
        for (i = 1; i <= line; i++)
        {
            printf("%d ", coeffs);
            coeffs = coeffs * (line - i) / i;
        }
        printf("\n");
    }
}