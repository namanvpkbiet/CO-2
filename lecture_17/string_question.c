#include <stdio.h>
int main()
{
    char str[20] = "abcdef";

    // 1. String length nikalna
    int i = 0;
    int l = 0;

    while (str[i] != '\0')
    {
        l++;
        i++;
    }

    printf("The length of string is %d\n", l);

    // 2. String ko reverse karna
    printf("The reverse order is:\n");

    for (int i = l - 1; i >= 0; i--)
    {
        putchar(str[i]);
    }

    printf("\n");

    // 3. String copy karna
    char strcopy[l + 1];

    for (int i = 0; i < l; i++)
    {
        strcopy[i] = str[i];
    }

    strcopy[l] = '\0';

    printf("The original string is %s\n", str);
    printf("The copy string is %s\n", strcopy);

    // 4. String concatenation
    char str1[10] = "Hello";
    char str2[10] = "world";

    int a = 0;
    int l1 = 0;

    while (str1[a] != '\0')
    {
        l1++;
        a++;
    }

    int b = 0;
    int l2 = 0;

    while (str2[b] != '\0')
    {
        l2++;
        b++;
    }

    char con[l1 + l2 + 1];

    int j = 0;

    // First string copy karna
    for (int i = 0; i < l1; i++)
    {
        con[j] = str1[i];
        j++;
    }

    // Second string copy karna
    for (int i = 0; i < l2; i++)
    {
        con[j] = str2[i];
        j++;
    }

    // Null character add karna
    con[j] = '\0';

    printf("The concatenated string is %s\n", con);

    return 0;
}
