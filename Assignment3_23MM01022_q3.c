#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the sides of the triangle : ");
    scanf(" %d %d %d",&a,&b,&c);
    if(a+b<=c) printf("the given sides do NOT form a triangle");
    else if(b+c<=a) printf("the given sides do NOT form a triangle");
    else if(c+a<=b) printf("the given sides do NOT form a triangle");
    else printf("the given sides form a triangle");

    return 0;
}