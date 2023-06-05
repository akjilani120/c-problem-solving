#include <stdio.h>
#include <string.h>
void word()
{
    printf("world Start \n");
    printf("world end \n");
}
void hello()
{
    printf("hello Start \n");
    word();
    printf("hello end \n");
}

int main()
{
    printf("main start \n");
    hello();
    printf("main end \n");
    return 0;
};