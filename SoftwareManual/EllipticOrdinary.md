# Homework 2
## Problem 3
**Routine Name:**           Elliptic Ordinary Differential Equation

**Author:** Kensie Carr

**Language:** C++

**Description/Purpose:** 

This routine will initialize the information needed for the elliptic ordinary differential equation 
{% raw %}
\\( u'' = f(x),\ x \in (a,b) \\)
{% endraw %}
with initial condition, 
{% raw %}
\\( u(a) = u_a, u(b) = u_b \\)
{% endraw %}

**Input:**

f(x) = 

a = 

b = 

{% raw %}
\\( u_a = \\)

\\( u_b = \\)
{% endraw %}

**Output:** 


**Usage/Example:**

If I'm given the data
{% raw %}

\\(
    a = 0,\ b = 0\ ,f(x) = \sin(\pi x), u_a = 2.5, u_b = 5.0 \\\
\text{then plugging it into our ordinary differential equation I get} \\\

u'' = \sin(\pi x),\ x \in (0,0) \\\
\text{with initial condition} \\\
u(0) = 2.5, u(0) = 5.0 \\\ 
u(a) = u_a \\\ 
\frac{dv}{dx}(b) = v_b \\\ 
\frac{dv}{dx}(a) = v_a \\\ 
u(b) = u_b \\\

\text{Using a finite difference approximation of u''(x) we can write} \\\
u''(x) = \frac{u(x-h) - 2u(x) + u(x+h)}{h^2}

\\)

{% endraw %}


**Implementation/Code:** 

**Last Modified:** February/2018
