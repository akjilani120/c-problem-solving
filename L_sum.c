#include <stdio.h>
#include <string.h>
int fun(int arr[], int n, int sum)
{

    if (n < 0)
    {
        return;
    }
    sum = sum + arr[n];
    // int sumResult = sum;
    printf("%d sum value \n", sum);
    // printf("%d sum value \n", sumResult);
    return sum;
    fun(arr, --n, sum);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int sumValue = fun(arr, n - 1, sum);
    printf("%d sum value from", sumValue);
    return 0;
};