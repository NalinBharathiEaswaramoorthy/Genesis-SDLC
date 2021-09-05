/**
 * @file cofactor.c
 * @author Archana Arun (archana.arun@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
/**
 * @brief Cofactor of matrix 
 * 
 * @param MATRIX matrix whose cofactor to be found
 * @param size dimension of matrix
 */
#include "header.h"
void Co_factor(float MATRIX[][10],int size)
{
    float ADJOINT[10][10], COFACTOR[10][10];
    int p, q, m, n , i ,j, sign =1;
    for(q=0;q<size;q++)   // finding cofactor similar to finding determinant for each row values additional one loop
    for(p=0;p<size;p++)
    { 
        m=0; n=0;
        for(i=0;i<size;i++)
            for(j=0;j<size;j++)
            if (i!=q && j!=p)
            { 
                ADJOINT[m][n]=MATRIX[i][j];  // store in adjoint matrix from original apart from current row and column rest of the values
                if(n<(size-2))  // only two iterations
                    n++;
                else
                { 
                    n=0;  //reset 
                    m++;  // fill next row
                }
                COFACTOR[q][p]=sign*Determinant(ADJOINT,size-1);
            }
             sign=(-1)*sign;

    }
    Transpose(MATRIX,COFACTOR,size); // function call transpose
}
