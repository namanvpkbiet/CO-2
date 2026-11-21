#include<stdio.h>
int factorial(int n){ // 5
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    printf("The factorial of number n is: %d\n",factorial(n));
    return 0;
}