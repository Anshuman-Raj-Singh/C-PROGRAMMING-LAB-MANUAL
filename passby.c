#include <stdio.h>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nOriginal Values:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    swapByValue(num1, num2);
    printf("\nAfter Swap (Pass by Value):\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2); 

    swapByReference(&num1, &num2);
    printf("\nAfter Swap (Pass by Reference):\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2); 
    return 0;
}
