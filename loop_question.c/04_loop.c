/*Question:  
"Write a C program to calculate the sum of all natural numbers from 1 to n using a for loop."*/

#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
    sum=sum+i;
        
    }
    printf(" the sum of given positive number is= %d\n",sum);
    
    return 0;
}
