#include<stdio.h>
int main(){
    int arr_a[3][3];
    int arr_b[3][3];
    printf("Enter the elements for first matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr_a[i][j]);
        }
    }
    printf("Enter the elements for second matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr_b[i][j]);
        }
    }
    // addition
    int sum[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=arr_a[i][j]+arr_b[i][j];
        }
    }
    // transpose
    int t[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            t[i][j]=arr_a[j][i];
        }
    }
    // multiplication
    int mul[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mul[i][j]=arr_a[i][j]*arr_b[j][i];
        }
    }
    printf("The addition is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    printf("The transpose is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    printf("The multiplication is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}