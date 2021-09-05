# Requirements

## Introduction
Engineering Mathematics can be a daunting subject for many students during the initial years of their technical education. Students go through various topics during a short span of time. Usually, the problems are based on various different complex concepts. To apply a particular concept and solve a problem, it requires one to thoroughly understand the concepts and remember all the parameters and the formulas associated with it. To find the solution, the student spends a lot of time and effort into it. With this project, we try to enhance the learning experience of the students by showing the step by step solution with the accurate final answer. This will enable the students to practice alot more questions and with alot more confidence. Not only students, but even faculty members can use this project to quickly validate their student's answers without having to worry about accuracy.

## Research

* Numerical methods are used to solve equations, evaluate integrals and solve differential equations.
* In numerical solutions ,instead of directly writing the answer in terms of formulae,we perform stepwise calculations using numerical procedures.
* The advantage is that these procedures work on wider range of problems as compared to analytical solutions
* Numerical approach helps to address complex problems by dividing it into smaller and simpler sub operations.Thus it is easier to implement it with the help of computers and hence is chosen as one of our main topics.
* Various matrix operations such as multiplication, addition, subtraction, inverse and identifying type of matrix have been implemented.

## Features

* Main menu function with user choice
  * Matrix Operations 
    * Addition of matrices
    * Subtraction of matrices
    * Multiplication of matrices
    * Inverse of matrix 
    * Determinant of matrix
    * Transpose of matrix
    * Symmetric Matrix

  * Numerical methods
    * Newton Raphson method
    * Gauss Jordan Elimination Method
    * Power Method
    * Bisection Method
    * LU Decomposition Method
    * 4th order Runge Kutta
    * Trapezoid Method
    * Simpson 1/3 Rule
    * Newton Forward  Interpolation
    * Regula Falsi method
    * Newton divided difference
    * Euler Method
   
## State of Art

### Ageing - Time

The matrices are an age old concept that have been used extensively throughout history with the earliest reports of matrix use being between 300 BC and AD 200 in China. Today matrices plays a crucial role in Linear Systems and in all aspects of engineering and mathematics. Matrix operations and numerical methods although simple for small dimensions but with increase in dimension there is an increase in time of calculation and error percentage which is undesirable. In the modern day applications, massive matrices are used routinely in a large number of fields and by developing a program for it, the efficiency, accuracy and calculation time are improved drastically and also reduces the cost of operation of the system.  Mathematical models are a central piece of science and engineering. Some models have closed-form solutions, therefore they can be solved analytically. Many models can not be solved analytically or the analytic solution is too expensive to be of practical use. All models can be solved computationally and the result may not be the exact answer but it can be useful. Numerical methods were introduced for the formulation of model of physical situations that can be solved by arithmetic operations. Development of  more efficient programming algorithms and mathematical techniques in matrix theory, will ensure that this branch of mathematics will continue to develop rapidly in the future as well.

## Requirements

## 4W and 1H

### Who
* Sudents and Professionals interested in or in need of performing complex matrix operations and numerical methods  

### What
* Quickly performs matrix operations and numerical methods. It is more reliable than manual calculation that is tedious and prone to errors
*  * Numerical method approach for solving complex mathematical problems using simple arithmetic operations.

### When
* Matrices have been around for thousands of years although the term "matrix" was coined only in 1850 by James Joseph Sylvester.The matrix theory was further developed by Gottfried Leibniz,Carl Gauss and Arthur Cayley.

### Why
* Matrices find a wide array of uses in a variety of fields such as Crytography,Robotics,Computer Graphics,Wireless communication and many more.
* Design and analysis for numerically solving mathematical problems in science and engineering. 

### How
* This program takes a matrix and relevant inputs that are processed as per selected operation to provide the corresponding output 


## SWOT Analysis

![SWOT-Analysis](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/1_Requirements/SWOT.png)
## High Level requirements

|ID|Feature|Status|
|---|---|---|
HR01|Program code independent of OS|Completed|
HR02| Main menu display |Completed|
HR03| Function to perform matrix operations|Completed|
HR04| Function to calculate Inverse, Determinant and Transpose of matrix|Completed|
HR05| Function to check type of matrix|Completed|
HR06| Function to calculate roots|Completed|
HR07| Function to calculate solution of ODE|Completed|
HR08| Function to perform approximation for integrals|Completed|
HR09| Function to calculate eigen values and vectors|Completed|
HR10| Function for interpolation technique|Completed|

