#include <stdio.h>

void main(void)
{
    float a, b;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    printf("sum= %f\n"
           "diff= %f\n"
           "prod= %f\n",
           a + b, a - b, a * b);
    if (b == 0)
        printf("division by zero");
    else
        printf("div= %2f\n", a / b);
}