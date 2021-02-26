#include <stdio.h>
int islcm(int a,int b,2);
void main()
{
    int a,b, LCM;
    printf("Input first number : ");
    scanf ("%d", &a);
    printf("\nInput second number : ");
    scanf ("%d", &b);
    LCM = islcm(a, b, 2);
    printf("\nLCM of %d and %d = %d",a,b,LCM);
}
int islcm(int a,int b,2)
{
    int temp=1;
    if(temp%a==0 && temp%b==0)
    {
        return temp*islcm(a/temp,b/temp,2);
    }
    else
    { 
        temp++;
        islcm(a,b);
        return temp*islcm(a/temp,b/temp,2);
    }
}
