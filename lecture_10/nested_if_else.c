#include<stdio.h>
int main(){
    // grade system
    int m;
    printf("Enter the marks:\n");
    scanf("%d",&m);
    if(m>90 && m<=100){
        printf("A\n");
    }
    else if(m>80 && m<=90){
        printf("B\n");
    }
    else if(m>70 && m<80){
        printf("C\n");
    }
    else{
        printf("F\n");
    }
    return 0;
}