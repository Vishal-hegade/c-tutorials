#include <stdio.h>
#include <stdlib.h>
int *zeros_last(int *a, int n)
{
    int *nums = malloc(n * sizeof(int));
    int k = a[0];
    nums[0] = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] != k && i != 0)
        {
            nums[i] = a[i];
            k=a[i+1];
        }
        if (a[i] = k)
        {
            a[i]=0;
        }
    }
    return nums;
}
int main()
{
    int a[6] = {1,1,5,5,9,9};
    int n = 6;
    int *nums = zeros_last(a,6);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}