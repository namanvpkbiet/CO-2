#include<stdio.h>
struct student{
    char name[50];
    int age;
    float marks;
};
int main(){
    struct student s[5];
    for(int i=0;i<5;i++){
        printf("Enter the name:\n");
        scanf("%49s",s[i].name);
        printf("Enter the age:\n");
        scanf("%d",&s[i].age);
        printf("Enter the marks:\n");
        scanf("%f",&s[i].marks);
    }
    // output student details
    for(int i=0;i<5;i++){
        printf("Student %d\n",i+1);
        printf("Name: %s\n",s[i].name);
        printf("Age: %d\n",s[i].age);
        printf("Marks: %f\n",s[i].marks);
    }
    return 0;
}