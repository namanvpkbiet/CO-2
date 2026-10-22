#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    // 1st loop
    for(int i=1;i<=n;i++){
        // spaces ko print karna
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        // star print karna
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}