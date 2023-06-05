#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%s", a);
    int vowel = 0;
    for (int i = 0; i < strlen(a); i++)
    {

        int v = a[i] - 'a';
        if (v == 0 || v == 4 || v == 8 || v == 14 || v == 20)
        {
            vowel++;
        }
    }

    printf("%d", vowel);
    return 0;
};