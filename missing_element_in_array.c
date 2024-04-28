#include<stdio.h>
int main(){
    int a[]={1,3,5,2,6,9,7,10};
    int n=10;
    int len=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<=n;i++){
        for(int j=0;j<len-1;j++){
            if(a[j]==i)
            break;
            else
            printf("%d\n",a[j]);
        }
    }
    return 0;
}