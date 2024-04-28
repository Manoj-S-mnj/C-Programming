//Check the given string is anagram or not.....
#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char b[10];
    int n=0;
    scanf("%s",&a);
    scanf("%s",&b);
    int l=strlen(a);
    for(int i=0;a[i]!='\0';i++){
        for(int j=0;b[j]!='\0';j++){
            if(a[i]==b[j]){
            n=n+1;
            break;
            }
        }
    }
    if(l==n){
        printf("Anagram");
    }
    else{
        printf("Not a Anagram");
    }
    return 0;
}