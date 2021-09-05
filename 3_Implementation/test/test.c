
#include "unity.h"
#include "unity_internals.h"
#include "header.h"

void setUp()
{
    printf("STARTING TEST\n");
}

void tearDown()
{
        printf("ENDING TEST\n");
}

void test_NRMfunc_cube()
{
    double *f_x= (double *) malloc (4 * sizeof(double)); 
    for(int i=0;i<4;i++)
    f_x[i] = 2;
    TEST_ASSERT_EQUAL_FLOAT(8,function(f_x, 3 , 1));
    free(f_x);
}
void test_NRMfunc_quad()
{
    double *f_x= (double *) malloc (4 * sizeof(double)); 
    for(int i=0;i<3;i++)
    f_x[i] = 2;
    TEST_ASSERT_EQUAL_FLOAT(6,function(f_x, 2 , 1));
    free(f_x);
}
void test_NRMderfunc()
{
    double *df_x= (double *) malloc (8 * sizeof(double)); 
    for(int i=0;i<4;i++)
    df_x[i] = 6 - 2*i;
    TEST_ASSERT_EQUAL_FLOAT(12,derivative_function(df_x, 3 , 1));
    free(df_x);
}
void test_deter()
{
    float A[10][10];
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    A[i][j] = i+j;
    TEST_ASSERT_EQUAL_FLOAT(-1,Determinant(A, 2));

}
void test_deter_zero()
{
    float A[10][10];
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    A[i][j] = i;
    TEST_ASSERT_EQUAL_FLOAT(0,Determinant(A, 2));

}
void test_transpose()
{
    float A[10][10];
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    A[i][j] = i+2 + j*2;
    float B[10][10];
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    B[i][j] = i*2 +1;
    TEST_ASSERT_EQUAL_FLOAT(SUCCESS,Transpose(A, B, 2));

}

void test_trapezoidal_normal(void)
{
    TEST_ASSERT_EQUAL_FLOAT(8.00,trapezoidal(4,0,4));
}

void test_trapezoidal_zero_n(void)
{ 
    TEST_ASSERT_EQUAL_FLOAT(0.00,trapezoidal(0,0,4));
}

void test_simpson_normal(void)
{
    TEST_ASSERT_EQUAL_FLOAT(8.00,simpson(4,0,4));
}

void test_simpson_zero_n(void)
{ 
    TEST_ASSERT_EQUAL_FLOAT(0.00,simpson(0,0,4));
}

void test_symmetric_matrix(void)
{
    int test_mat[20][20] = { {1,1,2}, 
                             {1,2,0},
                             {2,0,5} };
    TEST_ASSERT_EQUAL(1, sym(test_mat, 3, 3));
}

void test_symmetric_matrix_wrong(void)
{
    int test_mat[20][20] = { {1,2,3}, 
                             {4,5,6},
                             {7,8,9} };
    TEST_ASSERT_EQUAL(0, sym(test_mat, 3, 3));
}

void test_euler(void)
{
    TEST_ASSERT_EQUAL(SUCCESS, Euler_Method(0,1,0.1,1));
    TEST_ASSERT_EQUAL(ERROR, Euler_Method(2,1,0.1,1));
    TEST_ASSERT_EQUAL(SUCCESS, Euler_Method(1,2,0.2,2));
    TEST_ASSERT_EQUAL(ERROR, Euler_Method(3,1,0.1,1));
}
void test_LU(void)
{
    double a[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,4},{1,-1,-2,1}};
    double b[4] = {8,8,12,19};
    TEST_ASSERT_EQUAL(SUCCESS, LU_Decomposition(4,a,b));
    TEST_ASSERT_EQUAL(ERROR, LU_Decomposition(0,a,b));
    TEST_ASSERT_EQUAL(ERROR, LU_Decomposition(-1,a,b));
    TEST_ASSERT_EQUAL(ERROR, LU_Decomposition(1,a,b));
    double a2[4][4]={{-1,2,-3,4},{2,4,-6,3},{-1,0,5,4},{-1,1,2,-1}};
    double b2[4]={2,3,-1,2};
    TEST_ASSERT_EQUAL(SUCCESS, LU_Decomposition(4,a2,b2));
}
void test_RK(void)
{
    TEST_ASSERT_EQUAL(SUCCESS, RK_Method(0, 2, 0.5, 2));
    TEST_ASSERT_EQUAL(ERROR, RK_Method(2, 2, 0.5, 1));
    TEST_ASSERT_EQUAL(SUCCESS, RK_Method(1, 2, 0.6, 3));
    TEST_ASSERT_EQUAL(ERROR, RK_Method(3, 2, 0.5, 1));
}
void test_multi(void) 
{
  int matr1[20][20], matr2[20][20];
  matr1[0][0] = 2;
  matr1[0][1] = 2;
  matr1[1][0] = 2;
  matr1[1][1] = 2;

  matr2[0][0] = 2;
  matr2[0][1] = 2;
  matr2[1][0] = 2;
  matr2[1][1] = 2;

  TEST_ASSERT_EQUAL(SUCCESS, multiply(matr1, matr2, 2,2,2));
}
void test_regulafalsi(void)
{
  double x1=5;
  int x2=4;
  double *ptr1=&x1;
  int *ptr2=&x2;
  TEST_ASSERT_EQUAL(SUCCESS,regulafalsi(ptr1,-4,-3,-16,4,ptr2));
    
}
void test_bisection(void)
{
    double x1=2.5;
  int x2=20;
  double *ptr1=&x1;
  int *ptr2=&x2;
TEST_ASSERT_EQUAL(SUCCESS,bisectionmethod(ptr1,1,2,ptr2));
x1=2.5;x2=8;
TEST_ASSERT_EQUAL(SUCCESS,bisectionmethod(ptr1,1,2,ptr2));
}

