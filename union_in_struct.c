#include <stdio.h>
int main(){
    struct u_data{
        char name[20];
        union user_data{
            int reg_no;
            int roll_no;
        };
    };
    int option;
    struct u_data s={"DEBOBRATA"};
    union user_data u;
    printf("WHAT DO U WANT TO ENTER 1: REG_NO 2:ROLL_NO\n ");
    scanf("%d",&option);
    switch (option) {
        case 1:
            printf("ENTER REG NO:");
            scanf("%d",&u.reg_no);
            printf("NAME: %s\n",s.name);
            printf("Reg No: %d",u.reg_no);
            break;
        case 2:
            printf("ENTER ROLL NO:");
            scanf("%d",&u.roll_no);
            printf("NAME: %s\n",s.name);
            printf("Roll No: %d",u.roll_no);
            break;
    }
}
