/*Q: Write a C program using nested loops to print a right‑angled triangle star pattern with 3 rows.*/

#include<stdio.h>
 int main(){
   for(int i=1; i<=3; i++){ 
    for(int j=1; j<=i; j++){
        printf("*");
    } printf("\n");
    
   }
   return 0;
}
