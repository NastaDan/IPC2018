#include <stdio.h>
void main(void)
{
    int a, b;
    printf("a= ");
    scanf("%i", &a);
    printf("b= ");
    scanf("%i", &b);
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    printf("Greatest common divisor: %i", a);
}