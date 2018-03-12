#include <stdio.h>
void main(void)
{
    int n;
    long long z = 2;
    printf("n= ");
    scanf("%i", &n);
    printf("Prime factors of %i are: ", n);
    while (z * z <= n)
    {
        if (n % z == 0)
        {
            printf("%i ", z);
            n = n / z;
        }
        else
            z++;
    }
}