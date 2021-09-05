/**
 * @file newtonfor.c
 * @author your name (you@domain.com)
 * @brief interpolation technique
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "header.h"
/**
 * @brief Function to calculate interpolation
 * 
 */
void NEWTONFORWARD()
{
    float a1[30], a2[30], difr[30][30], num=1.0, den=1.0,x,p,h,ycal;
    int n,i,j,k,ord;
printf("ENTER THE ORDER:");
scanf("%d",&ord);
printf("\nENTER THE NUMBER OF DATA:\n");
scanf("%d",&n);
printf("\nENTER THE VALUE OF x:\n");
for (i=0;i<=n;i++)
        scanf("%f",&a1[i]);
 printf("\nENTER THE VALUE OF CORRESPONDING y:\n");
for (i=0;i<=n;i++)
        scanf("%f",&a2[i]);
    printf("\nENTER x FOR WHICH YOU WANT THE VALUE OF THE INTEGRAL: \n");
    scanf("%f",&x);
    h=a1[1]-a1[0];
    // the difference table
    // first order of differences
    for (i=0;i<=n-1;i++)
        difr[i][1] = a2[i+1]-a2[i];
 
    // second and higher order differences
    for (j=2;j<=ord;j++)
        for(i=0;i<=n-j;i++)
        difr[i][j] = difr[i+1][j-1] - difr[i][j-1];
 
    
    i=0;
    while (!(a1[i]>x))
    i++;
 
    
    i--;
    p = (x-a1[i])/h;
    ycal = a2[i];
 
    // interpolation
    for (k=1;k<=ord;k++)
    {
        num *=p-k+1;
        den *=k;
        ycal +=(num/den)*difr[i][k];
    }
    printf("\nWhen x = %6.1f, corresponding y = %6.2f\n",x,ycal);
}