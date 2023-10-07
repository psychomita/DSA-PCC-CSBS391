## Problem Statement :
The classic way to evaluate a polynomial is Horner's Rule. State Horner's Rule recursively in C.

## Horner's Rule :
Given a polynomial of the form c<sub>n</sub>x<sup>n</sup> + c<sub>n-1</sub>x<sup>n-1</sup> + c<sub>n-2</sub>x<sup>n-2</sup> + … + c<sub>1</sub>x + c<sub>0</sub> and a value of x, find the value of polynomial for a given value of x. Here c<sub>n</sub>, c<sub>n-1</sub>, .. are integers (may be negative) and n is a positive integer.
Input is in the form of an array say poly[] where poly[0] represents coefficient for x<sup>n</sup> and poly[1] represents coefficient for x<sup>n-1</sup> and so on.

## Examples :

    Evaluate value of 2x^3 - 6x^2 + 2x - 1 for x = 3
    Input: poly[] = {2, -6, 2, -1}, x = 3
    Output: 5

    Evaluate value of 2x^3 + 3x + 1 for x = 2
    Input: poly[] = {2, 0, 3, 1}, x = 2
    Output: 23
