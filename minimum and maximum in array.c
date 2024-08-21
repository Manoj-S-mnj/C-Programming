// Find the minimum and maximum element in the given array

#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int a[] = {10,20,30,3,40,50,90,55,67};
    int min = a[0], max =a[0];
    int length = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < length; i++){
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("minimum element is %d \nmaximum element is %d",min,max);
    return 0;
}