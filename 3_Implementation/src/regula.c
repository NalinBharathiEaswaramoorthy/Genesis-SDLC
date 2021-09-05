/**
 * @file regula.c
 * @author your name (you@domain.com)
 * @brief Regula Falsi method
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
 * @param x variable x of the function
 * @return double return the function
 */
double function2(double x)
{
double m;
m=x*x*x+2*x*x-3*x+4;
return m;
}
/**
 * @brief 
 * 
 * @param xn  value of root at each iterations
 * @param a upper limit of the root
 * @param b lower limit of the root
 * @param gx0 value of function at a
 * @param gx1 value of function at a
 * @param iteration number of iteration
 */
error_t regulafalsi (double *xn, double a, double b, double gx0, double gx1, int *iteration)
{
    *xn = a - ((b - a) / (gx1 - gx0))*gx0;
    ++(*iteration);
    printf("ITERAION NUMBER %d value of x = %5.5f\n", *iteration, *xn);
   return SUCCESS;
}
/**
 * @brief To find the root
 * 
 */
void REGULAFALSI()
{
    int iteration = 0, maxit;
    double a,b,x2,x3,aer;
    printf("ENTER VALUE OF a\n");
    scanf("%lf ", &a);
    printf("ENTER VALUE OF b\n");
    scanf("%lf", &b);
    printf("ENTER THE ALLOWED ERROR\n");
    scanf(" %lf",  &aer);
     printf("ENTER THE MAXIMUM ITERATIONS\n");
     scanf("%d", &maxit);
    regulafalsi (&x2, a, b, function2(a), function2(b), &iteration);
    do
    {
        if (function2(a)*function2(x2) < 0)
            b=x2;
        else
            a=x2;
        regulafalsi (&x3, a, b, function2(a), function2(b), &iteration);
        if (fabs(x3-x2) < aer)
        {
            printf("AFTER PERFORMING %d ITERATIONS, root = %5.4f\n", iteration, b);
           
        }
        x2=x3;
    }
    while (iteration<maxit);
   
    }
