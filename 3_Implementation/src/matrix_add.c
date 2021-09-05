#include "header.h"

float matrix_addition(int rows,int columns,float matrix_A[][10],float matrix_B[][10])
{
    float sum_matrix[rows][columns],check_sum=0;
    printf("The resultant sum matrix is\n");
    for(int row_count=0;row_count<rows;row_count++)
    {
        for(int col_count=0;col_count<columns;col_count++)
        {
            sum_matrix[row_count][col_count]=matrix_A[row_count][col_count]+matrix_B[row_count][col_count];
            printf("%.1f\t",sum_matrix[row_count][col_count]);
            check_sum+=sum_matrix[row_count][col_count];
        }
        printf("\n");
    }
    return check_sum;
}
