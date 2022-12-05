#include <stdio.h>

int Sum(int a,int b){
    return a+b;
}

int Divide(int a,int b){
    return a/b;
}

int main() 
{
    int a=10,b=5;
    printf("Sum of %d and %d = %d",a,b,Sum(a,b));
    printf("\nDivide of %d and %d = %d",a,b,Divide(a,b));
    return 0;
}