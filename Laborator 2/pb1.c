#include <stdio.h>
void main(void)
{
    int n;
    int i = 1;
    int s = 0;
    printf("n= ");
    scanf("%i", &n);

    while (i <= n)
    {
        s = s + i;
        i++;
    }
    printf("Sum equals to: %i", s);
}