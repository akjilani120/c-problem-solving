#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    fgets(a, 1000, stdin);
    int capital = 0;
    int smaller = 0;
    int space = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            smaller++;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            capital++;
        }
        else if (a[i] == ' ')
        {
            space++;
        }
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", smaller);
    printf("Spaces  %d\n", space);
    return 0;
};