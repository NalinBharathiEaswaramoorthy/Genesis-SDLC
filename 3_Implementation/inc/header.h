/**
 * @file header.h
 * @author Nalin, (nalin.easwaramoorthy@ltts.com,), Archana, (archana.arun@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __HEADER_H__
#define __HEADER_H__

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

/**
 * @brief return success or error
 * 
 */
typedef enum error_t {
    ERROR = -1,    
    SUCCESS = 0             
}error_t;

/**
 * @brief function to take user input for switch case
 * 
 * @return int 
 */
int readchoice();

/**
 * @brief Display output of matrix
 * 
 * @param size dimension of matrix
 */
void Print_matrix(float [][10], int size );

/**
 * @brief Obtain determinant of matrix
 * 
 * @param MATRIX 2d array 
 * @param size dimension of matrix
 * @return float value of determinant 
 */
float Determinant(float MATRIX[10][10],int size);
/**
 * @brief Obtain the function value of x
 * 
 * @return double f(x)
 */
double function(double *, int , double );
/**
 * @brief Obtain derivative function value
 * 
 * @return double df(x)
 */

double derivative_function(double *, int , double);
/**
 * @brief cofactor of matrix
 * 
 */
void Co_factor(float [][10],int);
/**
 * @brief transpose of matrix
 * 
 * @return error_t 
 */
error_t Transpose(float [][10],float [][10],int);

/**
 * @brief Addition operation is performed on two matrices
 * 
 * @param rows 
 * @param columns 
 * @param matrix_A 
 * @param matrix_B 
 * @return float  Sum of resultant matrix
 */
float matrix_addition(int rows,int columns,float matrix_A[][10],float matrix_B[][10]);

/**
 * @brief Subtraction operation is performed on two matrices
 * 
 * @param rows 
 * @param columns 
 * @param matrix_A 
 * @param matrix_B 
 * @return float Sum of resultant matrix
 */
float matrix_subtraction(int rows,int columns,float matrix_A[][10],float matrix_B[][10]);

/**
 * @brief Solution of a set of equations is found using Gauss Jordan Elimination method
 * 
 * @param matrix_A 
 * @param size 
 * @return float Sum of resultant column vector
 */
float Gauss_Jordan_Elimination(float matrix_A[][10],int size);

/**
 * @brief Eigen values and Eigen vectors of a matrix are found using the Power method
 * 
 * @param matrix_A 
 * @param Col_Vector 
 * @param order 
 * @return float Eigen Value
 */
float Power_Method(float matrix_A[][10],float Col_Vector[10],int order);

/**
 * @brief 
 * function for specifying f(x) for integral methods
 * @return float 
 */
float f(double);

/**
 * @brief 
 * function for calculating integral using trapezoidal method
 * 
 * @param n  specifies number of subdivisions
 * @param a  specifies the lower limit of integration
 * @param b  specifies the upper limit of integration
 * @return float value corresponding to the result of integration
 */
float trapezoidal(int, double, double);

/**
 * @brief 
 * function for calculating integral using simpson's 1/3 rule
 * 
 * @param n  specifies number of subdivisions
 * @param a  specifies the lower limit of integration
 * @param b  specifies the upper limit of integration 
 * @return float value corresponding to the result of integration
 */
float simpson(int, double, double);

/**
 * @brief 
 * function for checking whether a given matrix is symmetrical or not
 * 
 * @param matrix matrix that needs to be checked
 * @param row specifies number of rows of the matrix
 * @param column specifies number of columns of the matrix
 * @return true if symmetrical
 * @return false if asymmetrical
 */
bool sym(int[20][20], int, int);

/**
 * @brief Euler Method
 * 
 * @param x0_Euler Initial value of x
 * @param y0_Euler Initial value of y
 * @param h_Euler Step size
 * @param xn_Euler Last value of x
 * @return error_t 
 */
error_t Euler_Method(float x0_Euler, float y0_Euler, float h_Euler, float xn_Euler);

/**
 * @brief LU Decomposition Method
 * 
 * @param n_LU Size of Matrix
 * @param a_LU Matrix value's
 * @param b_LU Vector B value's
 * @return error_t 
 */
error_t LU_Decomposition(int n_LU,double a_LU[n_LU][n_LU], double b_LU[n_LU]);

/**
 * @brief Runge Kutta Method
 * 
 * @param x0_Rk Initial value of x
 * @param y0_RK Initial value of y
 * @param h_RK Step size
 * @param xn_RK Last value of x
 * @return error_t 
 */
error_t RK_Method(float x0_Rk, float y0_RK, float h_RK, float xn_RK);
/**
 * @brief Bisection Method
 * 
 */
int BISECTION();
/**
 * @brief Regula falsi method
 * 
 */
void REGULAFALSI();
/**
 * @brief Newton forward interpolation Technique
 * 
 */
void NEWTONFORWARD();
/**
 * @brief function for Bisection method
 * 
 * @param x variable of the function
 * @return double returns the defined function
 */
double function1(double x);
/**
 * @brief function for Regula Falsi Method 
 * 
 * @param x variable of the function
 * @return double returns the defined function
 */
double function2(double x);
/**
 * @brief Multiplication of Matrices Funtion
 * 
 * @param ar1 1st matrix
 * @param br1 2nd mtrix
 * @param row1 number of rows in ar1
 * @param col1 number of columns in ar1
 * @param col2 number of columns in br1
 */
error_t multiply(int a[20][20],int b[20][20],int row1,int col1,int col2);
/**
 * @brief to find the roots using bisection
 * @param xn midpoint of the limits
 * @param a 1st limit
 * @param b 2nd limit
 * @param iteration number of iterations
 
 */
error_t bisectionmethod(double *xn, double a, double b, int *iteration);
/**
 * @brief To find the roots using regula falsi
 * 
@param xn  value of root at each iterations
 * @param a upper limit of the root
 * @param b lower limit of the root
 * @param gx0 value of function at a
 * @param gx1 value of function at b
 * @param iteration number of iteration 
 */
error_t regulafalsi (double *xn, double a, double b, double gx0, double gx1, int *iteration);

double NRM_root(double *, double *, int , double);

#endif
