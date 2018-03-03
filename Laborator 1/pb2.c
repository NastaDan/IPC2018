#include <stdio.h>
#include <math.h>
void main(void)
{
    int a, b, c;
    float ma, mh, mg;
    printf("a= ");
    scanf("%i", &a);
    printf("b= ");
    scanf("%i", &b);
    printf("c= ");
    scanf("%i", &c);
    ma = (a + b + c) / 3.0;
    mg = pow(a * b * c, 1.0 / 3);
    printf("Mean average= %f\n"
           "Geometric mean: %f\n",
           ma, mg);
    if (a * b * c == 0)
        printf("Division by zero");
    else
    {
        mh = 3.0 / (1.0 / a + 1.0 / b + 1.0 / c);
        printf("Harmonic mean: %f\n", mh);
    }
}