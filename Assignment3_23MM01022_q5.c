#include<stdio.h>

int main(){
    int tdays,i,fine;
    printf("Number of days the member is late to return the book : ");
    scanf(" %d",&tdays);
    if(tdays<=0){
        printf("INVALID");
        return 0;
    }
    for(i=tdays;i>0;i--){
        if(i>30){
            printf("Your membership has been cancelled");
            break;
        }
        else if(i>10) fine = fine + 5;
        else if(i>5) fine = fine + 2;
        else fine = fine + 1;
    }
    if(tdays<=30)printf("\nTotal fine is %d/- Rs",fine);
    return 0;
}