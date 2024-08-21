// Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 3
// Output: 7

// Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 4
// Output: 10

#include <stdio.h>
int main()
{
    int length, k;
    printf("Enter the length of the array : ");
    scanf("%d", &length);
    int a[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the K'th value : ");
    scanf("%d", &k);
    int max = a[0];
    for (int j = 1; j < k; j++)
    {
        if (a[j] > max)
        {
            max = a[j];
        }
    }
    printf("The largest K'th Element is %d ", max);
    return 0;
}