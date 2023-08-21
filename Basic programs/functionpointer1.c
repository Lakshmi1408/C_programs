#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*op)(int, int) ;
    op=add;
    printf("Result: %d\n", op(5, 3));

    op = subtract;
    printf("Result: %d\n", op(90, 9));

    return 0;
}

