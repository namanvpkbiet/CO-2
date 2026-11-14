#include<stdio.h>
int main(){
    // array ko declare
    int arr[5];
    printf("Enter the numbers:\n");
    // input lena hai
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    //output
    printf("Output is\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}