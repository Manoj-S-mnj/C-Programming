#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c=0,i=0;
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        if(b==1){
            c=c+pow(2,i);
        }
        i++;
        a=a/10; 
    }
    printf("%d",c);
    return 0;
}
