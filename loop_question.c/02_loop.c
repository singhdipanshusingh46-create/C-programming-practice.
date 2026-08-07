/*Question:
"Develop a C program that reads an integer from the user, reverses the number,
and also calculates the sum of its digits using a while loop."*/

#include<stdio.h>
int main(){
    int x;
    int r=0;
    int sum=0;
    
    printf("enter a number:");
    scanf("%d",&x);
    
    while(x!=0){
        r=r*10;
    r=r+(x%10);
   sum=sum+(x%10);
       x=x/10; 
       
    }
    printf("the reverse number is=%d",r);
   printf("the sum of given number is %d",sum);
    
    
    
    return 0;
}
