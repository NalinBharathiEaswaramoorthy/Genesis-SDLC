#include "header.h"
double NRM_root(double *f_x, double *df_x, int order, double X0)
{
    double decimal_approx=0.0001,X_n; 
    int i,j,iter=1,MAXITER=10; 
    printf("\nThe given function equation is  : ");
        for(i=0, j=order; i <= order; i++, j-- )
        {
            if(j==0)
            printf("%lf ",f_x[i]);
            else
            printf(" %lf x ^ %d + ",f_x[i], j);
        }
        printf("\n");
        for(i=0,j=order;i<order;i++,j--)
        {
            df_x[i] = j*f_x[i];
        }
        printf("\nThe given function derivative equation is : ");
        for(i=0, j=order-1; i <order; i++, j-- )
        {
            if(j==0)
            printf("%lf \n",df_x[i]);
            else
            printf("%lf x ^ %d + ",df_x[i], j);
        }
        printf("\n");
        X_n = X0 - (function(f_x, order, X0) / derivative_function(df_x, order, X0));
        printf("\n");
        iter = 1;
        while(fabs(X0-X_n) >= decimal_approx)
        {
            
            if(iter <= MAXITER)
            {
            X0 = X_n; // update value of x0 to previous iteration value
            X_n = X0 - (function(f_x, order, X0) / derivative_function(df_x, order, X0));
            for(i=0;i<15;i++)
            printf("---");
            printf("\n");
            printf("Value of X%d at iteration %d   : %lf\t\t\n",iter,iter,X_n);
            printf("\n");
            iter++;
            }
            else
            break;
        }
        return X_n;
}