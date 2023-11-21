//wacp to 1:concatinate strings 2:print the length 3:check wheather the strings are same or not
// 0 = same non Zero value = not same
#include <stdio.h>
#include<string.h>
int main(){
    char s1[]="debobrata";
    char s2[]="dutta";
    strcat(s1,s2);
    printf("%d\n",strlen(s2));
    printf("the comparison reasult is %d", strcmp(s1,s2));
    printf("\n%s",s1);
