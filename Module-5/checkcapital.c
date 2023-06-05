#include <stdint.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 0 && x <= 9)
    {
        printf("IS DIGIT\n");
    }
    else
    {

        if (x >= "a" && x <= "z")
        {
            printf("ALPHA\nIS SMALL\n");
        }
        else
        {
            printf("ALPHA\nIS CAPITAL\n");
        };
    };
    return 0;
};