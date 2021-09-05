#include "header.h"

float Power_Method(float matrix_A[][10],float Col_Vector[10],int order)
{
    float Eigen_Vector[10],Evector[10],Eigen_Value=0,Evalue=0;
    int row_count,col_count;
    do
    {
        for(row_count=1;row_count<=order;row_count++)
        {
            Eigen_Vector[row_count]=0;
            for(col_count=1;col_count<=order;col_count++)
            {
                Eigen_Vector[row_count]=Eigen_Vector[row_count]+matrix_A[row_count][col_count]*Col_Vector[col_count];
            }
        }
        Eigen_Value=fabs(Eigen_Vector[1]);
        for(row_count=2;row_count<=order;row_count++)
        {
            if((fabs(Eigen_Vector[row_count]))>Eigen_Value)
            {
                Eigen_Value=fabs(Eigen_Vector[row_count]);
            }
        }
        for(row_count=1;row_count<=order;row_count++)
        {
            Eigen_Vector[row_count]=Eigen_Vector[row_count]/Eigen_Value;
        }
        for(row_count=1;row_count<=order;row_count++)
        {
            Evector[row_count]=0;
            Evector[row_count]=fabs((fabs(Eigen_Vector[row_count]))-(fabs(Col_Vector[row_count])));
        }
        Evalue=Evector[1];
        for(row_count=2;row_count<=order;row_count++)
        {
            if(Evector[row_count]>Evalue)
            {
                Evalue=Evector[row_count];
            }
        }
        for(row_count=1;row_count<=order;row_count++)
        {
            Col_Vector[row_count]=Eigen_Vector[row_count];
        }
    }while(Evalue>0.001);
    printf("The Eigen Value is %.2f\n",Eigen_Value);
    printf("The Eigen Vector is: \n");
    for(row_count=1;row_count<=order;row_count++)
    {
        printf("%.2f\t",Eigen_Vector[row_count]);
    }
return Eigen_Value;
}