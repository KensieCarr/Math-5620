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
\( 
    \left[ \begin{matrix} 
    2.04 & -1 &  &  \\
    -1 & 2.04 & -1 &  \\ 
     & -1 & 2.04 & -1 \\ 
     &  & -1 & 2.04
     \end{matrix} \right]
     \left[ \begin{matrix} X_1 \\ X_2 \\ X_3 \\ X_4 \end{matrix} \right]
     = \left[ \begin{matrix} 40.8 \\ 0.8 \\ 0.8 \\ 200.8 \end{matrix} \right]
    \)

{% endraw %}

**Implementation/Code:** 

**Last Modified:** February/2018