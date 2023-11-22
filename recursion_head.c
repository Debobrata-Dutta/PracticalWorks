#include <stdio.h>
int head_fun(int n){
    if(n>0){
        head_fun(n-1);//first statement to be called
        printf("%d ",n);}}
int main(){
    int a =5;
    printf("use of non tail /head recursive function", head_fun(a));//calling the function
    return 0;
}
