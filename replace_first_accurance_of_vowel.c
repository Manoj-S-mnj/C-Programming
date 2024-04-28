//C program to Replace the first occurance of vowel with '-' in the string........
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char r='-';
    scanf("%[^\n]",&a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U'){
               a[i]=r; 
               break;
        } 
    }
    printf("%s",a);
    return 0;
}