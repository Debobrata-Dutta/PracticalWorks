#include<stdio.h>
int main(){
	int week;
	printf("Enter the week day number from 1-7:\n");
	scanf("%d",&week);
	switch(week){
		case 1:
			printf("Sunday\n");
			break;
				case 2:
			printf("Monday\n");
			break;
				case 3:
			printf("Tueday\n");
			break;
				case 4:
			printf("Wedday\n");
			break;
				case 5:
			printf("Thursday\n");
			break;
				case 6:
			printf("Friday\n");
			break;
				case 7:
			printf("Saturday\n");
			break;
			default:
				printf("Invalid number !");
				break;
	}
}
