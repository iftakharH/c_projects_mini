// Find Area and Perimeter of a rectangle using function

#include <stdio.h>

int area (int a, int b)
{
    int A;
    A = a * b;
    return A;
}

int Perimeter (int a, int b)
{
    int P;
    P = 2 * (a + b);
    return P;
}

int main()
{
    int a, b, A, P;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &a);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);

    A = area(a, b);

    P = Perimeter(a, b);

    printf("Area of the rectangle is: %d\n", A);

    printf("Perimeter of the rectangle is: %d\n", P);
    
    return 0;
}