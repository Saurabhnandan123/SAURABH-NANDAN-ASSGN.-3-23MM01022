#include<stdio.h>

int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("enter the x and y co-ordinate of the 1st point : ");
    scanf(" %d %d",&x1,&y1);
    printf("enter the x and y co-ordinate of the 2nd point : ");
    scanf(" %d %d",&x2,&y2);
    printf("enter the x and y co-ordinate of the 3rd point : ");
    scanf(" %d %d",&x3,&y3);
    if((x1-x2)/(y1-y2)==(x2-x3)/(y2-y3)) printf("The three points (%d,%d),(%d,%d),(%d,%d) are in a straight line",x1,y1,x2,y2,x3,y3);
    else printf("The three points (%d,%d),(%d,%d),(%d,%d) are NOT in a straight line",x1,y1,x2,y2,x3,y3);

    return 0;
}