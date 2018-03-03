#include <stdio.h>
#include <math.h>
void main(void)
{
    float a, b, c, d;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    printf("c= ");
    scanf("%f", &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("x can be any real number");
            else
                printf("Impossible as %f is not equal to zero", b);
        }
        else
            printf("x is %f", -b / a);
    }
    else
    {
        d = pow(b, 2) - (4 * a * c);
        if (d < 0)
            printf("Roots are complex numbers");
        else
        {
            if (d == 0)
                printf("The roots are equal to %f", (-b + sqrt(d)) / (2 * a));
            else
                printf("The roots are equal to %f and %f", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
        }
    }
}