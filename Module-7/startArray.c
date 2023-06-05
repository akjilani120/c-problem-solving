#include <stdint.h>
int main()
{
    int arr[5];
    arr[2] = 5;
    arr[3];
    arr[4] = 5;
    arr[1] = 5;
    scanf("%d", &arr[3]);
    arr[0] = arr[2] + arr[3] + arr[4] + arr[1];

    printf("I am array list %d\n", arr[0]);
    return 0;
};