#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100];
    scanf("%s", &ar);
    int len = strlen(ar);
    // int count = 0;
    // for (int i = 0; ar[i] != '\0'; i++)
    // {
    //     count++;
    // }
    printf("%d", len);
    return 0;
};