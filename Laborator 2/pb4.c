#include <stdio.h>
void main(void)
{
    int n, c;
    int a = 0;
    int b = 1;
    int i = 2;
    printf("n= ");
    scanf("%i", &n);
    printf("The Fibonacci sequence is: %i %i ", a, b);
    while (i <= n)
    {
        c = a + b;
        i++;
        printf("%i ", c);
        a = b;
        b = c;
    }
}