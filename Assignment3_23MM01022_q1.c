#include<stdio.h>

int main(){
    int a;
    printf("enter a number : ");
    scanf(" %d",&a);
    if(a>0) printf("%d is positive",a);
    else if(a==0) printf("The entered number is zero");
    else printf("%d is negative",a);

    return 0;
}