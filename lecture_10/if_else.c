#include<stdio.h>
int main(){
    // mujhe btana hai vote de skta hoon yah nahi
    int age;
    printf("enter the age:\n");
    scanf("%d",&age);
    if(age>=18){
        printf("You can vote");
    }
    else{
        printf("You can not vote");
    }

    return 0;
}