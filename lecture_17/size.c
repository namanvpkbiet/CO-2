#include<stdio.h>
int main(){
    int a;
    // printf("%d",sizeof(a));
    int arr[]={1,2,3,4,5,6,7};
    printf("%d",sizeof(arr)/sizeof(arr[0]));
    return 0;
}