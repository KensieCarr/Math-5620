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
```c++
int absoluteError (int solution, int computedSolution) { 
    int absoluteError = abs(computedSolution - solution);
    return absoluteError;
}
```
[full code](https://KensieCarr.github.io/Math-5620/SoftwareManual/absolute_error.cpp)

**Last Modified:** January/2018