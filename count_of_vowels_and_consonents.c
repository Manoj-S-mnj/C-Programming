//Count occurance of vowels & Consonents in the given string.............
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int vowels=0,consonents=0;
    scanf("%[^\n]",&a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]!='a' && a[i]!='A' && a[i]!='e'&& a[i]!='E' && a[i]!='i' && a[i]!='I' && a[i]!='o' && a[i]!='O' && a[i]!='u' && a[i]!='U'){
                consonents+=1;
        } 
        else{
            vowels+=1;
        } 
    }
    printf("Number of vowels in string is %d",vowels);
    printf("\nNumber of consonents in string is %d",consonents);
    return 0;
}