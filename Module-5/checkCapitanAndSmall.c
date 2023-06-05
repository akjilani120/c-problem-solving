#include <stdint.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 0 && x <= 9)
    {
        printf("IS DIGIT\n");
    }
    else if (x >= "A" && x <= "Z")
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else
    {
        printf("IS SMALL\nsmall letter");
    }
    {
    }
    return 0;
};