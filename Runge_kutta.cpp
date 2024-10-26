#include<bits/stdc++.h>
using namespace std;
/* Let,dy/dx=x-y */
double f(double x, double y)
{
    return x-y;
}
/* Exact solution of x-y is x-1+2*e^-1 */
double exactSolution(double x)
{
    return x-1+2*exp(-1*x);
}
double rungeKutta(double x0, double y0, double h, double x)
{
    double y = y0;
    while(x0 < x)
    {
        double k1 = h * f(x0, y);
        double k2 = h * f(x0 + h / 2, y + k1 / 2);
        double k3 = h * f(x0 + h / 2, y + k2 / 2);
        double k4 = h * f(x0 + h, y + k3);
        y += (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x0 += h;
    }
    return y;
}
int main()
{
    double x0 = 0.0, y0 = 1.0,E_mean=0.0; // Initial condition
    double h = 1, x = 10.0;  // Step size and final x value
    /* Print the table header */
    cout<<setw(16)<<"X"<<setw(16)<<"Y (RK4)"<<setw(16)<<"Y (Exact)"<<setw(16)<<"Error"<<endl;
    /* Compute and display the results at each step */
    for(double i = x0; i <= x; i += h)
    {
        double y_rk4 = rungeKutta(x0, y0, h, i);
        double y_exact = exactSolution(i);
        double error = fabs(y_rk4 - y_exact);
        cout<<setw(16)<<i<<setw(16)<<setprecision(5)<<y_rk4<<setw(16)<<setprecision(5)<<y_exact<<setw(16)<<setprecision(5)<<error<< endl;
        E_mean=E_mean+error;
    }
    cout<<endl<<endl<<"\t\tMean Error: "<<E_mean/(x+1)<<endl;
}
/*
Given,
    dy/dx = x-y
  =>dy/dx + y = x
  This is a first-order differential equation of the form:
    dy/dx+P(x)y=Q(x)

  so,Integrating factor=e^x

  Multiplying both sides of the equation dy/dx+y=x by the integrating factor,
  (e^x)dy/dx+(e^x)y=(e^x)x
  . . .
  . . .
  . . .
 =>y(x)=x-1+C(e^-x)
   y(0)=1 so C=2
so,y(x)=x-1+2(e^-x)
*/
