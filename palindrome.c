#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char inputString[100];
    printf("Enter a string: ");
    gets(inputString);
    if (isPalindrome(inputString)) {
        printf("%s is a palindrome.\n", inputString);
    } else {
        printf("%s is not a palindrome.\n", inputString);
    }
    return 0;
}
