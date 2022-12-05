#include <stdio.h>

int Sum(int a, int b)
{
    return a + b;
}
int product(int a, int b)
{
    return a * b;
}
int Divide(int a, int b)
{
    return a / b;
}

void StarPattern(int lines)
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int Subtract(int a,int b){
    return a-b;
}

int main()
{
    int a = 5, b = 10;
    printf("Sum of %d and %d = %d", a, b, Sum(a, b));
    printf("\n Product of %d and %d = %d", a, b, product(a, b));
    printf("\nDivide of %d and %d = %d\n", a, b, Divide(a, b));
    printf("\nDifference between %d and %d = %d",a,b,Subtract(a,b));
    StarPattern(a);
    return 0;
}