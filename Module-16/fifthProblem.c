#include <stdio.h>
#include <string.h>

int is_palindrome(char a[])
{
    int palindrome = 1;
    for (int i = 0; i < strlen(a) / 2; i++)
    {
        if (a[i] != a[strlen(a) - i - 1])
        {
            palindrome = 0;
            break;
        }
    }
    return palindrome;
}

int main()
{

    char a[10];
    scanf("%s", a);
    int palindromeResult = is_palindrome(a);
    if (palindromeResult)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}