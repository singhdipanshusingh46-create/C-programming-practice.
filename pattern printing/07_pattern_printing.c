/*Question:
print the given pattern. 
  *  
  *  
*****
  *  
  *     */

#include<stdio.h>
int main(){
 for(int a=1; a<=5; a++){
     for(int b=1; b<=5; b++){
         if(a==1 && b==3 || a==2 && b==3 || a==3 ||a==4 && b==3 ||a==5 &&b==3){
             printf("*");
         }else{
             printf(" ");
         }
     }
     printf("\n");
 }   
    
    return 0;
}
