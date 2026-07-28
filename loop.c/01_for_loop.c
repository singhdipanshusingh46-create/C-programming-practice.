/*Q: Write a C program to print the first 10 multiples of a given number.*/
#include <stdio.h>

int main(){
int n;
printf("enter a number:");
scanf("%d",&n);
for(int x=1; x<=n*10; x++){
    if(x%n==0)
    printf("%d\n",x);
}
return 0;
}
