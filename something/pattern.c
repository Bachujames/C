#include <stdio.h>

int main() {
    int i, j, n;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for each row
    for(i = 1; i <= n; i++) {
        // Inner loop for printing numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
