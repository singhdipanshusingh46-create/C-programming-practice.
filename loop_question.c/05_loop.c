/*Question:  
"Write a C program to calculate the sum of all odd numbers from 1 to n using a for loop."*/

#include<stdio.h>
int main(){
 int n;
  int sum=0;

    printf("enter a number:");
    scanf("%d",&n);
    
    
        for(int i=1; i<=n; i++){
            if(i%2!=0)
            sum=sum+i;
        }printf("the digits are= %d",sum);
    
    return 0;
}
