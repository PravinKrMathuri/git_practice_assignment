#include <stdio.h>

int Sum(int a,int b){
    return a+b;
}

int main() 
{
    int a=5,b=10;
    printf("Sum of %d and %d = %d",a,b,Sum(a,b));
    return 0;
}