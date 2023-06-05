#include <stdio.h>
#include <string.h>
int main()
{
    float x, p;

    scanf("%f %f", &x, &p);

    float mainPrice = p / (1 - x / 100);
    printf("%.2f\n", mainPrice);

    return 0;
}