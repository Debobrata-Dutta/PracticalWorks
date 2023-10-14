//Write a program in c to solve all the algebraic identities.
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the values of A,B and C:\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("S_1=%f\n",(a*a)+(2*a*b)+(b*b));
    printf("S_2=%f\n",(a*a)-(2*a*b)+(b*b));
    printf("S_3=%f\n",(a+b)*(a-b));
    printf("S_4=%f\n",(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a));
    printf("S_5=%f\n",(a*a)+(b*b)+(c*c)+(2*a*b)-(2*b*c)-(2*c*a));
    printf("S_6=%f\n",(a*a)+(b*b)+(c*c)-(2*a*b)-(2*b*c)+(2*c*a));
    printf("S_7=%f\n",(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a));
    printf("S_8=%f\n",(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a));
    printf("S_9=%f\n",(a*a*a)+(b*b*b)+((3*a*b)+(a+b)));
    printf("S_10=%f\n",(a*a*a)-(b*b*b)-((3*a*b)+(a-b)));
    printf("S_11=%f\n",(a+b)*((a*a)-(a*b)+(b*b)));
    printf("S_12=%f\n",(a-b)*((a*a)+(a*b)+(b*b)));
    printf("S_13=%f\n",(a*a*a)+(b*b*b)+(c*c*c)-(3*a*b*c));}
