# Homework 2
## Problem 4
**Routine Name:**           Thomas Algorithm

**Author:** Kensie Carr

**Language:** C++

**Description/Purpose:** 

This routine will solve the linear system using the Thomas algorithm. It was also determine the relationship between the size of the matrices as n varies and the time it takes to compute the solution.

**Input:**
A = tridiagonal matrix

b = vector

**Output:** 
x = vector

r = Relationship between the size of the matrices as n varies and the time it takes to compute the solution.


**Usage/Example:**


Given the tridiagonal system Ax = b I can solve x using the Thomas Algorithm.

{% raw %}
\\( 
    \left[ \begin{matrix} 
    2.04 & -1 &  &  \\\
    -1 & 2.04 & -1 &  \\\ 
     & -1 & 2.04 & -1 \\\ 
     &  & -1 & 2.04
     \end{matrix} \right]
     \left[ \begin{matrix} X_1 \\\ X_2 \\\ X_3 \\\ X_4 \end{matrix} \right]
     = \left[ \begin{matrix} 40.8 \\\ 0.8 \\\ 0.8 \\\ 200.8 \end{matrix} \right] \\\ 
     e_2 = \frac{-1}{2.04} = -0.49 \\\ 
     f_2 = 2.04 - (-0.49)(-1) = 1.550 \\\ 
     e_3 = \frac{-1}{1.550} = -0.645 \\\ 
     f_3 = 2.04 -(-0.645)(-1) = 1.395 \\\ 
     e_4 = \frac{-1}{1.395} = -0.717 \\\ 
     f_4 = 2.04 - (-0.717)(-1) = 1.323  \text{Now putting these numbers into our new matrix} \\\ 
     \left[ \begin{matrix} 2.04 & -1 & & \\\ 
     -0.49 & 1.550 & -1 & \\\ 
     & -0.645 & 1.395 & -1 \\\ 
     & & -0.717 & 1.323
      \end{matrix} \right] 
    \text{Putting this matrix into LU decomposition} \\\ 
    [A] = [L][U] =
    \left[ \begin{matrix}
      1 & & & \\\ 
     -0.49 & 1 & & \\\ 
     & -0.645 & 1 & \\\ 
     & & -0.717 & 1
    \end{matrix} \right]
    \left[ \begin{matrix} 
      2.04 & -1 & & \\\ 
      & 1.550 & -1 & \\\ 
      & & 1.395 & -1 \\\ 
      & & & 1.323
    \end{matrix} \right]
    \text{Now figuring out what the right side of our equation is} \\\
    b_2 = 0.8-(-0.49)40.8 = 20.8 \\\ 
    b_3 = 0.8-(-0.645)20.8 = 14.221 \\\ 
    b_4 = 200.8-(-0.717)14.221 = 210..996 \\\ 
    b = \left[ \begin{matrix} 40.8 \\\ 20.8 \\\ 14.221 \\\ 210.996 \end{matrix} \right] \\\ 
    \text{Now finding the vector x} \\\ 
    X_4 = \frac{210.996}{1.323} = 159.480 \\\ 
    X_3 = \frac{14.221 -(-1)159.480}{1.395} = 124.538 \\\ 
    X_2 = \frac{20.800 -(-1)124.538}{1.550} = 93.778 \\\ 
    X_1 = \frac{40.800-(-1)93.778}{2.040} = 65.970 \\\ 
    \text{Therefore}
    x = \left[ \begin{matrix} 65.970 \\\ 93.778 \\\ 124.538 \\\  159.480 \end{matrix} \right]
      \\) 
{% endraw %}

**Implementation/Code:** 

**Last Modified:** February/2018