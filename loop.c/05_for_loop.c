WAP to find a GP of 100,50,25,12.5.... upto n term?

#include<stdio.h>
int main() {

	int z;
	int a=100;

	for(int x=1; x<=z; x++) {
		if(a>0)
			printf("%d\n",a);
		a=a-3;
	}

	return 0;
}
