//area of triangle using heron's formula
#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c;
    printf("Enter the values of A,B and C:\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("Area of triangle is:%f\n",sqrt(s*(s - a)*(s - b)*(s - c)));
}
