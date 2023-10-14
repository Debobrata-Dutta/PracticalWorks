#include<stdio.h>
int main()
{
    int m,s,sst,b,e,avg;
    printf("Enter Science Marks:\n");
    scanf("%d",&s);
    printf("Enter Maths Marks:\n");
    scanf("%d",&m);
    printf("Enter Social Studies Marks:\n");
    scanf("%d",&sst);
    printf("Enter Bengali Marks:\n");
    scanf("%d",&b);
    printf("Enter English Marks:\n");
    scanf("%d",&e);
    avg=(m+s+sst+b+e)/5;
    printf("Average of all the marks is:%d\n",avg);
}