void test_matrix_add(void) 
{
    int i,j;
    float testA[10][10]={{1}};
    float testB[10][10]={{2}};
    TEST_ASSERT_EQUAL_FLOAT(3.00,matrix_addition(1,1,testA,testB));
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            testA[i][j]=3;
            testB[i][j]=5;
        }
    }
    TEST_ASSERT_EQUAL_FLOAT(32.00,matrix_addition(2,2,testA,testB));
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            testA[i][j]=6;
            testB[i][j]=3;
        }
    }
    TEST_ASSERT_EQUAL_FLOAT(54.00,matrix_addition(3,2,testA,testB));
}

void test_matrix_subt(void) 
{
    int i,j;
    float testA[10][10]={{2}};
    float testB[10][10]={{1}};
    TEST_ASSERT_EQUAL_FLOAT(1.00,matrix_subtraction(1,1,testA,testB));
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            testA[i][j]=3;
            testB[i][j]=5;
        }
    }
    TEST_ASSERT_EQUAL_FLOAT(-8.00,matrix_subtraction(2,2,testA,testB));
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            testA[i][j]=6;
            testB[i][j]=3;
        }
    }
    TEST_ASSERT_EQUAL_FLOAT(18.00,matrix_subtraction(3,2,testA,testB));

}

void test_gauss_jordan(void) 
{
    float test[10][10]={{0,0,0,0},{0,1,2,6,22},{0,3,4,1,26},{0,6,-1,-1,19}};
    TEST_ASSERT_EQUAL_FLOAT(9.00,Gauss_Jordan_Elimination(test,3));
    float test2[10][10]={{0,0,0},{0,5,10,5},{0,10,15,10}};
    TEST_ASSERT_EQUAL_FLOAT(1.00,Gauss_Jordan_Elimination(test2,2));
    float test3[10][10]={{0,0,0,0},{0,2,1,-3,-10},{0,0,-2,1,-2},{0,0,0,1,6}};
    TEST_ASSERT_EQUAL_FLOAT(12.00,Gauss_Jordan_Elimination(test3,3));
}

void test_power_method(void) 
{
    float test[10][10]={{0,0,0,0},{0,2,-1,0},{0,-1,2,-1},{0,0,-1,2}};
    float c_vector[4]={0,1,0,0};
    TEST_ASSERT_EQUAL_FLOAT(3.414214,Power_Method(test,c_vector,3));
    float test1[10][10]={{0,0,0},{0,2,2},{0,1,3}};
    TEST_ASSERT_EQUAL_FLOAT(3.999032,Power_Method(test1,c_vector,2));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_NRMfunc_cube);
    RUN_TEST(test_NRMderfunc);
    RUN_TEST(test_deter);
    RUN_TEST(test_NRMfunc_quad);
    RUN_TEST(test_deter_zero);
    RUN_TEST(test_transpose);
    RUN_TEST(test_trapezoidal_normal);
    RUN_TEST(test_trapezoidal_zero_n);
    RUN_TEST(test_simpson_normal);
    RUN_TEST(test_simpson_zero_n);
    RUN_TEST(test_symmetric_matrix);
    RUN_TEST(test_symmetric_matrix_wrong);
    RUN_TEST(test_euler);
    RUN_TEST(test_LU);
    RUN_TEST(test_RK);
    RUN_TEST(test_multi);
    RUN_TEST(test_matrix_add);
    RUN_TEST(test_matrix_subt);
    RUN_TEST(test_gauss_jordan);
    RUN_TEST(test_power_method);
    RUN_TEST(test_regulafalsi);
    RUN_TEST(test_bisection);
    return UNITY_END();
}
