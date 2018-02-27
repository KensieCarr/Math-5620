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
((\ ||A||_1 = max_{1 \leq j \leq s} \sum_{i=1}^s |a_{ij}| \))
{% endraw %}.
The ∞-norm is computed using the equation 
{% raw %}
((\ ||A||_\infty = max_{1 \leq i \leq s} \sum_{j=1}^s |a_{ij} | \)).
\text{Say if I'm given the matrix } 
A = \left[ \begin{matrix}
 2 & 3 \\ 
 4 & 4 \end{matrix}\right] \text{ then the 1-norm is 7 and the ∞-norm is 8}
{% endraw %}.


**Implementation/Code:** 

**Last Modified:** February/2018