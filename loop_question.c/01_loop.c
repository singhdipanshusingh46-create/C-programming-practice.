
/*Question:
Develop a C program that takes an integer input from the user and prints its reverse using a while loop.*/

#include<stdio.h>
int main(){
    int x;
    int r=0;;
    
    printf("enter a number:");
    scanf("%d",&x);
    
    
    while(x!=0){
        r=r*10;
        r=   r+ (x%10);
        
      x=x/10;
        
    }
    printf("the revese number is %d",r);
    
      return 0;
}
