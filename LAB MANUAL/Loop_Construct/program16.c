#include<stdio.h>
int main()
{
    int row;
    printf("Enter the Number of Row for Triangle Pattern : ");
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            printf("*");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < row - i; j++)
        {
            printf("*");
        }
        // for (int j = 0; j <= i; j++)
        // {
        //     printf("  ");
        // }
        
 
        printf("\n");
    }

    for (int i = row; i >= 0; i--)
    {
        for (int j = 0; j < row - i; j++)
        {
            printf("*");
        }
        for (int j = i; j >= 0; j--)
        {
            printf("  ");
        }
        for (int j = 0; j < row - i; j++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
    
    
    return 0;
}