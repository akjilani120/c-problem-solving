#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int count[25] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int v = s[i] - 'a';
        count[v]++;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        int v = s[i] - 'a';
        if (count[v] != 0)
        {
            printf("%c = %d\n", v + 'a', count[v]);
        }
        count[v] = 0;
    }
    printf("%d", count);
    return 0;
};