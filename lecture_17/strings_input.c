#include<stdio.h>
int main(){
    char name[50];
    char full_name[50];
    // scanf("%49s",name);
    // printf("%s",name);
    // problem jaise hi white space aaye mera input waha tak hi chalega
    // method 1
    scanf("%[^\n]",name);
    printf("%s",name);
    // method 2
    // fgets(array_name,arr_size,stdin);
    fgets(full_name,sizeof(full_name),stdin);
    printf("%s",full_name);
    return 0;
}