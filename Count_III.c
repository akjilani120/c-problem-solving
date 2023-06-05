#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%s", a);
    int count[26] = {0};
    for (int i = 0; i < strlen(a); i++)
    {
        int v = a[i] - 'a';
        count[v]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d \n", i + 'a', count[i]);
    }

    return 0;
};