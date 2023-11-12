// program with audible bell
#include <stdio.h>
int main() {
    int c,b;
    printf("enter first number:");
    scanf("%d",&c);
    printf("First number Got\a\n");
    printf("enter second number:");
    scanf("%d",&b);
    printf("second number Got\a\n");
    printf("sum is %d\a",c+b);
    return 0;
}
