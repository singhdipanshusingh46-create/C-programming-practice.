/*Question:  
Write a C program that takes an integer input from the user and:

If the number is positive, check whether it is even or odd.

If the number is negative, check whether it is divisible by 3 or not.

If the number is zero, print that the number is zero.*/
#include<stdio.h>
int main() {
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if (n>0) {
		if (n%2==0) {
			printf("positiv and even");
		}
		else {
			printf("positive and odd");
		}
	} else if (n<0) {
		if (n%3==0) {
			printf("negative and divisible  by 3");
		} else {
			printf("negative and not divisible by 3");
		}
	}
	else if (n==0) {
		printf("number is zero");
	}
	return 0;
}
