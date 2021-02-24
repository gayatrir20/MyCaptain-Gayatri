#include <stdio.h>

int main()
{
    int num = 1234;  
    printf("Input number : 1234");
    int result = sum(num);
    printf("\nSum of digits : %d",result);
    return 0;
}
int sum(int n)
{
    if( n == 0 )
    return 0;
    return (n % 10 + sum(n/10));
}
