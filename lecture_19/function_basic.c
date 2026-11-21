#include<stdio.h>
// function declare
// return datatype function_name(parameter/arguement){kaam}
// addition ka function
int sum(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int a=10;
    int b=20;
    printf("%d\n",sum(a,b));
    printf("%d\n",sum(10,40));
    printf("%d\n",sum(76,98));
    return 0;
}
