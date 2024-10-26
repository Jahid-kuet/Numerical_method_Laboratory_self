DOCTYPE html>
<html>
<head>
    <title>Numerical Methods Laboratory - Console Application</title>
</head>
<body>

<h1 id="numerical_method_laboratory_self">Numerical Method Laboratory Self</h1>
<h2>Assignment: Console Application Development Using Numerical Methods</h2>

This console application provides the following different methods for solving a number of mathematical problems using numerical methods:
solving differential equations, and matrix inversion. The code will ask for the user's input and show him the solutions as per the method selected.

Features:

• The method of matrix inversion uses Gauss-elimination and Gauss-Jordan.
• Solution of Differential Equations Using the Runge-Kutta Method

<hr>

<h2>1) Matrix Inversion Using Gauss-Elimination and Gauss-Jordan Methods</h2>
<p><strong>Input format:</strong></p>
<pre>
Enter the number of unknowns (variables): n
Enter the augmented matrix (A | I form): A | I
</pre>

<p><strong>Output format:</strong></p>
<pre>
I | A<sup>-1</sup> 
where A<sup>-1</sup> is the inverse matrix of A.
</pre>

<h3>Test Case 1:</h3>
<p><strong>Input:</strong></p>
<pre>
3
1   2   3   1   0   0
4   6   7   0   1   0
-2  1   5   0   0   1
</pre>

<strong>Output:</strong>
<pre>
7.67    -2.33   -1.33
-11.33  3.67    1.67
5.33    -1.67   -0.67
</pre>

<h3>Test Case 2:</h3>
<strong>Input:</strong>
<pre>
4
0   0   -1  2   1   0   0   0
0   1   0   0   0   1   0   0
9   0   0   0   0   0   1   0
0   0   0   1   0   0   0   1
</pre>

<p><strong>Output:</strong></p>
<pre>
0.00    0.00    0.11    0.00
0.00    1.00    0.00    0.00
-1.00   0.00    0.00    2.00
0.00    0.00    0.00    1.00
</pre>

<hr>

2) Solution of Differential Equations: Runge-Kutta Method (RK4)
Consider the Differential Equation: dy/dx = x - y

Input:
memoir
Enter h(step size) and x(final value of x):
h = 1
x = 10

Output:
Tabular representation of X, Y (RK4), Y (Exact), and Error

hissed

Project Setup:
Clone this repository in your local machine.
Open project directory in your favorite code editor.
<li> Compile and run the code using any compatible C++/Java/Python compiler.</li>
</ol>

<h2>License</h2>
<p>This project is licensed under the MIT License - see the LICENSE file for details.</p>

</body>
</html>
