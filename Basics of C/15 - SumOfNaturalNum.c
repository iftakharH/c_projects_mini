// sum of natural numbers using while loops

#include <stdio.h>

int main ()
{
    int n, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);
    
    while (n > 0)
    {
        sum = sum + n;
        n = n - 1;
    }
    
    printf("Sum of natural numbers: %d", sum);
    
    return 0;
}