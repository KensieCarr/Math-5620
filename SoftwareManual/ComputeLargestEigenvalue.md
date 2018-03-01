# Homework 3
## Problem 2
**Routine Name:**           Compute Largest Eigenvalue

**Author:** Kensie Carr

**Language:** C++

**Description/Purpose:** 

This routine will compute the largest eigenvalue of a given matrix 
{% raw %}
\\( A \in R^{n \times n} \\)
{% endraw %} using a power method iteration.

**Input:**

A = matrix that is n by n

**Output:** 

Largest eigenvalue of the matrix
\left[ \begin{matrix} \end{matrix} \right]

**Usage/Example:**
If I do six iterations and I have the matrix 

{% raw %}

\\(
    
A = \left[ \begin{matrix} 
2 & -12 \\
1 & -5 
\end{matrix} \right] \\ 
\text{Beginning with an initial nonzero approximation}
x_0 = \left[ \begin{matrix} 1 \\ 1 \end{matrix} \right] \\
\\
x_1 = Ax_0 = \left[ \begin{matrix} 2 & -12 \\ 1 & -5 \end{matrix} \right] 
\left[ \begin{matrix} 1 \\ 1 \end{matrix} \right] =  
\left[ \begin{matrix} -10 \\ 4 \end{matrix} \right] 
\rightarrow -4\left[ \begin{matrix} 2.50 \\ 1.00 \end{matrix} \right] \\ 

x_2 = Ax_1 = \left[ \begin{matrix} 2 & -12 \\ 1 & -5 \end{matrix} \right]
\left[ \begin{matrix} -10 \\ -4 \end{matrix} \right]
= \left[ \begin{matrix} 28 \\ 10 \end{matrix} \right]
\rightarrow 10\left[ \begin{matrix} 2.80 \\ 1.00 \end{matrix} \right] \\ 

x_3 = Ax_2 = \left[ \begin{matrix} 2 & -12 \\ 1 & -5 \end{matrix} \right]
\left[ \begin{matrix} 28 \\ 10 \end{matrix} \right]
= \left[ \begin{matrix} -64 \\ -22 \end{matrix} \right]
\rightarrow -22\left[ \begin{matrix} 2.91 \\ 1.00 \end{matrix} \right] \\ 

x_4 = Ax_3 = \left[ \begin{matrix} 2 & -12 \\ 1 & -5 \end{matrix} \right]
\left[ \begin{matrix} -64 \\ -22 \end{matrix} \right]
= \left[ \begin{matrix} 136 \\ 46 \end{matrix} \right]
\rightarrow 46\left[ \begin{matrix} 2.96 \\ 1.00 \end{matrix} \right] \\ 

x_5 = Ax_4 = \left[ \begin{matrix} 2 & -12 \\ 1 & -5 \end{matrix} \right]
\left[ \begin{matrix} 136 \\ 46 \end{matrix} \right]
= \left[ \begin{matrix} -280 \\ -94 \end{matrix} \right]
\rightarrow -94\left[ \begin{matrix} 2.98 \\ 1.00 \end{matrix} \right] \\ 

x_6 = Ax_5 = \left[ \begin{matrix} 2 & -12 \\ 1 & -5 \end{matrix} \right]
\left[ \begin{matrix} -280 \\ -94 \end{matrix} \right]
= \left[ \begin{matrix} 568 \\ 190 \end{matrix} \right]
\rightarrow 190\left[ \begin{matrix} 2.99 \\ 1.00 \end{matrix} \right] \\ 
Ax = \left[ \begin{matrix} 2 & -12 \\ 1 & -5 \end{matrix} \right]\left[ \begin{matrix} 2.99 \\ 1.00 \end{matrix} \right] = \left[ \begin{matrix} -6.02 \\ -2.01 \end{matrix} \right] \\ 
Ax * x = (-6.02)(2.99) + (-2.01)(1) = -20.0 \\ 
x * x = (2.99)(2.99) + (1)(1) = 9.94 \\ 
\lambda = \frac{Ax * x}{x*x} = \frac{-20.0}{9.94} = -2.01 \\ 
\lambda = -2

\\)

{% endraw %}

**Implementation/Code:** 
```c++
float findEigenvalue(int order, int iter){
    float matrix[10][10];
    float x[10], y[10], z[10];
    float eigenvalue;
    cout << "Enter the coefficients of the matrix(rows left to right)";
    for(int i=0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            cin >> matrix[i][j];
        }
        x[i] = 1;
    }
    int k = 0;
    if ( k < iter ) {
        for(int i=0; i < order; i++){
            y[i]=0;
                for(int j=0; j < order; j++) {
                y[i]=y[i]+matrix[i][j]*x[j];
                }
            z[i]=fabs(y[i]);
         }
        float Z=z[0];
        int j=0;
        for(int i=1; i < order; i++) {
            if(z[i]>=Z) {
                Z=z[i];
                j=i;
            }
        }
        if(Z==y[j]) {
        eigenvalue = Z;
        } else {
        eigenvalue = -Z;
        }
        for(int i=0; i < order; i++) {
        x[i]=y[i]/eigenvalue;
        }
        k++;
    } else {
        cout << "The largest Eigenvalue is " << eigenvalue << endl;
    }
    return eigenvalue;
}

```
[full code](https://KensieCarr.github.io/Math-5620/SoftwareManual/ComputeLargestEigenvalue.cpp)

**Last Modified:** February/2018