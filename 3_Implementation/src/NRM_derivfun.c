/**
 * @file NRM_derivfun.c
 * @author Archana Arun (archana.arun@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
/**
 * @brief find for derivative function of x
 * 
 * @param df_x coefficients of derivative function stored here
 * @param order to calculate power
 * @param X0 value of x
 * @return double value of df(x)
 */
#include "header.h"
double derivative_function(double *df_x, int order, double X0)
{
    double result=0;
    int i,j;
    for(i=0, j=order-1; i<order; i++, j--)
    {
        if(j==0)
        result += df_x[i];  // for last term only constant
        else
        {
        result+= df_x[i] * pow(X0, j);
        }
    }
    printf("Value of df(%lf) : %lf\n",X0,result);
    return result;
}
