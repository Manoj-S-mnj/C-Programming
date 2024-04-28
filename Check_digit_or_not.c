//to check the given charecter is digit or not..............
#include<stdio.h>
#include<string.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Not a digit");
    }
    return 0;
}