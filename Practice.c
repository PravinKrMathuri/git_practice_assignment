#include <stdio.h>

int Sum(int a, int b)
{
    return a + b;
}
int product(int a, int b)
{
    return a * b;
}

int main()
{
    int a = 5, b = 10;
    printf("Sum of %d and %d = %d", a, b, Sum(a, b));
    printf("\n Product of %d and %d = %d", a, b, product(a, b));
    return 0;
}