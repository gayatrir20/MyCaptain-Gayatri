#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i;
    int j;
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter value for element-[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is :\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",matrix[i][j]);
            if(j == 2)
            {
                printf("\n");
            }
            else if(j == 3)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

