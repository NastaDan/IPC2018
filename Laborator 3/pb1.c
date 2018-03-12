#include <stdio.h>
#include <math.h>
void main(void)
{
    int n, d = 2, test = 1;
    printf("n= ");
    scanf("%d", &n);

    if (n % 2 == 0 || n % 3 == 0)
        test = 0;
    for (d = 5; d * d <= n; d += 6)
        if (n % d == 0 || n % (d + 2) == 0)
            test = 0;
    if (n <= 3)
        test = 1;
    if (n <= 1)
        test = 0;
    if (test == 1)
        printf("The number is prime");
}