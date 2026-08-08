/*Q: Write a C program using nested loops to print a rectangular star pattern of 3 rows and 4 columns.*/

#include<stdio.h>
int main(){
    for(int i=1; i<=3; i++){
     for(int d=1; d<=4; d++){
        printf("*");
    }    
    printf("\n");
    }
    return 0;
}
