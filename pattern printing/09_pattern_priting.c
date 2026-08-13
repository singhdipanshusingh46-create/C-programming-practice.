/*Question: WAP to print a triangle star.
 *
 ***
 *****
 *******
*/
#include<stdio.h>
int main(){
   int a=2;
    for(int i=1; i<=4; i++) {


        for(int j=1; j<=i*2-1; j++){

            printf("*");

        }
        printf("\n");
    }

 return 0;
}

