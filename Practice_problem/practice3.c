#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    // if (a % 2 == 0)
    // {
    //     printf("I am ever number");
    // }
    // else
    // {
    //     printf("I am odd number");
    // };
    // if (a > 0)
    // {
    //     printf("positive number");
    // }
    // else if (a < 0)
    // {
    //     printf("nagetive number");
    // }
    // else if (a == 0)
    // {
    //     printf("zero");
    // };
    if (a >= 20000)
    {
        printf("Gucci Bag Gucci Belt");
    }
    else if (a >= 10000 && a <= 19999)
    {
        printf("Gucci Bag");
    }
    else if (a >= 5000 && a <= 9999)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something");
    };

    return 0;
}