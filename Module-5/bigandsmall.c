#include <stdint.h>
int main()
{
    int A;
    int B;
    int C;
    scanf("%d %d %d", &A, &B, &C);

    if (A <= B && A <= C)
    {
        printf("%d A is beggest Number", A);
    }
    else if (B <= A && B <= C)
    {
        printf("%d B is beggest Number", B);
    }
    else
    {
        printf("%d  C is beggest Number", C);
    };
    if (A >= B && A >= C)
    {
        printf("%d ", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%d ", B);
    }
    else
    {
        printf("%d ", C);
    };
    return 0;
};