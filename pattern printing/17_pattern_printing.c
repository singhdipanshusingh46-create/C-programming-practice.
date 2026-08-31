/*QUESTION:
WAP to prints alphabet patterns in c.  
  */
#include<stdio.h>
int main(){
    for(int i=1; i<=4; i++){
        int a=64;
        for(int j=1; j<=7; j++){
            if(i==1){
             char ch=j;
             ch=j+a;
             printf("%c",ch);
        }

        }
        if(i==2)
        for(int k=1; k<=3; k++){
            char d=k+a;
            printf("%c",d);
        }
        if(i==2)
        for(int l=1; l<=1; l++){
            printf(" ");
        }
         if(i==2)
        for(int m=1; m<=3; m++){
            char f= 5+a;
            printf("%c",f);
            a++;
        }
        if(i==3)
        for(int n=1; n<=2; n++){
            char g=n+64;
            printf("%c",g);
        }
        if (i==3){
            for(int o=1; o<=3; o++){
                printf(" ");
            }
        }
        if(i==3){
           for(int p=1; p<=2; p++){
               char h=6+a;
               printf("%c",h);
               a++;
           }

        }
        if(i==4){
            for(int q=1; q<=1; q++){
                char b=1+a;
                printf("%c",b);
            }
        }
        if(i==4){
            for(int r=1; r<=5; r++){
                printf(" ");
            }
        }
        if(i==4){
            for(int s=1; s<=1; s++){
                char x=7+a;
                printf("%c",x);
            }
        }
        printf("\n");

    }




    return 0;
}

