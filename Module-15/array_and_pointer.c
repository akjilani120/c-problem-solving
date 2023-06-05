#include <stdio.h>
#include <string.h>
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    printf("address number of first ar %p \n", &ar[0]);
    printf("address number of first ar %d \n", ar[0]);
    printf("address number of full ar %d \n", *(ar + 4));
    return 0;
};