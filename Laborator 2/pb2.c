#include <stdio.h>
void main(void)
{
    int n, c;
    int s = 0;
    printf("n= ");
    scanf("%i", &n);
    while (n != 0)
    {
        c = n - (n / 10) * 10;
        s = s + c;
        n = (n / 10);
    }
    printf("Sum equals to: %i", s);
}