/*Question:  
"Write a C program to find the n‑th term of the Fibonacci series using a for loop."*/


#include<stdio.h>
int main(){
    int n;
    int a=1;
    int b=1;
    int sum=0;
     printf("enter a number:");
     scanf("%d",&n);
     
    for(int i=1; i<=n; i++ ){
        
      sum=a+b;
      a=b;
      b=sum;
    } 
    printf("the n term of fibonacci number is= %d",sum);

    return 0;
}
