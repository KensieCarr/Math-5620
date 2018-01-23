# Homework 1
## Problem 2

**Routine Name:**           Find Machine Epsilon

**Author:** Kensie Carr

**Language:** C++

**Description/Purpose:** This routine will compute the single precision value for the machine epsilon or the number of digits
in the representation of real numbers in single precision. This is a routine for analyzing the behavior of any computer. This
usually will need to be run one time for each computer.

**Input:** There are no inputs needed in this case. Even though there are arguments supplied, the real purpose is to
return values in those variables.

**Output:** This routine returns a single precision value for the number of decimal digits that can be represented on the
computer being queried.

**Usage/Example:**
To find the machine epsilon of a computer manually the easiest way is to figure out the smallest number my computer can represent. The easiest way to do this is to take a small digit and add 1 and keep asking my computer if this small digit is equal to 1. If it isn't then make that small digit even smaller by dividing by 2. Logically speaking this digit will never disappear because a value divided by 2 will always return another value. Eventually as I make that small digit smaller and smaller my computer will get to the smallest number it can represent and tell me "Hey this number plus 1 is equal to 1". However a value plus 1 will never equal 1 unless that value is 0. Therefore this is the smallest number my computer can represent before it's too small to recognize.

**Implementation/Code:** 
```c++ 
void machineEpsilon(float EPS) {
  float prev_epsilon;
  while ((1 + EPS) != 1) {
    prev_epsilon = EPS;
    EPS /= 2;
  }
  cout << "Machine Epsilon is: " << prev_epsilon << endl;
}
```
[full code](https://KensieCarr.github.io/Math-5620/SoftwareManual/machine_epsilon.cpp)

**Last Modified:** January/2018