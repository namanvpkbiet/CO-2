#include<Stdio.h>
int main(){
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("Sum is %d\n",sum);
    printf("Average is %d\n",sum/n);
    return 0;
}