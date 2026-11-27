#include <stdio.h>
#include <stdlib.h>
int *remove_duplicates(int *a, int n)
{
    int *nums = malloc(n * sizeof(int));
    int k = a[0];
    int y=1;
    nums[0] = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] != k && i != 0)
        {
            nums[y] = a[i];
            k=a[i];
            y++;
        }
        
        
    }
    return nums;
}
int main()
{
    int a[7] ={-5, -5, -2, 0, 0, 3, 3};
    int n = 7;
    int *nums = remove_duplicates(a,7);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}
