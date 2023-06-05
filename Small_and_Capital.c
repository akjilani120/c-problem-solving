#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%s", a);
    int small = 0;
    int capital = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        int v = a[i] - 'a';
        if (v >= 0 && v <= 25)
        {
            small++;
        }

        int v2 = a[i] - 'A';
        if (v2 >= 0 && v2 <= 25)
        {
            capital++;
        }
    }
    printf("%d %d", capital, small);
    return 0;
};