#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    int rev=0;
    while(n>0){
        // digit ko extract karna
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("Reverse number:%d\n",rev);
    return 0;
}