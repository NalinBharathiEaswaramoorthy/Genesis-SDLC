/**
 * @file matricmulti.c
 * @author your name (you@domain.com)
 * @brief to calculate product of matrices
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"header.h"
/**
 * @brief 
 * 
 * @param ar1 1st matrix
 * @param br1 2nd mtrix
 * @param row1 number of rows in ar1
 * @param col1 number of columns in ar1
 * @param col2 number of columns in br1
 */
error_t multiply(int ar1[20][20],int br1[20][20],int row1,int col1,int col2)
{
    int multi[20][20],i,j,k;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            multi[i][j]=0;
            for(k=0;k<col1;k++)
            {
                multi[i][j]=multi[i][j]+ar1[i][k]*br1[k][j];
            }
        }
    }
 
    printf("THE PRODUCT MATRIX IS:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
    return SUCCESS;
}
