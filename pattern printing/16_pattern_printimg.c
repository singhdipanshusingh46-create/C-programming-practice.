/*QUESTION:
WAP to print a number a number pyramid.
*/
#include<stdio.h>
int main() {
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	for(int a=1; a<=n; a++) {
		int x=2;
		for(int b=1; b<=n-a; b++) {
			printf(" ");
		}

		for(int c=1; c<=a; c++) {
			printf("%d",c);
		}
		for(int d=1; d<=a-1; d++) {
			printf("%d",a-d);
		}
		printf("\n");
	}


	return 0;
}
