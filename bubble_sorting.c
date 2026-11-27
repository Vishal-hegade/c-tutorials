#include<stdio.h>
void pa(int* A,int n){
    for(int i=0;i<=n-1;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
void bsort(int* A,int n){
    int temp;
    int sort=0;
    for(int i=0;i<n;i++){
        sort=1;
        printf("%dth pass\n",i+1);
        for(int j=0;j<n-1-i;j++){
            
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                sort=0;
            }
        }
        if(sort){
            return;
        }
    }
}
int main(){
    int A[]={7,54,50,48,30,60,20,49,59};
    int n=9;
    pa(A,9);
    bsort(A,9);
    pa(A,9);
    return 0;

}