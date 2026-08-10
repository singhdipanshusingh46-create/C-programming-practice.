
/*Question:

Write a C program to print the following pattern:

1
13
135
1357 */
#include<stdio.h>
int main(){

for(int x=1; x<=4; x++){
    for(int k=1; k<=x*2; k++){
        if(k%2!=0){
            printf("%d",k);
        }
    }printf("\n");

}
    return 0;
}
