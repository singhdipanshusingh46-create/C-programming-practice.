/*QUESTION:WAP to print a given pattern.
   ****
  ****
 ****
****
 */ 
#include<stdio.h>
int main (){
    int a=3;
    for(int i=1; i<=4; i++){
      for(int j=1; j<=a; j++){
          printf(" ");
      }
      a=a-1;
      for(int k=1; k<=4; k++){
          printf("*");

      }
      printf("\n");


}
     return 0;
}

