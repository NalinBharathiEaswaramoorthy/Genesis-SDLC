#include <stdio.h>
#include <math.h>
#include "header.h"

float simpson(int n, double a, double b)
{
    if(n==0)
    {
        printf("Number of subdivisions can't be 0\n");
        return 0;
    }
    double h, result = 0;
    float x[n], fx[n];
    h = fabs(b-a)/n;

    for(int i = 0;i<=n;i++)
    {
        x[i] = a + i*h;
        fx[i] = f(x[i]);
    }
    for(int i = 0;i<=n;i++)
    {
        if(i == 0 || i == n)
        {
            result = result + fx[i];
        }
        else if(i%2!=0)
        {
            result = result + 4*fx[i];
        }
        else{
            result = result + 2*fx[i];
        }
    }
    result = (h/3)*result;
    return result;
}