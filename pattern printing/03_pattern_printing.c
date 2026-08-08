/*Q: Write a C program using nested loops to print an inverted right‑angled triangle star
pattern with 4 rows.*/



#include<stdio.h>
int main(){
    for(int x=1; x<=4; x++){
        for(int r=1; r<=5-x; r++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}


