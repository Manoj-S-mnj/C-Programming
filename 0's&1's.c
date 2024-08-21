#include<stdio.h>
int main()
{
    int a[]={0,1,0,1,2,1,1,2};
    int l=sizeof(a)/sizeof(a[0]);
    int b[l];
    int j=0;
    for(int i=0;i<l;i++){
        if(a[i]==0){
            b[j] = a[i];
            j++;
        }
    }
    for(int k=0;k<l;k++){
        if(a[k]==1){
            b[j]=a[k];
            j++;
        }
    }
    for(int m=0;m<l;m++){
        if(a[m]==2){
            b[j]=a[m];
            j++;
        }
    }
    for(int s=0;s<l;s++){
        printf("%d ",b[s]);
    }
return 0;
}