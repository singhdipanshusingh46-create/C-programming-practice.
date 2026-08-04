/*Question:
WAP to print sum of all even digits of a given number.*/

#include<stdio.h>
int main(){
    int n;
    int sum=0;
    
    printf("enter a number:");
    scanf("%d",&n);
    
    while(n!=0){
      
       int ld=n%10;
        if(ld%2==0){
            sum=sum+ld;
        }   
        
        n=n/10;
        
    } 
   printf("the sum of even numbers are %d\n",sum); 
    
    return 0;
}
