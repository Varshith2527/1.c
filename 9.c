#include <stdio.h>

int main() {
    int m, n, i, j, isprime;

    printf("Enter the value of m : \n");
    scanf("%d", &m);
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    printf("Prime numbers between %d and %d are:\n", m, n);

    // Loop from m to n
    for (i = m; i <= n; i++) {
        // Numbers less than 2 are not prime
        if (i < 2) {
            continue;
        }

        isprime = 1;

        // Removed the semicolon here and added curly braces
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isprime = 0;
                break;
            }
        }

        // Print inside the outer loop so it prints every prime found
        if (isprime == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
