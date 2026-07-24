/*Question:

Write a C program to find the youngest among three people (Ram, Shayam, and Ajay)
based on their ages entered by the user.*/
#include<stdio.h>
int main(){
    int ram;
    int shayam;
    int ajay;
    printf("enter a age of ram:");
    scanf("%d",&ram);
    printf("enter a age of shayam:");
    scanf("%d",&shayam);
    printf("enter a age of shyam:");
    scanf("%d",&ajay);
    if(ram<shayam){
    if(ram<ajay){
        printf("ram is younger then shayam and ajay");
    }else{
        printf("ajay is younger then shayam and ram");
    }}
    else if(shayam<ajay){
        printf("shayam is younger then ram and ajay");
    }else{
        printf("ajay is yonger then ram and shayam ");
    }return 0;
