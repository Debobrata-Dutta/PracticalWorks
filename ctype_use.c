#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if (isalpha(a)){
        printf("character");
    }
    else{
        printf("not a character");
    }
}
