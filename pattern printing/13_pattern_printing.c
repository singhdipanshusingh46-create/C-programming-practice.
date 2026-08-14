QUESTION: WAP to print a alphabet pyramid.
   A 
  ABC
 ABCDE
ABCDEFG

#include<stdio.h>
int main() {

	for(int x=1; x<=4; x++) {
		for(int y=1; y<=4-x; y++) {
			printf(" ");
		} int a=1;
		for(int z=1; z<=2*x-1; z++) {
			
			char ch = (char)a+64;
			printf("%c",ch);
			a++;
		}
		printf("\n");
	}

	return 0;
}
