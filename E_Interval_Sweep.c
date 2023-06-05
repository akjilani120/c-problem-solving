#include <stdio.h>
#include <string.h>
const char *checkInterval(int a, int b)
{
    if (a == 0 && b == 0)
    {
        return "NO";
    }

    if (b == 0)
    {
        return "NO";
    }

    if (a <= b && b <= 2 * a)
    {
        return "YES";
    }

    if (b > 2 * a)
    {
        if ((b - 2 * a) % 2 == 0)
        {
            return "YES";
        }
    }

    return "NO";
}

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    const char *result = checkInterval(a, b);
    printf("%s\n", result);

    return 0;
}

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     int count1 = 0;
//     int count2 = 0;
//     int l, r = a + b;
//     scanf("%d", &l);

//     for (int i = l; i <= r; i++)
//     {

//         if (i % 2 == 0)
//         {
//             count1++;
//         }
//         else
//         {
//             count2++;
//         }
//     }
//     if (count2 == a && count1 == b)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// };