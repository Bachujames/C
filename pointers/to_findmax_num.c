#include <stdio.h>
#include <stdlib.h>

int main() {
    int fno, sno, *ptr1 = &fno, *ptr2 = &sno;

    printf("\n\n Pointer : Find the maximum number between two numbers :\n");
    printf("------------------------------------------------------------\n");

    printf(" Input the first number : ");
    scanf("%d", ptr1); // Read the first number from the user and store it using ptr1
    printf(" Input the second number : ");
    scanf("%d", ptr2); // Read the second number from the user and store it using ptr2

    // Compare the values pointed by ptr1 and ptr2 to find the maximum number
    if (*ptr1 > *ptr2) {
        printf("\n\n %d is the maximum number.\n\n", *ptr1); // Print the maximum number
    } else {
        printf("\n\n %d is the maximum number.\n\n", *ptr2); // Print the maximum number
    }
	return 0;
}