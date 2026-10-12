#include <stdio.h>

int main() {
    int a[5] = {5, 4, 3, 2, 1};
    int i, j, temp;
    
    for(i = 0; i < 5; i++) {
        // Fixed: changed comma to semicolon, and '<' to prevent out-of-bounds
        for(j = 0; j < 4 - i; j++) {
            if(a[j] > a[j+1]) {
                // Proper swap logic inside curly braces
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]); // Added a space for better readability
    }
    printf("\n");
    
    return 0;
}
