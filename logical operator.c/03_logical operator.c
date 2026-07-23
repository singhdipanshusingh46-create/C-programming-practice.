// Check if number is (between 100 and 200 AND divisible by 3)
    // OR (greater than 500 AND divisible by 7).

#include<stdio.h>
int main(){
  int num;
  printf("enter a number:);
    scanf("%d",&num);
    if ((num >= 100 && num <= 200 && num % 3 == 0) || (num > 500 && num % 7 == 0)) {
        printf("The number satisfies the hard condition!\n");
    } else {
        printf("The number does NOT satisfy the hard condition.\n");
    }

    return 0;
}
