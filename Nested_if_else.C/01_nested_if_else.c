/*
Write a C program that takes two integer inputs from the user (a and b).
Check if the first number (a) is divisible by 5 and the second number (b) is divisible by 3.*/
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter a first  number:");
    scanf("%d",&a);
    printf("enter a second number:");
    scanf("%d",&b);
    if(a%5==0){
    if(b%3==0){
        printf("the number is divisible by 5 and 3");
    
    }else{
        printf("the number is not divisible by 5 and 3");
    }}
    else{
        printf("the number is not divisible by 5 and 3 ");
    }
    
      return 0;
}
