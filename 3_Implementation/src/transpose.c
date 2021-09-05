#include "header.h"
/**
 * @brief Obtain the transpose of the matrix
 * 
 * @param MATRIX 2D array 
 * @param COFACTOR Cofactor to calculate adjoint
 * @param size dimension of the matrix
 */
error_t Transpose(float MATRIX[10][10], float COFACTOR[][10], int size)
{
    int i,j;
    float ADJOINT[10][10], INVERSE[10][10], deter_value;
    printf("The cofactor of matrix is:\n");
    Print_matrix(COFACTOR,size);  
    for(i=0;i<size;i++)     // Fill adjoint matrix from cofactor
        for(j=0;j<size;j++)
        ADJOINT[i][j]=COFACTOR[j][i];
    deter_value = Determinant(MATRIX, size); // Obtain determinant value
    printf("The adjoint matrix is:\n");
    Print_matrix(ADJOINT, size);
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
        INVERSE[i][j]=ADJOINT[i][j]/deter_value;  // formula Inverse = adjoint * 1/detrminant value
    printf("The inverse of the matrix is:\n");
    Print_matrix(INVERSE,size); 
    return SUCCESS;   
}
