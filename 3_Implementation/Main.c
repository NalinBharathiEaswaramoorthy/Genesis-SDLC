/**
 * @file Main.c
 * @authors Archana, Rohan , Nalin, Manasa, Govind
 * @brief 
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "header.h"
/**
 * @brief Main switch case menu 
 * 
 * @return int choice
 */
int main()
{
    float deter_value, MATRIX[10][10];
    float x0_RK, xn_RK, y0_RK, h_RK;
    int order,i,j,k,iter=1,MAXITER = 10;
    int size, row, column, choice;
    double X0,decimal_approx,*f_x=NULL,*df_x=NULL,X_n,a,b,NRM_value;
    int n, matrix2[20][20];
    int row_count,col_count;
    float matrix_A[10][10],matrix_B[10][10],Col_Vector[10],Check_sum=0,Eigen_val;
    double result;
    bool res;
    float x0_Euler, xn_Euler, y0_Euler, h_Euler;
    int row1, col1, row2, col2, sum = 0;
    int ar1[20][20], br1[20][20], multi[20][20];//matrix
    while(1)
    {
    printf("\n");
    for(i=0;i<15;i++)
    printf("-----");
    printf("\n\t\t\t\tMenu\n");
    for(i=0;i<15;i++)
    printf("-----");
    printf("\n");
    printf("1.  Find determinant of matrix \n");
    printf("2.  Matrix Addition\n");
    printf("3.  Matrix Subtraction\n");
    printf("4.  Obtain the Inverse of matrix using adjoint, determinant and cofactors\n");
    printf("5.  Obain root of a polynomial using Newton-Raphson method\n");
    printf("6.  Solution of equations by Gauss Jordan Method\n");
    printf("7.  Find integral using Trapezoidal Method\n");
    printf("8.  Find integral using Simpson's 1/3 Rule\n");
    printf("9.  Check whether the given matrix is symmetrical or not\n");
    printf("10. Find Eigen Value and Vector by Power Method\n");
    printf("11. Solving ordinary differential equations by Euler Method\n");
    printf("12. Solving linear equations by LU Decomposition Method\n");
    printf("13. Solving ordinary differential equations by Runge Kutta Method\n");
    printf("14. Solving linear equation by Bisection method\n");
    printf("15. Solving linear equation by Regula Falsi\n");
    printf("16. NEWTON FORWARD INTERPOLATION\n");
    printf("17. MATRIX MULTIPLICATION\n");
    printf("18. Exit\n");
    printf("Enter your choice : ");
    choice = readchoice();
    switch (choice)
    {
    case 1:
        printf("Enter the dimension of the matrix : ");
        scanf("%d",&size);
        for(row = 0; row < size; row++)
        {
            printf("\nEnter the %d elements of the %d row : ",size,row+1);
            for(column = 0; column < size; column++)
            {
                scanf("%f",&MATRIX[row][column]);
            }
        } 
        for(i=0;i<15;i++)
        printf("-----");
        printf("\n");
        printf("The entered matrix is : \n");
        for(row = 0; row < size; row++)
        {
            for(column = 0; column < size; column++)
            {
                printf("\t\t%0.2f\t",MATRIX[row][column]);
            }
            printf("\n");
        }
        for(i=0;i<15;i++)
        printf("-----");
        printf("\n"); 
        deter_value = Determinant(MATRIX, size);
        printf("The value of the determinant is : %0.2f\n",deter_value);
        for(i=0;i<15;i++)
        printf("---");
        printf("\n");
        break;
    case 2:
            printf("Enter the number of rows and columns of the matrices(must be less than 10)\n");
            scanf("%d %d",&row,&column);
            printf("Enter elements of first matrix row wise\n");
            for(row_count=0;row_count<row;row_count++)
                for(col_count=0;col_count<column;col_count++)
                    scanf("%f",&matrix_A[row_count][col_count]);
            printf("Enter elements of second matrix row wise\n");
            for(row_count=0;row_count<row;row_count++)
                for(col_count=0;col_count<column;col_count++)
                    scanf("%f",&matrix_B[row_count][col_count]);
            Check_sum = matrix_addition(row,column,matrix_A,matrix_B);
            break;
    case 3:
            printf("Enter the number of rows and columns of the matrices(must be less than 10)\n");
            scanf("%d %d",&row,&column);
            printf("Enter elements of first matrix row wise\n");
            for(row_count=0;row_count<row;row_count++)
                for(col_count=0;col_count<column;col_count++)
                    scanf("%f",&matrix_A[row_count][col_count]);
            printf("Enter elements of second matrix row wise\n");
            for(row_count=0;row_count<row;row_count++)
                for(col_count=0;col_count<column;col_count++)
                    scanf("%f",&matrix_B[row_count][col_count]);
            Check_sum = matrix_subtraction(row,column,matrix_A,matrix_B);
            break;
    case 4:
        printf("Enter the dimension of the matrix : ");
        scanf("%d",&size);
        for(row = 0; row < size; row++)
        {
            printf("\nEnter the %d elements of the %d row : ",size,row+1);
            for(column = 0; column < size; column++)
            {
                scanf("%f",&MATRIX[row][column]);
            }
        } 
        deter_value = Determinant(MATRIX, size );
        printf("The value of the determinant is : %f\n",deter_value);
        for(i=0;i<15;i++)
        printf("---");
        printf("\n");
        if(deter_value==0)
        printf("The determinant value is zero. Inverse of Matrix does not exist\n");
        else

        Co_factor(MATRIX,size);
        break;
    case 5:
        printf("Enter the order of the equation  : ");
        scanf("%d",&order);
        f_x= (double *) malloc (order+2 * sizeof(double)); 
        df_x = (double *) malloc(order+1 * sizeof(double));
        for(i=0, j=order; i <= order; i++, j-- )
        {
        printf("Enter the co-efficient of x ^ %d  : ",j);
            scanf("%lf",&f_x[i]);
        }
        printf("Initial value of x               : ");
        scanf("%lf",&X0);     
        NRM_value = NRM_root(f_x, df_x, order, X0);    
        for(i=0;i<15;i++)
        printf("----");
        printf("\n");
        printf("The root of the equation near %0.2f is   : %0.6f\n", X0, NRM_value);
        for(i=0;i<15;i++)
        printf("----");
        printf("\n");
        free(f_x);
        free(df_x);
        break;
    case 6:
           printf("Enter the number of equations\n");
           scanf("%d",&order);
           printf("\nEnter the elements of augmented matrix row-wise:\n");
           for(row_count=1;row_count<=order;row_count++)
            {
                for(col_count=1;col_count<=(order+1);col_count++)
                {
                    printf("A[%d][%d]=",row_count,col_count);
                    scanf("%f",&matrix_A[row_count][col_count]);
                }
            }
            Check_sum = Gauss_Jordan_Elimination(matrix_A,order);
            break;         
    case 7:
        // User inputs for trapezoidal rule
        printf("\n NOTE: The current function is f(x) = x. To change that, edit function.c.");
        printf("\n Enter the number of intervals: ");
        scanf("%d", &n);
        printf("\n Enter the initial limit: ");
        scanf("%lf", &a);
        printf("\n Enter the final limit: ");
        scanf("%lf", &b);
        result = trapezoidal(n,a,b);
        if(result)
            printf("\nResult using Trapezoidal method = %0.2lf\n", result);
        break;
    case 8:
        // User inputs for Simpson's rule
        printf("\n NOTE: The current function is f(x) = x. To change that, edit function.c.");
        printf("\n Enter the number of intervals: ");
        scanf("%d", &n);
        printf("\n Enter the initial limit: ");
        scanf("%lf", &a);
        printf("\n Enter the final limit: ");
        scanf("%lf", &b);
        result = simpson(n,a,b);
        if(result)
            printf("\nResult using Simpson's 1/3 method = %0.2lf\n", result);
        break;
    case 9:
        //user inputs for dimension of matrix
        printf("\nEnter the number of rows of the matrix (Between 1-20): ");
        scanf("%d", &row);
        printf("\nEnter the number of columns of the matrix (Between 1-20): ");
        scanf("%d", &column);
        printf("\nEnter Elements: \n");
        for(i=0;i<row;i++)
            for(j=0;j<column;j++)
                scanf("%d", &matrix2[i][j]);
        res = sym(matrix2, row, column);
        if(res==1)
            printf("\nThe given matrix is symmetric\n");
        else
            printf("\nThe given matrix is not symmetric\n");
        break;
               break;
    case 10:
            printf("Enter the order of the matrix\n");
            scanf("%d",&order);
            printf("Enter matrix elements row wise\n");
            for(row_count=1;row_count<=order;row_count++)
            {
                for(col_count=1;col_count<=order;col_count++)
                {
                    printf("A[%d][%d]=",row_count,col_count);
                    scanf("%f",&matrix_A[row_count][col_count]);
                }
            }
            printf("Enter column vector\n");
            for(row_count=1;row_count<=order;row_count++)
            {
                printf("X[%d]=",row_count);
                scanf("%f",&Col_Vector[row_count]);
            }
            Eigen_val = Power_Method(matrix_A,Col_Vector,order);
            break;
    case 11:
            printf("Enter initial value of x i.e. x0\n");
            scanf("%f", &x0_Euler);
            printf("Enter intial value of y i.e. y0\n");
            scanf("%f", &y0_Euler);
            printf("Enter value of step size i.e. h\n");
            scanf("%f", &h_Euler);
            printf("Enter last value of x i.e. xn\n");
            scanf("%f", &xn_Euler);
            Euler_Method(x0_Euler, y0_Euler, h_Euler, xn_Euler);
            break;
    case 12:
        {
            int n_LU;
            printf("Enter size of matrix\n");
            scanf("%d",&n_LU);
            double a_LU[n_LU][n_LU];
            //Store the coefficients in a two-dimensional array
            printf("Enter values of matrix\n");
            for(int row_LU=0;row_LU<n_LU;row_LU++)
            {
                for(int col_LU=0;col_LU<n_LU;col_LU++)
                {
                    scanf("%lf",&a_LU[row_LU][col_LU]);
                }
            }
            double b_LU[n_LU];
            printf("Enter all values of vector B\n");
            for(int i_LU=0;i_LU<n_LU;i_LU++)
            {
                scanf("%lf", &b_LU[i_LU]);
            }
            LU_Decomposition(n_LU, a_LU, b_LU);
            break;
        }
    case 13:
            printf("Enter initial value of x i.e. x0\n");
            scanf("%f", &x0_RK);
            printf("Enter intial value of y i.e. y0\n");
            scanf("%f", &y0_RK);
            printf("Enter value of step size i.e. h\n");
            scanf("%f", &h_RK);
            printf("Enter last value of x i.e. xn\n");
            scanf("%f", &xn_RK);
            RK_Method(x0_RK, y0_RK, h_RK, xn_RK);
            break;
            
     case 14:
             BISECTION();
                break;
     case 15:
            
            REGULAFALSI();
            break;
     case 16:
                NEWTONFORWARD();
                break;
     case 17:
             printf("ENTER THE N0. OF ROWS for ar1[][]:");
             scanf("%d", &row1);
            printf("ENTER THE N0. OF COLUMNS FOR ar1[][]:");
            scanf("%d", &col1);
            printf("ENTER THE ELEMENTS OF MATRIX ar1[][]:\n");
            for (i = 0; i < row1; i++)
                for (j = 0; j < col1; j++)
                    scanf("%d", &ar1[i][j]);
            printf("ENTER THE N0. OF ROWS for br1[][]:");
            scanf("%d", &row2);
            printf("ENTER THE N0. OF columns FOR br1[][]:");
            scanf("%d", &col2);
            if (col1 != row2)
            {
            printf("MULTIPLYING IS NOT POSSIBLE\n");
            break;
            }
            else
            {
             printf("ENTER THE ELEMENTS OF MATRIX br1[][]:\n");
            for (i = 0; i < row2; i++)
                for (j = 0; j < col2; j++)
                scanf("%d", &br1[i][j]);
            }
            multiply(ar1,br1,row1,col1,col2);
            break;
    case 18 :
            printf("EXITing ...");

        exit(0);
        break;         
    default:
        printf("Invalid choice number\n");
        break;
    }
    }
    return 0;
}


