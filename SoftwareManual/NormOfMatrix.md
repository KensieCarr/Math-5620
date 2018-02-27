# Homework 3
## Problem 1
**Routine Name:**           Norm of a Matrix

**Author:** Kensie Carr

**Language:** C++

**Description/Purpose:** 

This routine will compute the 1-norm and ∞-norm of matrix for all matrix 
{% raw %}
\\(
    A \in \mathbb{R}^{m \times n} \\) 
{% endraw %}

**Input:**

A = matrix that is m by n

**Output:** 

1-norm

∞-norm

**Usage/Example:**
The 1-norm is computed using the equation 
{% raw %}
((\ ||A||_1 = max_{1 \leq j \leq s} \sum_{i=1}^s |a_{ij}|.
\text{The ∞-norm is computed using the equation}
||A||_\infty = max_{1 \leq i \leq s} \sum_{j=1}^s |a_{ij} |. 
\text{Say if I'm given the matrix } 
A = \left[ \begin{matrix}
 2 & 3 \\ 
 4 & 4 \end{matrix}\right] \text{ then the 1-norm is 7 and the ∞-norm is 8.}
 \))
{% endraw %}

**Implementation/Code:** 
```c++
float oneNorm(vector< vector<int> > matrix) {
    vector<float> columnSum;
    float temp;
    for(int j = 0; j < matrix[0].size(); j++) {
        for(int i = 0; i < matrix.size(); i++) {
        temp = temp + matrix[i][j];
        }
        columnSum[j] = temp;
    }
    float oneNorm = 0;
    for(int k = 0;k < columnSum.size(); k++) {
        if (columnSum[k] > oneNorm) {
            oneNorm = columnSum[k];
        }
    }
    return oneNorm;
}

float infinityNorm(vector< vector<int> > matrix) {
    vector<float> rowSum;
    float temp;
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            temp = temp + matrix[i][j];
        }
        rowSum[i] = temp;
    }
    float infinityNorm = 0;
    for (int k = 0; k < rowSum.size(); k++) {
        if(rowSum[k] > infinityNorm) {
            infinityNorm = rowSum[k];
        }
    }
    return infinityNorm;
}
```
[full code](https://KensieCarr.github.io/Math-5620/SoftwareManual/NormOfMatrix.cpp)

**Last Modified:** February/2018