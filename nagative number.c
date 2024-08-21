#include<stdio.h>
int main()
{
    int a[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int l = sizeof(a) / sizeof(a[0]);
    int b[l];
    int j=0;
    for (int i = 0 ; i < l ; i++)
    {
        if(a[i] < 0){
            b[j] = a[i];
            j++;
        }
    }
    for(int m=0;m<l;m++){
        if(a[m] >= 0){
            b[j] = a[m];
            j++;
        }
    }
    for(int k = 0;k<l;k++){
        printf("%d  ",b[k]);
    }
    return 0;
}