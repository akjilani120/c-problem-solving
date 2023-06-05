#include <stdio.h>
#include <string.h>
// Has Return + Parameter
int firstFunc(int a, int b)
{
    int multi = a * b;
    return multi;
}
// Has Return + No Parameter
int secondFunc(void)
{
    int count = 0;
    for (int i = 1; i < 10; i++)
    {

        if (i == 5)
        {
            break;
        }
        count++;
    }
    return count;
}
// No Return + Parameter
void thirdFunc(int a)
{
    for (int i = 1; i < a; i++)
    {
        printf("%d", i);
    }
}
// No Return + No Parameter
void fourthFunc(void)
{
    char a[100] = "abdulkaderjilanif";
    printf("\n%d", strlen(a));
}
int main()
{
    int firstFuncResult = firstFunc(10, 20);
    printf("%d \n", firstFuncResult);
    int secondResult = secondFunc();
    printf("%d \n", secondResult);
    thirdFunc(10);
    fourthFunc();
    return 0;
};