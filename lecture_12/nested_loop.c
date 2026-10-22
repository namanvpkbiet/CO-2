#include<stdio.h>
int main(){
    int num=1;
    // bingo print karna
    // 1st loop
    for(int i=1;i<=5;i++){
        // 2nd loop
        for(int j=1;j<=5;j++){
            printf("%d ",num);
            num=num+1;
        }
        printf("\n");
    }
    return 0;
}