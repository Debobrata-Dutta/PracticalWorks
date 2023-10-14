// printing the storage in various units
#include<stdio.h>
int main()
{
    float KB;
    printf("Enter the size in Kilo Bytes:\n");
    scanf("%f",&KB);
    printf("Size in Mega Bytes:%f\n",KB/1024);
    printf("Size in Giga Bytes:%f\n",KB/1024/1024);
    printf("Size in Tera Bytes:%f\n",KB/1024/1024/1024);
}
