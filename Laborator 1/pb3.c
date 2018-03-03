#include <stdio.h>
#include <math.h>

void main(void)
{
    float x, y, p, f;
    printf("x= ");
    scanf("%f", &x);
    printf("y= ");
    scanf("%f", &y);
    p = pow(x, 2) + pow(y, 2);
    if (p > 1)
    {
        f = 1.0 / (p - 1);
        printf("Result is= %f", f);
    }
    else
    {
        if (p == 1)
        {
            f = x + y;
            printf("Result is= %f", f);
        }
        else
        {
            f = 1.0 / (p + 1);
            printf("Result is= %f", f);
        }
    }
}