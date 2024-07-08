// Check Either the inputted number is even or odd using Ternary Operator

#include <stdio.h>

int main ()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("The number is %s\n", (n % 2 == 0) ? "even" : "odd");

    return 0;
}