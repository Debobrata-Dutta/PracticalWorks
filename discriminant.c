//Write a program to get the discriminant value of a quadratic equation.
#include<stdio.h>
int main()
{
Int a,b,c,D;
printf("Enter the values of A,B and C:\n");
scanf("%d%d%d",&a,&b,&c);
D=(b*b)-(4*a*c);
printf("The value of Discriminant is:%d\n",D);
}

