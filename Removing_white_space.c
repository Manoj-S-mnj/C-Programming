//Remove a white space in the given string....
#include<stdio.h>
#include<string.h>
int main(){
    int j=0;
    char s[100],n[100];
    scanf("%[^\n]",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=' '){
            n[j]=s[i];
            j++;
        }
    }
    n[j]='\0';
    printf("%s",n);
    return 0;
}