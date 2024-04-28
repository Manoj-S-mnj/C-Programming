//remove a charecter from given string....
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char s[100],a[100];
    char c;
    scanf("%s\n",&s);
    scanf("%c",&c);
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=c){
            a[j]=s[i];
            j++;
        }
    }
    a[j]='\0';
    printf("%s",a);
    return 0;
}