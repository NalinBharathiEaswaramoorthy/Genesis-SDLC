#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "header.h"

bool sym(int matrix[20][20], int row, int col)
{
    int transpose[row][col];
    int i,j;
    

    printf("\nThe given matrix is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            transpose[j][i] = matrix[i][j];

    printf("\nThe transpose of given matrix is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    int flag = 1;
    if(row==col)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(matrix[i][j] != transpose[i][j])
                    flag = 0;
                    break;
            }
        }
        if(flag==1)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}