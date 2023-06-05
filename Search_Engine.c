#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    int spe;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int s;
        scanf("%d", &s);
        int ar[s];
        for (int j = 1; j <= s; j++)
        {
            scanf("%d", &ar[j]);
        }
        int ide;
        scanf("%d", &ide);
        for (int k = 1; k <= s; k++)
        {
            if (ide != ar[k] || ide == ar[k])
            {
                if (ar[k] == ide)
                {
                    printf("Case %d : %d \n", i, k);
                }
                else
                {
                    printf("Case %d : Not Found \n", i);
                }
            }
            // else
            // {
            //     printf("Case %d : %d \n", i, k);
            // }

            // else
            // {
            //     printf("Case Not Found \n");
            // }
        }
    }

    // if (spe)
    // {
    //     printf("Case %d : Not Found \n", spe);
    // }
    return 0;
};