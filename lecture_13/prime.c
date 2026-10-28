#include<stdio.h>
int main(){
    // number prime hai yah nahi
    int n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    _Bool primehaiyahnahi=1;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            primehaiyahnahi=0;
            break;
        }
    }
    if(primehaiyahnahi==1){
        printf("Number is prime\n");
    }
    else{
        printf("Number is not prime\n");
    }
    return 0;
}