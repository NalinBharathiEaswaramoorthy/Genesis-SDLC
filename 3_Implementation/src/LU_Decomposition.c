#include "header.h"
//LU decomposition method to solve linear equations
int size_LU;
double sumU(double L[size_LU][size_LU] ,double U[size_LU][size_LU], int i, int j )
{
    double sU = 0.0;
    for (int k = 1; k <= i-1 ; k++)
    {
        sU += L[i-1][k-1] * U[k-1][j-1];
    }
    return sU;
}
//Calculating sum 1 value
double sumL(double L[size_LU][size_LU] ,double U[size_LU][size_LU], int i, int j )
{
    double sL = 0.0;
    for (int k = 0; k <= j-1; k++)
    {
        sL += L[i-1][k-1] * U[k-1][j-1];
    }
    return sL;
}
//Calculating sum 2 value
double sumY(double L[size_LU][size_LU] ,double y[size_LU],int i)
{
    double sY=0.0;
    for (int k = 1; k <= i - 1; k++)
    {
        sY += L[i-1][k-1] * y[k-1];
    }
    return sY;
}
//Calculating sum 3 value
double sumX(double U[size_LU][size_LU] ,double x[size_LU],int i ,int m)
{
    double sX = 0.0;
    for (int k = i+1; k <= m; k++)
    {
        sX += U[i-1][k-1] * x[k-1];
    }
    return sX;
}
//Calculating sum 4 value
error_t LU_Decomposition(int n_LU,double a_LU[n_LU][n_LU], double b_LU[n_LU])
{
    size_LU=n_LU;
    /*
    printf("Enter size of matrix as four\n");
    scanf("%d",&size);
    */
    if(size_LU == 0)
    {
        printf("Size of Matrix cannot be zero\n");
        return ERROR;
    }
    if(size_LU < 0)
    {
        printf("Size of Matrix cannot be a negative value\n");
        return ERROR;
    }
    if(size_LU == 1)
    {
        printf("Size of Matrix cannot be one\n");
        return ERROR;
    }
    double L[size_LU][size_LU];
    double U[size_LU][size_LU];
    //Initialization part
    for(int i=0;i<size_LU;i++)
    {
        for(int j=0;j<size_LU;j++)
        {
            L[i][j]=0;
            U[i][j]=0;
        }
    }
    /*
    printf("Enter all four values of vector B\n");
    for(int i=0;i<4;i++)
    {
        scanf("%lf", &b[i]);
    }
    */
    //Output [Ab]
    printf("[A]:\n");
    for (int i = 1; i <= n_LU; i++)
    {
        for (int j = 1; j <= n_LU; j++)
        {
            printf("%f\t", a_LU[i-1][j-1]);
        }
        printf("\n");
    }
    //Calculate L, U
    for (int i = 1; i <= n_LU; i++)
    {
        L[i-1][i-1] = 1;//The diagonal element is 1
        for (int j = i; j <= n_LU; j++)
        {
            //Since the array subscript starts from 0, i-1, j-1
            U[i-1][j-1] = a_LU[i-1][j-1] - sumU(L,U,i,j);

            if(j+1 <= n_LU)
            {
                //i becomes j+1, j becomes i
                L[j][i-1] = (a_LU[j][i-1] - sumL(L,U,j+1,i))/U[i-1][i-1]; 
            }
        }
    }
    //Output U
    printf("U:\n");
    for (int i = 1; i <= n_LU; i++)
    {
        for (int j = 1; j <= n_LU; j++)
        {
            printf("%f\t",U[i-1][j-1]);
        }
        printf("\n");
    }
    //Output L
    printf("L:\n");
    for (int i = 1; i <= n_LU; i++)
    {
        for (int j = 1; j <= n_LU; j++)
        {
            printf("%f\t",L[i-1][j-1]);
        }
        printf("\n");
    }
    //Find y from Ly=b
    double y[size_LU];
    y[0] = b_LU[0];//y(1) = b(1);

    for (int i = 2; i <= n_LU; i++)
    {
        y[i-1] = b_LU[i-1] - sumY(L,y,i);
    }
    //Find x from Ux=y
    double x[size_LU];
    for (int i = n_LU; i >= 1; i--)
    {
        x[i-1] =( y[i-1] - sumX(U,x,i,n_LU))/ U[i-1][i-1];
    }
    //Output y
    printf("y:\n");
    for (int i = 0; i < n_LU; i++)
    {
        printf("%f\n",y[i]);
    }
    printf("\n");
    //Output x
    printf("x:\n");
    for (int i = 0; i < n_LU; i++)
    {
        printf("%f\n",x[i]);
    }
    printf("\n");
    return SUCCESS;
}
