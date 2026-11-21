#include<stdio.h>
// 1. no return and no parameter
void greet(){
    printf("Good Morning!!");
}
// 2. no return and parameter
void age(int age){
    printf("My age is %d",age);
}
// 3. return and no parameter
int subtract(){
    int a=10;
    int b=5;
    int c=a-b;
    return c;
}
// 4. return and parameter
int sum(int a,int b){
    int c=a+b;
    return c;
}