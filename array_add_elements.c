#include<stdio.h>
int main()
{
    int size;
    printf("enter array size:");
    scanf("%d",&size);
    int numbers[size];
    for(int i=0;i<size;i++){
        printf("enter element value for index no %d;",i);
        scanf("%d",&numbers[i]);}
    for(int i=0;i<size;i++){
        printf(" %d",numbers[i]);
    }
}
