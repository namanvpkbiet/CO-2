#include<stdio.h>
int main(){
    // declare 2d array
    // datatype 2d_array_name[row][column];
    int a[3][3];
    // input
    printf("Enter the elements:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The 2d aray is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}