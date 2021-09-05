/**
 * @file bisection.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "header.h"

/**
 * @brief 
 * 
 * @param x function variable
 * @return double 
 */
double function1(double x)
{
double m;
m=x*x*x-x-1;
return m;
}
/**
 * @brief function to find root after each iteration
 * 
 * @param xn midpoint of the limits
 * @param a 1st limit
 * @param b 2nd limit
 * @param iteration number of iterations
 */
error_t bisectionmethod(double *xn, double a, double b, int *iteration)

{
    *xn=(a+b)/2;
    ++(*iteration);
    printf("AT ITERAION NUMBER %d value of x = %5.5f\n", *iteration, *xn);
   return SUCCESS;
}
/**
 * @brief function to take inputs and give the results
 * 
 */
int BISECTION()
{
     double x, a, b, aer, c;
    int iteration = 0, max;
    printf("\nENTER THE intervals a & b : \n");
    scanf("%lf %lf", &a, &b);
    printf("\nEnter the values of error allowed and maximum iterations:\n");
    scanf("%lf %d",&aer, &max);
    bisectionmethod (&x, a, b, &iteration);
   
    do
    {
        if (function1(a)*function1(x) < 0)
            b=x;
        else
            a=x;
        bisectionmethod (&c, a, b, &iteration); 
        if (fabs(c-x) < aer)
        {
            printf("AFTER PERFORMING %d ITERATIONS, root = %5.4f\n", iteration, c);
              return 0;
        }
        x=c;
    }
     while (iteration < max);
     printf(" The iterations are not sufficient for the answer to converge");
     return 1;
    }
