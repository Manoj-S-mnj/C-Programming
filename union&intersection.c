// Find the union and intersection of given 2 arrays
// Input: arr1[] = {2, 5, 6}
//         arr2[] = {4, 6, 8, 10} 
// Output: Union : {2, 4, 5, 6, 8, 10} 
//          Intersection : {6}


#include<stdio.h>
int main(){
    int a1[]={2,5,6,8};
    int a2[]={4,6,8,10};
    int l1=sizeof(a1)/sizeof(a1[0]);
    int l2=sizeof(a2)/sizeof(a2[0]);
    int l3 = l1+l2;
    int u[l3] = {};
    // intersection 
    printf("Intersection of two arrays");
    for (int i=0;i<l1;i++){
        for(int j=0;j<l2;j++){
            if(a1[i] == a2[j]){
                printf("%d ",a1[i]);
            }
        }
    }
    // Union
    printf("union of two Arrays");
    int k = 0 , l = 0; 
    int i = 0;
    while(k < l1 && l < l2){
            if(a1[k] < a2[l]){
                u[i] = a1[k];
                k++;
                i++;
            }
            else if(a1[k] == a2[l]){
                u[i] = a1[k];
                i++;
                k++;
                l++;
            }
            else{
                u[i] = a2[l];
                l++;
                i++;              
            }
        }
    int len = sizeof(u) / sizeof(u[0]);
    for(int i = 0; i<len;i++){
        printf("%d ",u[i]);
    }
    return 0;
}