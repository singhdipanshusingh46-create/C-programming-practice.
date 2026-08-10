
/*Question:

Write a C program to print the following pattern:

1357
1357
1357
1357*/
#include<stdio.h>
int main(){

for(int x=1; x<=4; x++){
    int a=1;
    for(int k=1; k<=4*2; k++){
        if(k%2!=0)

            printf("%d",k);
            a=a+2;

    }printf("\n");

}
    return 0;
}