### Low Level requirements
|ID|Feature|High Level ID|Status|
|--|---|---|---|
LR01| Switch case for user's choice|HR01|Completed|
LR02| Check the convergence conditions for Newton-Raphson method|HR06|Completed|
LR03| Function to calculate Determinant of matrix|HR03|Completed|
LR04| Function to calculate Inverse of matrix using Gauss-Jordan elimination |HR03|Completed|
LR05| Function to calculate Transpose of matrix|HR03|Completed|
LR06| Function to check whether matrix is Orthogonal|HR05|Completed|
LR07| Function to check whether matrix is Idempotent|HR05|Completed|
LR08| Function to calculate roots of eqaution using Newton-Raphson method|HR06|Completed|
LR09| Function to calculate Inverse of matrix using adjoint method| HR03|Completed|
LR10| Function to calculate sum of matrices| HR03|Completed|
LR11| Function to calculate differences of matrices| HR03|Completed|
LR12| Function to calculate eigen value and eigen vectors through Power method| HR09|Completed|
LR13| Function to multi variable linear equations using Gauss Jordan Elimination | HR06|Completed|
LR14| Function to find roots using  bisection method | HR06 |Completed|
LR15| Function to find roots using Regula Falsi method | HR06 |Completed|
LR16| Function to find roots using Gauss-Jordan elimination | HR06 |Completed|
LR17| Function to find value of integrals using Simpson's 1/3 rule | HR08 |Completed|
LR18| Function to find value of integrals using Trapezoidal rule | HR08 |Completed|
LR19| Function to check whether matrix is Symmetric | HR05 |Completed|
LR20| Function to solve linear equation by LU Decomposition| HR06|Completed|
LR21| Funtion to solve Ordinary Differntial Equations by Euler Method| HR07|Completed|
LR22| Funtion to solve Ordinary Differntial Equations by Runge Kutta Method| HR07|Completed|
LR23| Function to calculate product of matrices| HR03|Completed|
LR24| Function for Newton Forward Interpolation| HR10|Completed|

#ARCHITECTURE

# High Level UML diagrams

## Sequence UML diagram

