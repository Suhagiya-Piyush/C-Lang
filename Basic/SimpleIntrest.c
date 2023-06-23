#include<stdio.h>

void main(){
    float r, t, a, i;
    printf("Enter Amount : ");
    scanf("%f",&a);
    printf("Enter Time : ");
    scanf("%f",&t);
    printf("Enter Rate : ");
    scanf("%f",&r);
    i = ((a * t * r) / 100) - a;
    printf("Your Intrest is : %.2f",i);
}