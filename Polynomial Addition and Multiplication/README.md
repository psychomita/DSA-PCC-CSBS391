## Problem Statement :
Write a program to add and multiply 2 polynomials.

## Polynomial Addition :
Given two polynomials represented by two arrays, write a function that adds given 2 polynomials. 

    Input:  A[] = {5, 0, 10, 6} 
            B[] = {1, 2, 4} 
    Output: sum[] = {6, 2, 14, 6}

    The first input array represents "5 + 0x^1 + 10x^2 + 6x^3"
    The second array represents "1 + 2x^1 + 4x^2" 
    And Output is "6 + 2x^1 + 14x^2 + 6x^3"

## Polynomial Multiplication :
Polynomials are mathematical expressions made up of constants and variables multiplied together as one. In Polynomial Multiplication we multiply the variables and coefficient of the two polynomials. Suppose we have to find the product of two polynomials, then we multiply the coefficient of the first polynomial with the coefficient of the second polynomial and then we multiply the same variables and change their exponents, then other variables are written as such.
      
    Step 1: Multiply the coefficients of both the variables.

    Step 2: To multiply the variables we use the laws of exponents.

    For example, Multiply the polynomials 3x^5 and 5x^2

    = (3x^5)(5x^2)

    = (3.5)(x^5.x^2)

    = 15(x^5+2)

    = 15x^7
