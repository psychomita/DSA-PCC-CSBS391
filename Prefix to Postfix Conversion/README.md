## Problem Statement :
Convert a prefix expression to postfix in C.

## Prefix to Postfix Conversion :
Prefix: An expression is called the prefix expression if the operator appears in the expression before the operands. Simply of the form (operator operand1 operand2). 
Example : *+AB-CD (Infix : (A+B) * (C-D) )

Postfix: An expression is called the postfix expression if the operator appears in the expression after the operands. Simply of the form (operand1 operand2 operator). 
Example : AB+CD-* (Infix : (A+B * (C-D) )

    Input :  Prefix :  *+AB-CD
    Output : Postfix : AB+CD-*
    Explanation : Prefix to Infix :  (A+B) * (C-D)
              I   Infix to Postfix :  AB+CD-*

    Input :  Prefix :  *-A/BC-/AKL
    Output : Postfix : ABC/-AK/L-*
    Explanation : Prefix to Infix :  (A-(B/C))*((A/K)-L)
                  Infix to Postfix : ABC/-AK/L-* 

**Algorithm for Prefix to Postfix :**

+ Read the Prefix expression in reverse order (from right to left)
+ If the symbol is an operand, then push it onto the Stack
+ If the symbol is an operator, then pop two operands from the Stack 
+ Create a string by concatenating the two operands and the operator after them.

  string = operand1 + operand2 + operator 

  And push the resultant string back to Stack
+ Repeat the above steps until end of Prefix expression.
