# Numerical_method_Laboratory_self
<br>
Assignment: Console Application Development Using Numerical Methods
1)Matrix Inversion Using Gause-elimination and Gause-Jordan methods
Input form:
Enter number of unknowns(variables): n
Enter the augmented matrix(A|I form):A|I
Output form:
I|A^-1
where A^-1 is inverse matrix of A.

Test case-1:
Input:
3
1   2   3   1   0   0
4   6   7   0   1   0
-2  1   5   0   0   1

Output:
7.67    -2.33   -1.33
-11.33  3.67    1.67
5.33    -1.67   -0.67

Test case-2:
Input:
4
0   0   -1  2   1   0   0   0
0   1   0   0   0   1   0   0
9   0   0   0   0   0   1   0
0   0   0   1   0   0   0   1

Output:
0.00    0.00    0.11    0.00
0.00    1.00    0.00    0.00
-1.00   0.00    0.00    2.00
0.00    0.00    0.00    1.00
2)Solution of Differential Equations:Runge-Kutta method
Consider the differential Equation is dy/dx = x-y
Input:
Enter h(step size) and x(final value of x):
h=1
x=10
Output:
=>in tabular form
X,Y(RK4),Y(exact),error
