// Find the peak element with smallest neibhour
// Input: array[]= {5, 10, 20, 15}
// Output: 20
// Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20.

#include<stdio.h>
int main()
{
    int a[]={5,10,20,15,30,2};
    int l = sizeof(a) / sizeof(a[0]);
    for (int i = 1 ; i < l ; i++){
        if(a[i] > a[i+1] && a[i] >a[i-1])
        {
            printf("%d \n",a[i]);
        }
    }
    return 0;
}