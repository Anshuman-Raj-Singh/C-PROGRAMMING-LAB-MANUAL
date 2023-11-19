#include <stdio.h>
int main() {
    int num,count = 2;
    int flag = 1; 
    printf("Enter a number\n ");
    scanf("%d", &num);

    while (count<= num) {
        if (num % count == 0) {
            flag = 0;
            break;
        }
        count++;
    }
    if (flag) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
