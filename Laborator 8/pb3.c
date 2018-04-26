#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char stringReference[16];
    int frequency[25], i;
    printf("The reference string: ");
    fgets(stringReference, sizeof(stringReference), stdin);
    for (i = 0; i <= 25; i++)
    {
        frequency[i] = 0;
    }
    for (i = 0; stringReference[i]; i++)
    {
        stringReference[i] = tolower(stringReference[i]);
        if ('a' <= stringReference[i] && stringReference[i] <= 'z')
            frequency[stringReference[i] - 'a']++;
    }
    printf("The frequency of the letters is: ");
    for (i = 0; i <= 25; i++)
    {
        if (frequency[i])
        {
            printf("'%c' = %d\n", (i + 97), frequency[i]);
        }
    }
    return 0;
}