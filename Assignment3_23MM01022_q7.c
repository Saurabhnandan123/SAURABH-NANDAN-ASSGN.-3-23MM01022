#include<stdio.h>

int main(){
    int M,N,K;
    char G;
    double W,T;
    printf("\nTotal marks obtained : ");
    scanf(" %d",&M);
    printf("\nTotal number of classes attended : ");
    scanf(" %d",&N);
    printf("\nTotal number of classes conducted : ");
    scanf(" %d",&K);
    W =(double) N/K;
    T = M*W;
    if(T < 40) G = 'F';
    else if(T >= 40 && T < 49) G = 'P';
    else if(T >= 50 && T < 59) G = 'D';
    else if(T >= 60 && T < 69) G = 'C';
    else if(T >= 70 && T < 79) G = 'B';
    else if(T >= 80 && T < 89) G = 'A';
    else G = 'E';
    printf("\nFinal score = %.2f",T);
    printf("\nGrade is = %c",G);
    if(T >= 90) printf("X");
    return 0;
}