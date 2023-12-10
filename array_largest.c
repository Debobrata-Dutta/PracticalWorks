//wap in c to search the highest number in an array
#include<stdio.h>
int main(){
int arr[100]={60,225,20,3};
for(int i=0;i<100;i++) {
    if (arr[0] < arr[i]) {
        arr[0] = arr[i];
    }
}
printf("the largest value of the array is:%d",arr[0]);}