![Sequence diagram- highlevel](https://user-images.githubusercontent.com/86716097/124158943-2c7a9200-dab8-11eb-865c-8b2c8effe59a.png)

## Activity UML diagram

![actvitydiagram](https://user-images.githubusercontent.com/80738610/124212778-2a8eee00-db0d-11eb-883e-0b69463a291c.png)

## Use Case Diagram

![UseCaseDiagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/789dd9569f6f439c9f61bdfc2c0eec88bd30e73b/2_Architecture/UseCaseDiagram.jpeg)

## Class Diagram

![Class Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/2_Architecture/ClassDiagramHighLevel.png)

# Low Level UML diagrams

### Matrix Addition

### Activity Diagram

![Activity Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/2_Architecture/Matrix%20Add%20Activity%20Diagram.jpeg)

### Matrix Subtraction

### Activity Diagram

![Activity Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/2_Architecture/Matrix%20Subt%20%20Activity%20Diagram.jpeg)

### Power Method

### Class Diagram

![Class Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/2_Architecture/Power%20Method%20Class%20Diagram.jpeg)

### Gauss Jordan Elimination Method

### Activity Diagram

![Activity Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/2_Architecture/Gauss%20Jordan%20Elimination%20Activity%20Diagram.jpeg)

### Euler Method

#### Activity Diagram

![Activity Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/2_Architecture/Euler_Activity_Diagram.png)

#### Class Diagram

![Class Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/2_Architecture/Euler_Class_Diagram.png)

### LU Decomposition Method

#### State Diagram

![LU](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/2_Architecture/LU_State_Diagram.png)

### Runge–Kutta Method 4th order

#### Class Diagram

![Class Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/2_Architecture/RK_Class_Diagram.png)

### Newton Raphson Root finding 

### Sequence diagram

![Sequence diagram- Newton raphson](https://user-images.githubusercontent.com/86716097/124315260-55228a80-db91-11eb-870c-77ff3a45997e.jpeg)

### Activity diagram

![Activity diagram](https://user-images.githubusercontent.com/86716097/124315282-5d7ac580-db91-11eb-837b-b1e3e1298419.png)

### Inverse of matrix using determinants

#### Class diagram

![UML class](https://user-images.githubusercontent.com/86716097/124315314-64093d00-db91-11eb-8a76-b21967c8e1eb.png)

#### Use case diagram

![Use case diagram](https://user-images.githubusercontent.com/86716097/124315324-679cc400-db91-11eb-9c92-38fb195a5441.png)

### Trapezoidal Method

#### Activity Diagram
![Activity Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/f1b54efd9b16021ceb42053c2c25e1535b1abaa1/2_Architecture/Activity%20diagram%20(1).jpeg)

#### Sequence Diagram
![Sequence Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/f1b54efd9b16021ceb42053c2c25e1535b1abaa1/2_Architecture/Sequencediagram.jpeg)

### Simpson's Method

#### Class Diagram
![Class Diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/f1b54efd9b16021ceb42053c2c25e1535b1abaa1/2_Architecture/UMLclass.jpeg)

### Symmetric Matrix

#### Use Case Diagram
![Use case diagram](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/f1b54efd9b16021ceb42053c2c25e1535b1abaa1/2_Architecture/Use%20case%20diagram%20(1).jpeg)

### Bisection Method

#### Activity Diagram
![Bisection_Activity_diagram](https://user-images.githubusercontent.com/80738610/124373865-c0fd1400-dcb3-11eb-8467-be4d6533e35a.png)

### Matrix multiplication

#### Class Diagram

![matrmult_class diagram](https://user-images.githubusercontent.com/80738610/124374084-e25eff80-dcb5-11eb-8d51-185dedd25067.png)

### Regula falsi method

#### Activity Diagram

![Regulafalsi_activity_diagram](https://user-images.githubusercontent.com/80738610/124374106-0ae6f980-dcb6-11eb-83af-cff0402822e4.png)

### Newton forward Interpolation
#### Class Diagram
![newtoninter_classd_ig](https://user-images.githubusercontent.com/80738610/124376659-b51a4d80-dcc5-11eb-90af-de7192d84785.png)

## Main Menu
![Main Menu](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/6_ImagesAndVideos/RunningMain.png)

# TEST PLAN:

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** | **Status** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|----------------|------------------|
|T01| Cube Function equation calculate for x|equation with order 3 and x value 1|8|8|Passed|Scenario|
|T02| Derivative function for cubic function equation calculate for x|derivative function for equation with order 3 and x value|12|12|Passed|Scenario|
|T03| Determinant zero condition for inverse|A,2|0|0|Passed|Boundary|
|T04| Square matrix check for inverse|
|T06| Sum check of the resultant sum matrix|Two matrices and Dimensions|32|32|Passed|Functional|
|T07| Sum check of the resultant difference matrix|Two matrices and Dimensions|18|18|Passed|Functional|
|T08| Column sum check for solution of Gauss Jordan method|Set of linear equations and order|9|9|Passed|Functional|
|T09| Eigen value check for the Power method|A Square matrix and order|3.414|3.414|Passed|Functional|
|T10| Calculate integral value using Trapezoidal method with correct values| n=4, a=0, b=4|8|8|Passed|Functional|
|T11| Number of subdivisions equal to 0 for the Trapezoidal method| n=0, a=0, b=4|Error Message|Error Message|Passed|Functional|
|T12| Calculate integral value using Simpson's method with correct values| n=4, a=0, b=4|8|8|Passed|Functional|
|T13| Number of subdivisions equal to 0 for the Simpson's method| n=0,a=0,b=4|Error Message|Error Message|Passed|Functional|
|T14| Check if a given matrix is symmetric or not with correct values| test_mat,3,3| Symmetric| Symmetric| Passed|Functional|
|T15| Check if a given matrix is symmetric or not with wrong values| test_mat,3,3| Asymmetric| Asymmetric| Passed|Functional|
|T16| Checking whether nth value of x is greater than initial value of x or not in Euler Method|x0<xn|x and y values|Correct x and y values|Passed|Functional|
|T17| Determinant value for 2x2 matrix|matrix A with dimension 2|-1|-1|Passes|Scenario|
|T18| Quadratic Function equation calculate for x|equation with order 2 and x value 1|6|6|Passed|Scenario|
|T19| Check size of input Matrix in LU Method|size of matrix>1|x values|correct x values|Passed|Boundary|
|T20| Check size of B Vector in LU Method|size of B vector equal to size of i/p matrix|x values|correct x values|Passed|Functional|
|T21| Checking whether nth value of x is greater than initial value of x or not in RK Method|x0<xn|x and y values|Correct x and y values|Passed|Functional|

## Testing Output
![Testing Output Img1_](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/6_ImagesAndVideos/Test_1.png)
![Testing Output Img2_](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/6_ImagesAndVideos/Test_2.png)

## Code Coverage
![Code Coverage Img1_](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/6_ImagesAndVideos/Coverage_1.png)
![Code Coverage Img2_](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/6_ImagesAndVideos/Coverage_2.png)

## Static Analysis - CppCheck
![CppCheck](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/6_ImagesAndVideos/CppCheck.png)

## Dynamic Analysis - Valgrind
![Valgrind_Img1](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/6_ImagesAndVideos/Valgrind_1.png)
![Valgrind_Img2](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/6_ImagesAndVideos/Valgrind_2.png)








