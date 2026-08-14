/*QUESTION: WAP to print a numberic pyramid pattern.enter a number: 5
    1
   123
  12345
 1234567
123456789
  */
  
#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int a=1; a<=n; a++){
        for(int b=1; b<=n-a; b++){
            printf(" ");
        }
        for(int c=1; c<=2*a-1; c++){
            printf("%d",c);

        }
        printf("\n");
    }
  return 0;
}


