#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*operations[3])(int, int) = {add, subtract, multiply};
    int choice;

    printf("Select operation (0: Add, 1: Subtract, 2: Multiply): ");
    scanf("%d", &choice);

    int result = operations[choice](5, 3);
    printf("Result: %d\n", result);

    return 0;
}

