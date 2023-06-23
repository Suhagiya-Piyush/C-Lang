#include<stdio.h>

void main(){
    int A, b, h;
    printf("Enter Base : ");
    scanf("%d",&b);
    printf("Enter Height : ");
    scanf("%d",&h);
    A = (b * h) / 2;
    printf("Area Of Triangle : %d",A);
}