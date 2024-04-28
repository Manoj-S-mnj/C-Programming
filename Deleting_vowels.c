//Deleting the vowels in the string..........
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    int j=0,i=0;
    scanf("%[^\n]",&a);
    while(a[i]!='\0'){
        if(a[i]!='a' && a[i]!='A' && a[i]!='e'&& a[i]!='E' && a[i]!='i' && a[i]!='I' && a[i]!='o' && a[i]!='O' && a[i]!='u' && a[i]!='U'){
                b[j]=a[i];
                j++;
        }
        i++;
    }
    b[j]='\0';
    printf("%s",b);
    return 0;
} 