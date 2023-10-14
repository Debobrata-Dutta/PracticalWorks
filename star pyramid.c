//Write a program to print the following pyramid.
//     *
//   *   *
//*   *   *
#include<stdio.h>
int main()
{int limit,temp=1;
for (int i=1;i<=3;i++)
{for(int j=3;j>=i;j--){
    printf("  ");}
for(int k=1;k<=temp;k++){
    printf(" *  ");}
printf("\n");
temp++;}}
