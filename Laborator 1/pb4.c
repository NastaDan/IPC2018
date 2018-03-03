#include <stdio.h>
void main(void)
{
    float a, b;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    if (a == 0)
    {
        if (b == 0)
            printf("x can be any real number");
        else
            printf("Impossible as %f is not equal to zero", b);
    }
    else
        printf("x is %f", -b / a);
}