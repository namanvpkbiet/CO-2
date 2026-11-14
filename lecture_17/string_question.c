#include<stdio.h>
int main(){
    char str[20]="abcdef";
    // length nikalna
    int i=0;
    int l=0;
    while(str[i]!='\0'){
        l++;
        i++;
    }
    printf("The length of sting is %d\n",l);
    printf("The reverse order is:\n");
    // string ko reverse karna
    for(int i=l-1;i>=0;i--){
        putchar(str[i]);
    }
    printf("\n");
    char strcopy[l+1];
    printf("%s",str);
    for(int i=0;i<l;i++){
        strcopy[i]=str[i];
    }
    str[l]='\0';
    printf("The copy string is %s\n",strcopy);

    char str1[10]="Hello";
    char str2[10]="world";
    int a=0;
    int l1=0;
    while(str1[a]!='\0'){
        l1++;
        a++;
    }
    int b=0;
    int l2=0;
    while(str2[b]!='\0'){
        l2++;
        b++;
    }
    char con[a+b+1];
    int j=0;
    for(int i=0;i<a;i++){
        con[j]=str1[i];
        j++;
    }
    for(int i=0;i<b;i++){
        con[j]=str2[i];
        j++;
    }
    str[j]='\0';
    printf("The concatenated string is %s\n",con);
    return 0;
}
