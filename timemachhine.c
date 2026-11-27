#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the year:");
    scanf("%d",&n);
    if(n<=1917){
        if(n%4==0){
            printf("12.9.%d",n);
        }
        else{
            printf("13.9.%d",n);

        }
    if(n==1918){
        printf("26.9.%d",n);
    }
    if(n>1918){
        if(n%4==0){
            if(n%100==0){
                printf("13.9.%d",n);

            }
            if(n%400==0){
                printf("12.9.%d",n);
            }
            else{
                printf("12.9.%d",n);
            }
        }
        else{
            printf("13.9.%d",n);
        }
    }
    }



}