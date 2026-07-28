
/*Q: Write a C program to count the total number of even and odd integers from 1 to a given number.
  */
#include <stdio.h>
int main() {
	int n;
	int evenCount = 0;
	int oddCount = 0;

	printf("enter a number: ");
	scanf("%d", &n);


	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			evenCount++;

		} else {
			oddCount++;
			}
	}

	printf("Total even numbers = %d\n", evenCount);
	printf("Total odd numbers = %d\n", oddCount);

	return 0;
}
