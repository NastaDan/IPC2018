#include <stdio.h>

void main(void)
{
    int n;
    printf("n= ");
    scanf("%i", &n);
    printf("Sum equals to: %i", n * (n + 1) / 2);
}