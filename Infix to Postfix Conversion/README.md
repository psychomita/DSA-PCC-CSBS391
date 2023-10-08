## Problem Statement :
Write a C program to convert a given infix expression to postfix expression.

## Convert Infix expression to Postfix expression :
Infix expression: The expression of the form “a operator b” (a + b) i.e., when an operator is in-between every pair of operands.
Postfix expression: The expression of the form “a b operator” (ab+) i.e., when every pair of operands is followed by an operator.

    Input: A + B * C + D
    Output: ABC*+D+

    Input: ((A + B) – C * (D / E)) + F
    Output: AB+CDE/*-F+ 

**Below are the steps to implement the above idea:**

1. Scan the infix expression from left to right. 
1. If the scanned character is an operand, put it in the postfix expression. 
1. Otherwise, do the following
    + If the precedence and associativity of the scanned operator are greater than the precedence and associativity of the operator in the stack [or the stack is empty or the stack contains a ‘(‘ ], then push it in the stack. [‘^‘ operator is right associative and other operators like ‘+‘,’–‘,’*‘ and ‘/‘ are left-associative].
    - Check especially for a condition when the operator at the top of the stack and the scanned operator both are ‘^‘. In this condition, the precedence of the scanned operator is higher due to its right associativity. So it will be pushed into the operator stack. 
    * In all the other cases when the top of the operator stack is the same as the scanned operator, then pop the operator from the stack because of left associativity due to which the scanned operator has less precedence. 
    + Else, Pop all the operators from the stack which are greater than or equal to in precedence than that of the scanned operator.
      + After doing that Push the scanned operator to the stack. (If you encounter parenthesis while popping then stop there and push the scanned operator in the stack.) 
4. If the scanned character is a ‘(‘, push it to the stack. 
5. If the scanned character is a ‘)’, pop the stack and output it until a ‘(‘ is encountered, and discard both the parenthesis. 
6. Repeat steps 2-5 until the infix expression is scanned. 
7. Once the scanning is over, Pop the stack and add the operators in the postfix expression until it is not empty.
8. Finally, print the postfix expression.
