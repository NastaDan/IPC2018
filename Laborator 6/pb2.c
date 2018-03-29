#include <stdio.h>
#include <math.h>
void main()
{
    int n, k, order, i, j, lowest = 0;
    float x, sum = 0, coeffs[20];
    printf("Enter the order of the polynomial: ");
    scanf("%d", &order);
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the order of the derivative: ");
    scanf("%d", &k);
    printf("Enter the coefficients for ");
    for (i = 0; i < order; i++)
    {
        printf("x^%d: ", i);
        scanf("%f", &coeffs[i]);
    }
    for (j = 0; j < k; j++)
    {

        for (i = 0; i < order; i++)
        {
            coeffs[i + j] = i * coeffs[i + j];
        }
    }
    for (i = 0; i < order; i++)
    {
        if (coeffs[i] == 0)
        {
            lowest++;
        }
        else
        {
            printf("%.1f*x^%d ", coeffs[i], i - lowest);
            sum = sum + pow(x, i - lowest) * coeffs[i];
        }
    }
    printf("\nThe solved derivative is: %.2f", sum);
}