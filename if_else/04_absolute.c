/*QUESTION:
Write a C program to check whether a given integer number is positive,negative, or zero.if the number is negative,
convert into its absolute value and print it.*/

#include<stdio.h>
int main() {
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num>0) {
		printf("it is a absolute value");
	} else if (num<0) {
		num=num*-1;


		printf("it is a absulote number");

	} else if(num==0) {
		printf("the number is zero");
	}
	return 0;
}
