#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    int tiger = 0;
    int pathan = 0;
    int draw = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int t, p;
        scanf("%d %d", &t, &p);
        if (t > p)
        {
            tiger++;
        }
        else if (t == p)
        {
            draw++;
        }

        else
        {
            pathan++;
        }
    }
    if (tiger > pathan)
    {
        printf("Tiger\n");
    }
    else if (tiger == pathan)
    {
        printf("Draw\n");
    }
    else
    {
        printf("Pathan\n");
    }

    return 0;
};