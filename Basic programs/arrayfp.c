#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operations[2])(int, int) = {add, subtract};

    printf("Add: %d\n", operations[0](5, 3));
    printf("Subtract: %d\n", operations[1](5, 3));

    return 0;
}

