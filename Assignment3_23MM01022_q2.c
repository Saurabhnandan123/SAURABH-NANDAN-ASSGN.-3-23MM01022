#include<stdio.h>

int main(){
    int a,b,c,big;
    printf("Enter three numbers : ");
    scanf(" %d %d %d",&a,&b,&c);
    big = a;
    if(b>big) big = b;
    else if(c>big) big = c;
    printf("%d is the largest among the three",big);

    return 0;
}