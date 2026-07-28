/*Q=print the AP of 0,2,4,6,8.....upto "N" terms.*/

#include<stdio.h>
int main() {
	int n;
	int d=0;
	
	printf("enter a number:");
	scanf("%d", &n);

	for(int i=1; i<=n; i++) {
		printf("%d\n",d);
		d=d+2;
	}
	return 0;
}
