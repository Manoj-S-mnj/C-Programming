// Input: arr[] = {1, 5, 7, -1}, K = 6
// Output:  2
// Explanation: Pairs with sum 6 are (1, 5) and (7, -1).

#include <stdio.h>
int main()
{
    int length, k, count = 0;
    printf("length : ");
    scanf("%d", &length);
    int a[length];
    for (int k = 0; k < length; k++)
    {
        scanf("%d", &a[k]);
    }
    printf("K value : ");
    scanf("%d", &k);
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (a[i] + a[j] == k)
            {
                count++;
            }
        }
    }
    printf("The number of pairs with sum of %d is %d", k, count);
    return 0;
}