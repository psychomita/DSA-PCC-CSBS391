## Problem Statement :
Write a program in C to evaluate a postfix expression.

## Evaluation of Postfix Expression :
The expression of the form “a b operator” (ab+) i.e., when a pair of operands is followed by an operator.

    Input: str = “2 3 1 * + 9 -“
    Output: -4
    Explanation: If the expression is converted into an infix expression, it will be 2 + (3 * 1) – 9 = 5 – 9 = -4.

    Input: str = “100 200 + 2 / 5 * 7 +”
    Output: 757

Follow the steps mentioned below to evaluate postfix expression using stack:

+ Create a stack to store operands (or values).
- Scan the given expression from left to right and do the following for every scanned element.
* If the element is a number, push it into the stack.
+ If the element is an operator, pop operands for the operator from the stack. Evaluate the operator and push the result back to the stack.
- When the expression is ended, the number in the stack is the final answer.
