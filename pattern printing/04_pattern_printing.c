
Question:

Write a C program to print the following pattern:

1
AB
123
ABCD
12345.

#include<stdio.h>
int main() {

	for(int p=1; p<=5; p++) {
		int a=1;
		for(int q=1; q<=p; q++) {
			if(p%2!=0) {
				printf("%d",q);
			}


			else {

				char ch=(char)a+64;

				printf("%c",ch);
				a++;

			}

		}
		printf("\n");
	}

	return 0;
}
