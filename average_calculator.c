#include <stdio.h>

float average(int a, int b, int c) {
    float result = (a + b + c) / 3.0;
    return result;
}

int main() {
    int num1, num2, num3;
    
    printf("Enter the first number: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    printf("Enter the third number: ");
    if (scanf("%d", &num3) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    printf("The average of %d, %d, and %d is %.2f\n", num1, num2, num3, average(num1, num2, num3));
    return 0;
}
