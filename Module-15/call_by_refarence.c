#include <stdio.h>
#include <string.h>
void myFunc(int *p)
{
    printf("P ar value %d \n", *p);
    *p = 200;
    printf("P ar value %d \n", *p);
};
int main()
{
    int x = 100;
    printf("X ar value %p \n", &x);
    myFunc(&x);
    return 0;
};