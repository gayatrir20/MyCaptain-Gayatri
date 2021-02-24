#include <stdio.h>

int main()
{
    int m; 
    printf("Enter marks ");
    scanf("%d",&m);
    if(m<0 || m>100)
    {
        printf("Invalid entry");
    }
    else if(m>85 && m<100)
    {
        printf("Grade A");
    }
    else if(m<84 && m>70)
    {
        printf("Grade B");
    }
    else if(m<69 && m>55)
    {
        printf("Grade C");
    }
    else if(m<54 && m>40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
