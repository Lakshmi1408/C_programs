#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int rows, num = 2;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Prime Number Pyramid:\n");

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("   "); // Print spaces for formatting
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            while (!isPrime(num)) {
                num++;
            }
            printf("%3d", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
