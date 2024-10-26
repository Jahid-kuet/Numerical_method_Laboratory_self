#include<bits/stdc++.h>
using namespace std;
/*Converts the matrix to Upper Triangular Matrix form(Gauss Elimination)*/
void upperTriangular(float a[][100], int n)
{
    int i,j,k,x,y;
    float ratio;
    for (i = 0; i < n; i++)
    {
        /*Pivoting : If diagonal element is 0, swap with a row below*/
        if (a[i][i] == 0)
        {
            for (k = i + 1; k < n; k++)
            {
                if (a[k][i] != 0)
                {
                    for (int j = 0; j <2*n; j++)
                    {
                        float temp = a[i][j];
                        a[i][j] = a[k][j];
                        a[k][j] = temp;
                    }
                    break;
                }
            }
        }
        /*Forward elimination to make upper triangular form*/
        for (j = i + 1; j < n; j++)
        {
            ratio = a[j][i] / a[i][i];
            for (k = 0; k <2*n; k++)
            {
                a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
        /*Print intermediate steps*/
        cout<<"Matrix after upper triangular step " << i + 1 << ":"<<endl<<endl;
        for (x= 0; x < n; x++)
        {
            for (y = 0; y <2*n; y++)
            {
                if(fabs(a[i][j]==-0))
                    cout<<"0.00"<<"\t";
                else
                    cout<<fixed<<setprecision(2)<<a[x][y]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
/*Gauss-Jordan elimination to convert to Reduced Row Echelon Form(RREF)*/
void gaussJordan(float a[][100], int n)
{
    int i, j, k;
    float ratio;
    /*Backward elimination to make diagonal elements 1 and the rest of the column 0*/
    for (i = n - 1; i >= 0; i--)
    {
        /*Normalize the row by dividing by the diagonal element*/
        float pivot = a[i][i];
        for (k = 0; k <2*n; k++)
        {
            a[i][k] /= pivot;
        }
        /*Eliminate other elements in the current column*/
        for (j = 0; j < i; j++)
        {
            ratio = a[j][i];
            for (k = 0; k <2*n; k++)
            {
                a[j][k] -= ratio * a[i][k];
            }
        }
        /*Print the matrix after each step of Gauss-Jordan*/
        cout<<"Matrix after Gauss-Jordan step " << (n - i) << ":"<<endl<<endl;
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y <2*n; y++)
            {
                if(fabs(a[i][j]==-0))
                    cout<<"0.00"<<"\t";
                else
                    cout<<fixed<<setprecision(2)<<a[x][y]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
/*Printing Inverse Matrix(A^-1): */
void printInverse(float a[][100],int n)
{
    cout<<"The inverse matrix is: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=n; j<2*n; j++)
        {
            if(fabs(a[i][j])==-0)
                cout<<"0.00"<<"\t";
            else
                cout<<fixed<<setprecision(2)<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter number of unknowns(variables): ";
    cin>>n;
    float A[100][100];
    cout<<"Enter the augmented matrix(A|I form):"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*n; j++)
        {
            cin>>A[i][j];
        }
    }
    /*Perform GaussElimination(convert to upper triangular form)*/
    upperTriangular(A,n);
    /*Perform Gauss-Jordan Elimination(convert to RREF)*/
    gaussJordan(A,n);
    /*print the inverse matrix*/
    printInverse(A,n);
}
/*
Input form:
n
A|I
Output form:
I|A^-1

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

*/
