//Replace a string space withn a given charecter.....
#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    char r;
    int i;
    scanf("%[^\n]",&a);
    scanf("\n%c",&r);
    for(i=0;a[i]!='\0';i++){
        if(a[i]!=' '){
            b[i]=a[i];
        }
        else{
            b[i]=r;
        }
    }
    b[i]='\0';
    printf("%s",b);
    return 0;
}