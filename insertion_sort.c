#include<stdio.h>
void pa(int* A,int n){
    for(int i=0;i<=n-1;i++)
        printf("%d ",A[i]);
    
    printf("\n");
}
void i_sort(int* A,int n){
    for (int i = 1; i <=n-1; i++)
    {
        int key,j;
        key=A[i];
        j=i-1;
        while(j>=0 && A[j] >key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }

    
}
int main(){

    int A[]={2,5,3,12,13,64,97,34,21};
    int n=9;
    pa(A,n);
    i_sort(A,n);
    pa(A,n);
    return 0;

}