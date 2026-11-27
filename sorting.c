#include<stdio.h>
#include<stdbool.h>
bool sorted(int* a,int n){
    
    int key=a[0];
    for(int i=1;i<n;i++){
        int k=i-1;
        if(a[k]>a[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int a[5]={1,2,3,4,5};
    int n=5;
    bool x=sorted(a,5);
    printf("%d\n",x);
    return 0;
}