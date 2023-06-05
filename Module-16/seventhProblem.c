#include <stdio.h>
#include <string.h>
// It does pass just value.It does not pass  variable.Pass value and Parameter value pointer address are different.When  parameter value will chance in function then passing variable value will not chance.
void passByValueFunc(int x)
{
    printf("%d \n", x);
};

// It does pass refarence address.It does not pass  value.Pass variable value and Parameter value pointer address are some . When  parameter value  will chance in function then passing variable value will chance.
void passByRefarenceFunc(int *y)
{
    printf("%p \n", y);
}
int main()
{
    // Pass by value
    int x = 100;
    passByValueFunc(x);
    // Pass by refarence
    int y = 100;
    passByRefarenceFunc(&y);
    return 0;
};