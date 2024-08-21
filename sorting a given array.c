// Sorting the given array of elements

#include<stdio.h>
int main(){
    int array[] = {45,34,78,23,79,33,68,90};
    int length = sizeof(array) / sizeof(array[0]);
    for(int i=0 ; i<length ; i++){
        for(int j=i+1 ; j<length ; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    // printing the sorted array
    for(int k=0 ; k<length ; k++){
        printf("%d ",array[k]);
    }
    return 0;
}