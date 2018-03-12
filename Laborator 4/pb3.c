#include <stdio.h>
void main(void)
{
    int n, i = 1, test = 1;
    printf("n= ");
    scanf("%d", &n);
    while (n / i >= 10)
        i = i * 10;
    while (n != 0)
    {
        int firstDigit = n / i;
        int lastDigit = n % 10;
        if (firstDigit != lastDigit)
        {
            test = 0;
        }
        n = (n % i) / 10;
        i = i / 100;
    }
    if (test == 1)
        printf("The number is a palindrome");
    else
        printf("The number is not a palindrome");
}