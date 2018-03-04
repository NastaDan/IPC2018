#include <stdio.h>
void main(void)
{
    int n, x, c;
    int i = 0;
    printf("The reference number= ");
    scanf("%i", &n);
    printf("The number we're searching for: ");
    scanf("%i", &x);
    while (n != 0)
    {
        c = n - (n / 10) * 10;
        while (c == x)
            i++;
        n = n / 10;
    }
    printf("The number %i is present %i times", n, i);
}