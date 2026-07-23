// Q5: Check if a number is divisible by both 2 and 3 (AND operator)
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0) {
        printf("The number is divisible by both 2 and 3\n");
    } else {
        printf("The number is NOT divisible by both 2 and 3\n");
    }

    // Q6: Check if a number is divisible by 5 or 7 (OR operator)
    if (num % 5 == 0 || num % 7 == 0) {
        printf("The number is divisible by 5 or 7\n");
    } else {
        printf("The number is NOT divisible by 5 or 7\n");
    }

    return 0;
}
