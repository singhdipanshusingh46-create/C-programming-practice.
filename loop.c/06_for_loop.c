/*Q: WAP to find to find  agiven number is composite or prime.*/

#include<stdio.h>
int main() {
	int x;
	int a=0;
	printf("enter a number:");
	scanf("%d",&x);

	for(int m=2; m<=x-1; m++) {

		if(x%m==0)
	{
			a=1;
			break;
		}
	if(a==1) printf("the given number is  composite\n");
	else  printf("the given number is  prime\n");
}
	return 0;
}

