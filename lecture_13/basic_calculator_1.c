#include<stdio.h>
int main(){
    printf("Enter the two numbers\n");
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("For addition choose 1\n");
    printf("For subtraction choose 2\n");
    printf("For multiplication choose 3\n");
    printf("For division choose 4\n");
    int c;
    printf("Enter your choice:\n");
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("Addition is %d\n",a+b);
            break;
        case 2:
            printf("Subtraction is %d\n",a-b);
            break;
        case 3:
            printf("Multiplication is %d\n",a*b);
            break;
        case 4:
            printf("Division is %d\n",a/b);
            break;
        default:
            printf("Please select the above options\n");
    }
    return 0;
}