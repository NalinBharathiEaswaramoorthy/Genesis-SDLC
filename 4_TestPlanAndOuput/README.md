# TEST PLAN:

## HIGH LEVEL TEST PLAN
| **High Level Test ID** |           **Description**           | **Exp I/P** | **Exp O/P** | **Status** |
|------------------------|-------------------------------------|-------------|--------------|-----------|
| H01                    | Matrix Operations Tests             |Matrices and their dimensions|Output corresponding to operation|Passed|
| H02                    | Numerical Methods Tests             |Coefficients of equations and required parameters|Output corresponding to Numerical method|Passed|

## LOW LEVEL TEST PLAN

| **High Level Test ID** |**Low Level Test ID** |           **Description**           | **Exp I/P** | **Exp O/P** | **Actual O/P** | **Status** |**Type Of Test**  |    
|-------------|-------------|-----------------------------------------------------|------------|-------------|----------------|----------------|------------------|
|H02|LL01| Cube Function equation calculate for x|equation with order 3 and x value 1|8|8|Passed|Scenario|
|H02|LL02| Derivative function for cubic function equation calculate for x|derivative function for equation with order 3 and x value|12|12|Passed|Scenario|
|H01|LL03| Determinant zero condition for inverse|A,2|0|0|Passed|Boundary|
|H01|LL06| Sum check of the resultant sum matrix|Two matrices and Dimensions|32|32|Passed|Functional|
|H01|LL07| Sum check of the resultant difference matrix|Two matrices and Dimensions|18|18|Passed|Functional|
|H02|LL08| Column sum check for solution of Gauss Jordan method|Set of linear equations and order|9|9|Passed|Functional|
|H02|LL09| Eigen value check for the Power method|A Square matrix and order|3.414|3.414|Passed|Functional|
|H02|LL10| Calculate integral value using Trapezoidal method with correct values| n=4, a=0, b=4|8|8|Passed|Functional|
|H02|LL11| Number of subdivisions equal to 0 for the Trapezoidal method| n=0, a=0, b=4|Error Message|Error Message|Passed|Functional|
|H02|LL12| Calculate integral value using Simpson's method with correct values| n=4, a=0, b=4|8|8|Passed|Functional|
|H02|LL13| Number of subdivisions equal to 0 for the Simpson's method| n=0,a=0,b=4|Error Message|Error Message|Passed|Functional|
|H01|LL14| Check if a given matrix is symmetric or not with correct values| test_mat,3,3| Symmetric| Symmetric| Passed|Functional|
|H01|LL15| Check if a given matrix is symmetric or not with wrong values| test_mat,3,3| Asymmetric| Asymmetric| Passed|Functional|
|H02|LL16| Checking whether nth value of x is greater than initial value of x or not in Euler Method|x0<xn|x and y values|Correct x and y values|Passed|Functional|
|H01|LL17| Determinant value for 2x2 matrix|matrix A with dimension 2|-1|-1|Passes|Scenario|
|H02|LL18| Quadratic Function equation calculate for x|equation with order 2 and x value 1|6|6|Passed|Scenario|
|H02|LL19| Check size of input Matrix in LU Method|size of matrix>1|x values|correct x values|Passed|Boundary|
|H02|LL20| Check size of B Vector in LU Method|size of B vector equal to size of i/p matrix|x values|correct x values|Passed|Functional|
|H02|LL21| Checking whether nth value of x is greater than initial value of x or not in RK Method|x0<xn|x and y values|Correct x and y values|Passed|Functional|
|H01|LL22| Test case for product of the matrices|2 matrices|product of the matrices|Correct product|Passed|Functional|
|H02|LL23| Test for finding the root using regula falsi method|ptr1,-4,-3,-16,4,ptr2|root of the equation|correct root of the equation|Passed|Functional|
|H02|LL24| Test for finding the root using bisection  method|ptr1,1,2,ptr2|root of the equation|correct root of the equation|Passed|Functional|

