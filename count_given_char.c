//Count accurance of given charecter in a given string....
#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    char c;
    int b=0;
    scanf("%s\n",&s);
    scanf("%c",&c);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c){
            b+=1;
        }
    }
    printf("%d",b);
    return 0;
}