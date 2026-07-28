
/*Q: Write a C program to find and display all the factors of a given number and 
also count the total number of factors.*/
  #include <stdio.h>
  int main() {
	int n;
	int count = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Factors of %d are:\n", n);

	for (int x = 1; x <= n; x++) {
		if (n % x == 0) {
			printf("%d\n", x);
			count++;
		}
	}
	printf("Total number of factors = %d\n", count);

	return 0;
}
