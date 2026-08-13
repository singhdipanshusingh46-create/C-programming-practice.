/*QUESTION: WAP to print a given pattern.

   A
  AB
 ABC
ABCD 
  */

#include<stdio.h>
int main(){
    for(int x=1; x<=4; x++){
        for(int y=1; y<=4-x; y++){
            printf(" ");
        } char ch;
        int a=1;
        for(int z=1; z<=x; z++){
           ch=a+64;
            printf("%c",ch);
            a=a+1;
        } printf("\n");
    }

  return 0;
}
