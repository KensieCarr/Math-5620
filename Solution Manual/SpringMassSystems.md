# Homework 1
## Problem 7
**Routine Name:**           Spring Mass Systems

**Author:** Kensie Carr

**Language:** C++

**Description/Purpose:**
This routine will compute the second order, linear, constant coefficient, differential equation my'' + cy' + ky = f(t).  

**Input:** 
y_0 = y(0) initial condition
v_0 = y'(0) initial condition
m = scalar m
c = scalar c
k = scalar k

**Output:** 
t = analytic solution at time t

**Usage/Example:**
Consider the initial value problem my'' + cy' + ky = F(t), y(0) = 0, y'(0) = 0 modeling the motion of a spring-mass-dashpot system initially at rest and subjected to an applied force F(t), where the unit of force is the Newton (N). Assume that m = 2 kilograms, c = 8 kilograms per second, k = 80 Newtons per meter, and F(t) = 30sin(6t) Newtons. Compute the analytic solution for time t.
![Spring Mass1](https://KensieCarr.github.io/Math-5620/Solution Manual/SpringMass1.JPG)
![Spring Mass2](https://KensieCarr.github.io/Math-5620/Solution Manual/SpringMass2.JPG)

Using this equation you can plug in any time t and you will get the analytic solution.

_Problem 5 taken from http://people.math.umass.edu/~rsellis/Math331/Fall-2016/Homework_Set_7-Webwork-Solutions.pdf_

**Implementation/Code:** 

**Last Modified:** January/2018