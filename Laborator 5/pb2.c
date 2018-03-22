#include <stdio.h>
#include <math.h>
void main(void)
{
    int order, i;
    float x, sum = 0;
    printf("Enter the order of the polynomial: ");
    scanf("%i", &order);
    float coeff[order];
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the coefficients for ");
    for (i = 0; i < order; i++)
    {
        printf("x^%i: ", i);
        scanf("%f", &coeff[i]);
    }
    for (i = 0; i < order; i++)
    {
        sum = sum + pow(x, i) * coeff[i];
    }
    printf("The sum is: %f", sum);
}