#include "header.h"
/**
 * @brief Obtain determinant of matrix
 * 
 * @param MATRIX 2d array 
 * @param size dimension of matrix
 * @return float value of determinant 
 */
float Determinant(float MATRIX[10][10],int size)
{
        float det_value=0,COMATRIX[10][10];
        int mi,mj,cm,cn,col,sign=1;
        if(size==1)
            return (MATRIX[0][0]);
        for(col=0;col<size;col++)  // upto number of columns present for the first row 
        {
            cm=0; cn=0;            // cm and cn for iteration of cross multiplying the 2x2 matrix 
            for(mi=0;mi<size;mi++)   // to store values to be multiplied into comatrix
                for(mj=0;mj<size;mj++)
                {
                    if (mi!=0 && mj!=col)   // check the first row and the current j column ommited
                    {

                        COMATRIX[cm][cn]=MATRIX[mi][mj]; //copy to comatrix values to be found for cross multiplication
                        cn++;
                        if (cn == size-1)  // upto 2x2 matrix reset 
                        {
                            cn=0; cm++;
                        }
                    }
                }
            det_value=det_value+sign*(MATRIX[0][col]*Determinant(COMATRIX,size-1)); //update and recursively call determinant function
            sign = -1 * sign; //alternate signs
        }
        return(det_value); // final out of loop determinant value
}