#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,p;
    printf("Enter the number of pags of the book:");
    scanf("%d",&n);
    printf("Enter the page  number tofind :");
    scanf("%d",&p);
    int fronturn,backturn,total;
    fronturn=(p/2);
    total=n/2;

    if(n%2==0){
        backturn=total-fronturn;

    }
    else if(n==p){
        backturn=0;
    }
    else {
        backturn=total-fronturn+1;
    }
    if(fronturn<=backturn){
        printf("front turn took less turns:%d",fronturn);
    }
    else{
        printf("back turn took less turns:%d",backturn);
    }


}