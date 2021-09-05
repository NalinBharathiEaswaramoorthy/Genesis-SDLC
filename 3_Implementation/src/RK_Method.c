#include "header.h"
float function_RK(float x,float y);
error_t RK_Method(float x0_Rk, float y0_RK, float h_RK, float xn_RK)
{
    if(xn_RK < x0_Rk)
    {
        printf("Enter x0 value smaller than xn\n");
        return ERROR;
    }
    float m1, m2, m3, m4, m_RK, y_RK, x_RK;
    x_RK = x0_Rk;
    y_RK = y0_RK;
    printf("\n\nX\t\tY\n");
    while(x_RK < xn_RK)
    {
        m1=function_RK(x0_Rk, y0_RK);
        m2=function_RK((x0_Rk+h_RK/2.0),(y0_RK+m1*h_RK/2.0));
        m3=function_RK((x0_Rk+h_RK/2.0),(y0_RK+m2*h_RK/2.0));
        m4=function_RK((x0_Rk+h_RK),(y0_RK+m3*h_RK));
        m_RK=((m1+2*m2+2*m3+m4)/6);
        y_RK = y_RK + m_RK*h_RK;
        x_RK = x_RK + h_RK;
        printf("%f\t%f\n",x_RK,y_RK);
    }
    return SUCCESS;
}
float function_RK(float x,float y)
{
    float m;
    m=(x-y)/(x+y);
    return m;
}