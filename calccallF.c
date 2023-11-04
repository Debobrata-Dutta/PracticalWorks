// wap in c to make a calculator using function and call by reference(pointers)
#include <stdio.h>

int add (int*a,int* b) {

    return *a + *b;}
int sub (int*a,int* b) {

    return *a - *b;}
int mult (int*a,int* b) {

    return *a * *b;}
int divi (int*a,int* b) {

    return *a / *b;}
int mod (int*a,int* b) {

    return *a % *b;}
    int main(){

    int num1,num2;

    printf(" enter first number:");

    scanf( "%d", &num1);

    printf("enter second number:");

    scanf("%d", &num2);

    printf("addition=%d\n", add(&num1, &num2));
        printf("substraction=%d\n", sub(&num1, &num2));
        printf("multiplication=%d\n", mult(&num1, &num2));
        printf("divition=%d\n", divi(&num1, &num2));
        printf("mod=%d\n", mod(&num1, &num2));
}
