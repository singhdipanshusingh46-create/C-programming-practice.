/*QUESTION:
Write a C program to print a diamond star pattern using nested loops.
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main() {

	int sp=4;
	int x=2;
	
	for(int a=1; a<=7; a++) {

		if(a<=4) {
			for(int b=1; b<=4-a; b++) {
				printf(" ");
			}
			for(int c=1; c<=(a*2)-1; c++) {
				if(a<=4) {
					printf("*");
				}
			}
		}

		else if(a>=5) {
			for(int d=1; d<=a-sp; d++) {
				if(a>=5) {
					printf(" ");

	}
			}


			for(int e=1; e<=7-x; e++)  {
				if(a>=5) {
					printf("*");
				}

			}
			x=x+2;
		}


		printf("\n");
	}


	return 0;
}


