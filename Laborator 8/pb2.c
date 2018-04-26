#include <stdio.h>
#include <string.h>

char *stringConcatenate(char *string1, char *string2)
{
    strcat(string1, string2);
    return string1;
}
int main()
{
    char string1[16], string2[16];
    printf("1st string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = 0;
    printf("2nd string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = 0;
    printf("%s", stringConcatenate(string1, string2));
    return 0;
}