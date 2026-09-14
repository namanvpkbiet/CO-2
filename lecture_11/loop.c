#include<stdio.h>
int main(){
    // counting from 1 to 10
    // initialization
    // condition
    // update
    // block of code
    for(int i=1;i<=10;i=i+1){
        printf("%d\n",i);
    }
    // Multiplication table of 7
    for(int i=1;i<=10;i++){
        printf("7 X %d = %d\n",i,7*i);
    }
    // Factorial of Number N
    printf("Enter the number N:\n");
    int N;
    scanf("%d",&N);
    int fact=1;
    for(int i=1;i<=N;i=i+1){
        fact=fact*i;
        printf("Factorial of N is %d\n",fact);
    }
    // printf("Factorial of N is %d\n",fact);
    return 0;
}