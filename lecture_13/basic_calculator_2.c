#include<stdio.h>
int main(){
    printf("Enter the two numbers\n");
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("For addition choose +\n");
    printf("For subtraction choose -\n");
    printf("For multiplication choose *\n");
    printf("For division choose /\n");
    char c;
    printf("Enter your choice:\n");
    scanf(" %c",&c);
    switch(c){
        case '+':
            printf("Addition is %d\n",a+b);
            break;
        case '-':
            printf("Subtraction is %d\n",a-b);
            break;
        case '*':
            printf("Multiplication is %d\n",a*b);
            break;
        case '/':
            printf("Division is %d\n",a/b);
            break;
        default:
            printf("Please select the above options\n");
    }
    return 0;
}