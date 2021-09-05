#include "header.h"

float Gauss_Jordan_Elimination(float matrix_A[][10],int size)
{
    float temp,soln_array[10],soln_sum=0;
    int row_count,col_count;
    for(col_count=1; col_count<=size; col_count++)
    {
        for(row_count=1; row_count<=size; row_count++)
        {
            if(row_count!=col_count)
            {
                temp = matrix_A[row_count][col_count]/matrix_A[col_count][col_count];
                for(int y=1;y<=(size+1);y++)
                {
                    matrix_A[row_count][y]=matrix_A[row_count][y]-temp*matrix_A[col_count][y];
                }

            }
        }
    }
    printf("\nThe solution is:\n");
    for(row_count=1; row_count<=size; row_count++)
    {
        soln_array[row_count]=matrix_A[row_count][size+1]/matrix_A[row_count][row_count];
        printf("\n x%d=%.2f\n",row_count,soln_array[row_count]);
        soln_sum+=soln_array[row_count];
    }
    return soln_sum;
}