#include "header.h"

float function_Euler(float x,float y)
{
    float res;
    res=x+y;
    return res;
}
// Driver Program
error_t Euler_Method(float x0_Euler, float y0_Euler, float h_Euler, float xn_Euler)
{
    float x_Euler,y_Euler,k_Euler;
    if(xn_Euler < x0_Euler)
    {
        printf("Enter x0 value smaller than xn\n");
        return ERROR;
    }
    x_Euler=x0_Euler;
    y_Euler=y0_Euler;
    printf("\n  x\t  y\n");
    // Iterating till the point at which we
    // need approximation
    while(x_Euler<=xn_Euler)
    {
        k_Euler=h_Euler*function_Euler(x_Euler,y_Euler);
        y_Euler=y_Euler+k_Euler;
        x_Euler=x_Euler+h_Euler;
        printf("%0.3f\t%0.3f\n",x_Euler,y_Euler);
    }
    return SUCCESS;
}