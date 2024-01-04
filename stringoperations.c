#include <stdio.h>
#include <string.h>
int main() {
    char str1[50], str2[50], concatStr[100], copyStr[50];
    int len1, len2, compareResult;
    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("\nString Operations:\n");
    printf("Length of the first string: %d\n", len1);
    printf("Length of the second string: %d\n", len2);
    strcpy(concatStr, str1);
    strcat(concatStr, str2);
    printf("Concatenated string: %s\n", concatStr);
    strcpy(copyStr, str1);
    printf("Copied string: %s\n", copyStr);
    compareResult = strcmp(str1, str2);
    if (compareResult == 0)
        printf("The strings are equal.\n");
    else if (compareResult < 0)
        printf("The first string is lexicographically smaller than the second string.\n");
    else
        printf("The first string is lexicographically larger than the second string.\n");
    return 0;
}
