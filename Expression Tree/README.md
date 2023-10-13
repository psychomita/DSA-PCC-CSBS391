## Problem Statement :
Implement Expression tree in C.

## Expression Tree :
The expression tree is a binary tree in which each internal node corresponds to the operator and each leaf node corresponds to the operand. Inorder traversal of expression tree produces infix version of given postfix expression (same with postorder traversal it gives postfix expression).

    Input:  A B C*+ D/
    Output: A + B * C / D

## Construction of Expression Tree : 

For constructing an expression tree we use a stack. We loop through input expression and do the following for every character. 

1. If a character is an operand push that into the stack.
1. If a character is an operator pop two values from the stack make them its child and push the current node again.

In the end, the only element of the stack will be the root of an expression tree.

![image](https://github.com/psychomita/PCC-CSBS391/assets/133328192/c32f87f4-0f73-475d-9c8b-ccd1025f18dd)


