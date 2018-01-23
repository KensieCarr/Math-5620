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


**Implementation/Code:** The following is the code for smaceps()

      subroutine smaceps(seps, ipow)
    c
    c set up storage for the algorithm
    c --------------------------------
    c
          real seps, one, appone
    c
    c initialize variables to compute the machine value near 1.0
    c ----------------------------------------------------------
    c
          one = 1.0
          seps = 1.0
          appone = one + seps
    c
    c loop, dividing by 2 each time to determine when the difference between one and
    c the approximation is zero in single precision
    c --------------------------------------------- 
    c
          ipow = 0
          do 1 i=1,1000
             ipow = ipow + 1
    c
    c update the perturbation and compute the approximation to one
    c ------------------------------------------------------------
    c
            seps = seps / 2
            appone = one + seps
    c
    c do the comparison and if small enough, break out of the loop and return
    c control to the calling code
    c ---------------------------
    c
            if(abs(appone-one) .eq. 0.0) return
    c
        1 continue
    c
    c if the code gets to this point, there is a bit of trouble
    c ---------------------------------------------------------
    c
          print *,"The loop limit has been exceeded"
    c
    c done
    c ----
    c
          return
    end