#include <stdio.h>

int main()
{
    int a, b, add, sub, mul, div, rem;

    /* 9 arithmetic operations in C:: "'+' Plus", "'-' Minus", "'*' Multiply", "'/' Divide", "'%' Modulus", "'+'____ Unary plus", "____'-' Unary minus", "'++' Increment", "'--' Decrement" . */

    printf("Enter two Numbers:  \n");
    scanf("%d %d", &a, &b);

    //plus Adds two numeric values.
    add = a + b;
    printf("Addition of %d and %d is %d\n", a, b, add);


    //minus Subtracts right operand from left operand.	
    sub = a - b;
    printf("Subtraction of %d and %d is %d\n", a, b, sub);


    //Multiply two numeric values.
    mul = a * b;
    printf("Multiplication of %d and %d is %d\n", a, b, mul);


    //divide two numeric values.
    div = a / b;
    printf("Division of %d and %d is %d\n", a, b, div);


    //modulus returns the remainder after diving the left operand with the right operand.
    rem = a % b;
    printf("Reminder of %d and %d is %d\n", a, b, rem);


    //unary plus is used to specify the positive values.
    printf("unary plus, +a = %d\n", +a);


    //unary minus Flips the sign of the value.
    printf("unary minus, -a = %d\n", -a);
    
    
    //increment Increases the value of the operand by 1.
    printf("increment, a++ = %d\n", a++);
    
    
    //decrement Decreases the value of the operand by 1.
    printf("decrement, a-- = %d\n", a--);

    return 0;
}