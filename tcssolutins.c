#include <stdio.h>

int main()
{
    int arr[5][5];
    int n;
    printf("Enter the size of a matrix:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the (%d,%d) element", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum1=0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + arr[i][j];
            }
            if ((i + j) == n - 1)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }
    printf("left to riht=%d\n", sum1);
    printf("ight to left=%d\n", sum2);
    printf("Absolute difference between two diagonals is=%d\n", sum1 - sum2);
}
