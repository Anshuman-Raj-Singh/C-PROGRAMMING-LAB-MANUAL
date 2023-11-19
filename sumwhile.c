int main() {
    int number,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        sum += number % 10; // Extract the last digit
        number += number/10;     // Add the digit to the sum
        number /= 10;        // Remove the last digit from the number
    }
    printf("sum: %d\n", sum);
    return 0;
}
