#include <stdio.h>
#include <string.h>

int stringCompare(char *string1, char *string2)
{
    return strcmp(string1, string2);
}

int main()
{
    char string1[32], string2[32];
    printf("1st string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("2nd string: ");
    fgets(string2, sizeof(string2), stdin);
    printf("%d", stringCompare(string1, string2));
    return 0;
}