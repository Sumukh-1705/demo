#include <stdio.h>

int main() {
    int n, i, factorial = 1;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%d! = %d\n", n, factorial);
    }

    return 0;
}
