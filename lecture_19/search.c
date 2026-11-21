#include<stdio.h>
_Bool search(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int element=63;
    _Bool ans=search(arr,n,element);
    if(ans==1){
        printf("ELement is present\n");
    }
    else{
        printf("Element is not present\n");
    }
    return 0;
}