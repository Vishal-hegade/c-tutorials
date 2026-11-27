#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int high, low, mid;
    high = 9;
    int target = 7;
    low = 0;
    mid = (high + low) / 2;
    while (low <= high)
    {
        if (arr[mid] == target)
        {
            printf("found at index %d", mid);
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
            mid = (high + low) / 2;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
            mid = (high + low) / 2;
        }
       
    }
    printf("target not found");
    return 0;
}