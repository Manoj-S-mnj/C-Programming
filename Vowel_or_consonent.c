
//To check the given charecter is vowel or constant....
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U'){
        printf("Vowel");
    }
    else{
        printf("Consonent");
    }
    return 0;
}