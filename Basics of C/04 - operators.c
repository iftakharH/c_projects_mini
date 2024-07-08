#include <stdio.h>

int main()
{
    int a, b, add, sub, mul, div, rem;

        /*6 types based on their functionality:
        1. Arithmetic Operators
        2. Relational Operators
        3. Logical Operators
        4. Bitwise Operators
        5. Assignment Operators 
        6. Other Operators */


    printf("Enter two Numbers:  \n");
    scanf("%d %d", &a, &b);

        /* 9 arithmetic operations in C:: 
            1. "'+' Plus", 
            2. "'-' Minus", 
            3. "'*' Multiply", 
            4. "'/' Divide", 
            5. "'%' Modulus", 
            6. "'+'____ Unary plus", 
            7. "____'-' Unary minus", 
            8. "'++' Increment", 
            9. "'--' Decrement" . */

    printf("***Arithmetic Operators Operations*** \n");

    //plus ==> Adds two numeric values.
    add = a + b;
    printf("Addition of %d and %d is: %d \n", a, b, add);


    //minus ==> Subtracts right operand from left operand.	
    sub = a - b;
    printf("Subtraction of %d and %d is: %d \n", a, b, sub);


    //Multiply ==> Multiplies two numeric values.
    mul = a * b;
    printf("Multiplication of %d and %d is: %d \n", a, b, mul);


    //divide ==> divides two numeric values.
    div = a / b;
    printf("Division of %d and %d is: %d \n", a, b, div);


    //modulus ==> returns the remainder after diving the left operand with the right operand.
    rem = a % b;
    printf("Reminder of %d and %d is: %d \n", a, b, rem);


    //unary plus ==> is used to specify the positive values.
    printf("unary plus, +a = %d \n", +a);


    //unary minus ==> Flips the sign of the value.
    printf("unary minus, -a = %d \n", -a);
    
    
    //increment ==> Increases the value of the operand by 1.
    printf("increment, a++ = %d \n", a++);
    
    
    //decrement ==> Decreases the value of the operand by 1.
    printf("decrement, a-- = %d \n\n", a--);



        /* 6 relational operations in C:: 
            1. "'<' Less than", 
            2. "'>' Greater than", 
            3. "'<=' Less than or equal to", 
            4. "'>=' Greater than or equal to", 
            5. "'==' Equal to", 
            6. "'!=' Not equal to". */

    printf("***Relational Operators Operations***\n");

    //less than ==> Returns true if the left operand is less than the right operand. Else false.
    printf("Less Then, a < b  : %d \n", a < b);

    //greater than ==> Returns true if the left operand is greater than the right operand. Else false.
    printf("Greater Than, a > b  : %d \n", a > b);

    //less than or equal to ==> Returns true if the left operand is less than or equal to the right operand. Else false.
    printf("Less Than or Equal To, a <= b: %d \n", a <= b);

    //greater than or equal to ==> Returns true if the left operand is greater than or equal to right operand. Else false.
    printf("Greater Than or Equal To, a >= b: %d \n", a >= b);

    //equal to ==> Returns true if both the operands are equal.
    printf("Equal To, a == b: %d \n", a == b);
    
    //not equal to ==>	Returns true if both the operands are NOT equal.
    printf("Not Equal, a != b : %d \n\n", a != b);



        /* 3 logical operations in C:: 
            1. "'&&' Logical AND", 
            2. "'||' Logical OR", 
            3. "'!' Logical NOT". */

    printf("***Logical Operators Operations***\n");

    //logical AND ==> Returns true if both the operands are true.
    printf("Logical AND, a && b : %d \n", a && b);

    //logical OR ==> Returns true if both or any of the operand is true.
    printf("Logical OR, a || b : %d \n", a || b);

    //logical NOT ==> Returns true if the operand is false.
    printf("Logical NOT, !a: %d  \n\n", !a);


        /* 6 relational operations in C:: 
            1. "'&' Bitwise AND", 
            2. "'|' Bitwise OR", 
            3. "'^' Bitwise XOR", 
            4. "'~' Bitwise First Complement", 
            5. "'<<' Bitwise Leftshift", 
            6. "'>>' Bitwise Rightshilft". */

    printf("***Bitwise Operators Operations***\n");

    //Bitwise AND ==> Returns true if both the bits are 1.
    printf("Bitwise AND, a & b : %d \n", a & b);

    //Bitwise OR ==> Returns true if any of the bits is 1.
    printf("Bitwise OR, a | b : %d \n", a | b);

    //Bitwise XOR ==> Returns true if both the bits are different.
    printf("Bitwise XOR, a ^ b : %d \n", a ^ b);

    //Bitwise First Complement ==> Returns true if the bits are different.
    printf("Bitwise First Complement, ~a : %d \n", ~a);

    //Bitwise Leftshift ==> Shifts the bits to the left by the number of bits given as the second operand.
    printf("Bitwise Leftshift, a << 1 : %d \n", a << 1);

    //Bitwise Rightshift ==> Shifts the bits to the right by the number of bits given as the second operand.
    printf("Bitwise Rightshift, a >> 1 : %d \n\n", a >> 1);


        /* 11 assignment operations in C:: 
            1. "'=' Simple assignment", 
            2. "'+=' Plus and assign", 
            3. "'-=' Minus and assign",
            4. "'*=' Multiply and assign", 
            5. "'/=' Divide and assign", 
            6. "'%=' Modulus and assign", 
            7. "'&=' AND and assign", 
            8. "'|=' OR and assign", 
            9. "'^=' XOR and assign",
            10. "'>>=' Rightshift and assign",
            11. "'<<=' Leftshift and assign". */

    printf("***Assignment Operators Operations***\n");

    //Simple assignment assign ==> the value of the right operand to the left operand.
    printf("Simple assignment, a = b : %d \n", a = b);

    //Plus and assign ==> add the right operand and left operand and assign this value to the left operand.
    printf("Plus and assign, a += b : %d \n", a += b);

    //Minus and assign ==> Subtract the right operand and left operand and assign this value to the left operand.
    printf("Minus and assign, a -= b: %d\n", a -= b);
    
    //Multiply and assign ==> Multiply the right operand and left operand and assign this value to the left operand.
    printf("Multiply and assign, a *= b: %d\n", a *= b);
    
    //Divide and assign ==>	Divide the left operand with the right operand and assign this value to the left operand.
    printf("Divide and assign, a /= b: %d\n", a /= b);

    //Modulus and assign ==> Assign the remainder in the division of left operand with the right operand to the left operand.
    printf("Modulus and assign, a %= b: %d\n", a %= b);

    //AND and assign ==> Performs bitwise AND and assigns this value to the left operand.
    printf("AND and assign, a &= b: %d\n", a &= b);

    //OR and assign ==>	Performs bitwise OR and assigns this value to the left operand.
    printf("OR and assign, a |= b: %d \n", a |= b);

    //XOR and assign ==> Performs bitwise XOR and assigns this value to the left operand.
    printf("XOR and assign, a ^= b: %d\n", a ^= b);
    
    //Rightshift and assign ==>	Performs bitwise Rightshift and assign this value to the left operand.
    printf("Rightshift and assign, a >>= b: %d\n", a >> b);

    //Leftshift and assign ==>	Performs bitwise Leftshift and assign this value to the left operand.
    printf("Leftshift and assign, a <<= b: %d\n\n", a << b);


    //Other Operators
    printf("***Other Operators Operations***\n");

    /*size of ==> is a compile-time unary operator which can be used to compute the size of its operand.*/
    printf("size of a and b: %lu \n", sizeof(a + b));


            /* comma operator
    The comma operator ( , ) ==> is a binary operator that evaluates its first operand and discards the result, 
    and then evaluates the second operand and returns this value (and type).*/

    printf("Comma Operator:  a, b: %d \n", a, b);

    return 0;
}
