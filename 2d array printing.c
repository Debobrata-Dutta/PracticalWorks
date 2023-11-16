//wap in c to form a 2d array and print it
#include <stdio.h>
int main(){
int arr[2][3]={{10,20,2},
               {30,21,5},};
// transversal of 2d array
for(int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        printf("%d ",arr[i][j]);}
    printf("\n");

    }
}
