//Copy the one string into another string.................
#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%[^\n]",&a);
    for(int i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }
    printf("%s",b);
    return 0;
}