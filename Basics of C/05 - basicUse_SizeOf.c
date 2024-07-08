// C program to find the size of int, char, float and double data types

#include <stdio.h>

int main()
{
    int intType;
    char charType;
    float floatType;
    double doubleType;

    printf("Size of int is: %ld", sizeof(intType));  // Calculate and Print the size of integer type

    printf("\nSize of char is: %ld", sizeof(charType)); // Calculate and Print the size of charType

    printf("\nSize of float is: %ld", sizeof(floatType));  // Calculate and Print the size of floatType

    printf("\nSize of double is: %ld", sizeof(doubleType));  // Calculate and Print the size of doubleType

    return 0;
}
