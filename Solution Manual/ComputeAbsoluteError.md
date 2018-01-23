# Homework 1
## Problem 4
**Routine Name:**           Compute Absolute Error

**Author:** Kensie Carr

**Language:** C++

**Description/Purpose:** 
This routine computes the absolute error in the approximation of one number by another.

**Input:**
z = single value solution
y = numerical method produced solution

**Output:** 
E = Absolute Error

**Usage/Example:**
Suppose that z = 2.2, while some computed solution y = 2.20345. The absolute error can be computed using |E| = |y - z|. In this case the absolute error is 0.00345 or 3.45 x 10^{-3}

**Implementation/Code:** 
int absoluteError (int solution, int computedSolution) {
    int absoluteError = |computedSolution - solution|;
    return absoluteError;
}

**Last Modified:** January/2018