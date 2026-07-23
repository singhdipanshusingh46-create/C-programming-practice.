/*Write a program to check if a number lies between 10 and 50 using logical operators (&& and ||).*/
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using AND (&&)
    if (num >= 10 && num <= 50) {
        printf("The number is between 10 and 50\n");
    } else {
        printf("The number is outside the range 10 to 50\n");
    }

    // Using OR (||)
    if (num < 10 || num > 50) {
        printf("The number is NOT between 10 and 50\n");
    } else {
        printf("The number IS between 10 and 50\n");
    }

    return 0;
}
