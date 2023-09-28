#include<stdio.h>
#include<math.h>
int main(){
	float x1,y1,x2,y2;
	printf("enter value of x1:\n" );
	scanf("%f",&x1);
	printf("enter value of x2:\n" );
	scanf("%f",&x2);
	printf("enter value of y1:\n" );
	scanf("%f",&y1);
	printf("enter value of y2:\n" );
	scanf("%f",&y2);
	float d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("the distance is:%f",d);
	return 0;
}
