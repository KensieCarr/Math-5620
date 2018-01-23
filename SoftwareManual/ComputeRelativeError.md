# Homework 1
## Problem 4
**Routine Name:**           Compute Relative Error

**Author:** Kensie Carr

**Language:** C++

**Description/Purpose:** 
This routine computes the relative error in the approximation of one number by another. The difference between absolute error and relative error is that relative error takes into account scaling. 

**Input:**
z = single value solution
y = numerical method produced solution

**Output:** 
E = Absolute Error

**Usage/Example:**
Suppose that z = 2.2, while some computed solution y = 2.20345. The relative error is defined by |E| = |(y - z)/z|. In this example the relative error is 1.57 x 10^{-3}.

**Implementation/Code:** 
```c++
int relativeError (int solution, int computedSolution) {
    int relativeError = abs((computedSolution - solution)/(solution));
    return relativeError;
}
```
[full code](https://KensieCarr.github.io/Math-5620/SoftwareManual/relative_error.cpp)

**Last Modified:** January/2018