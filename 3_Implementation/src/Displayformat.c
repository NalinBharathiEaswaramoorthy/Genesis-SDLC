/**
 * @file Displayformat.c
 * @author Archana Arun (archana.arun@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "header.h"
/**
 * @brief Display the matrix elements 
 * 
 * @param MATRIX 2D matrix array
 * @param size Dimension of matrix
 */
void Print_matrix(float MATRIX[][10], int size)
{
    int i,j, row, column;
    for(i=0;i<15;i++)
    printf("---");
    printf("\n");
    for(row = 0; row < size; row++)
    {
        for(column = 0; column < size; column++)
        {
            printf("\t\t%0.2f\t",MATRIX[row][column]);
        }
        printf("\n");
    }
    for(i=0;i<15;i++)
    printf("---");
    printf("\n");
}
