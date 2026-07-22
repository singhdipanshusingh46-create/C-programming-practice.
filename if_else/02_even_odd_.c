/* 
  Question: 
  Take an integer input from the user and check whether the number 
  is Even or Odd. Print the appropriate message on the console.
*/

#include <stdio.h>

int main() {
    int num;

    // User se input lene ke liye prompt
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Modulo operator (%) se remainder check karenge
    if (num % 2 == 0) {
        printf("%d is an EVEN number.\n", num);
    } else {
        printf("%d is an ODD number.\n", num);
    }

    return 0;
}
