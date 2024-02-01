#include<stdio.h>

int main(){
    int n,div=10,i=0;
    printf("enter a number : ");
    scanf(" %d",&n);
    if (n==1){
        printf("%d is a Kaprekar number",n);
        i = 1;
    }
    for(div=10 ; (n*n/div)!=0 ; div = div*10){
        if(((n*n)/div+(n*n)%div) == n){
            if((n*n)%div == 0) break;
            else{
                printf("%d is a Kaprekar number",n);
                i = 1;
                break;
            }
        }
    }
    if(i == 0)printf("%d is NOT a Kaprekar number",n);
    return 0;
}