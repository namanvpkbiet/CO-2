#include<stdio.h>
struct details{
    char name[50];
    int age;
};
int main(){
    struct details p;
    printf("Enter the name:\n");
    scanf("%[^\n]",p.name);
    printf("Enter the age:\n");
    scanf("%d",&p.age);
    printf("The details are:\n");
    printf("%s\n",p.name);
    printf("%d",p.age);
}