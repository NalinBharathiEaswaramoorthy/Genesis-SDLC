/**
 * @file NRM_funtion.c
 * @author Archana Arun (archana.arun@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
/**
 * @brief Find function value of x
 * 
 * @param f_x polynomial equation
 * @param order to calculate power of 
 * @param X0 value of x
 * @return double f(x) value
 */
#include "header.h"
double function(double *f_x, int order, double X0)
{
    double result=0;
    int i,j;
    for(i=0, j=order; i<=order; i++, j--)
    {
        result +=  f_x[i] * pow( X0 , j); 
    }
    printf("Value of f(%lf)  : %lf\n",X0,result);
    return result;
}
