#include <stdio.h>

void main(void)
{
    int n, i;
    float largest, sum = 0;
    printf("How many numbers: ");
    scanf("%i", &n);
    float seq[n];
    printf("The numbers are: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &seq[i]);
        sum += seq[i];
        if (i > 0 && seq[i] > largest)
            largest = seq[i];
        else
            largest = seq[0];
    }
    printf("The sum is: %f\n", sum);
    printf("Largest number is: %f", largest);
}