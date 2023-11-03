//wap in c to find the area of a circle using function.
#include<stdio.h>
float pi=3.14;
float area(float r){
return pi*r*r;

int main(){
float radius;
printf("enter the radius");
scanf("%f",&radius);
printf("the area of circle is:%f",area(radius));
